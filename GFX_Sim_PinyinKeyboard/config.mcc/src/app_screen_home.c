/*******************************************************************************
  Application for Screen - Home

  Company:
    Microchip Technology Inc.

  File Name:
    app_screen_home.c

  Summary:
    This file defines all the events on the screen 'Home' in MGS Composer.
 *******************************************************************************/

#include "gfx/legato/generated/le_gen_init.h"
#include "gfx/legato/string/legato_fixedstring.h"
#include "app_pinyin_lut.h"
#include <string.h>

#define MGS_SIM
/* Row1=digits(10) + Row2=QWERTY(10) + Row3=ASDFGHJKL(9) + Row4=ZXCVBNM(7) = 36 */
#define NUM_KEY_STRINGS      36
#define MAX_KEY_STR_LEN      8
#define MAX_INPUT_LEN        32
#define MAX_OUTPUT_LEN       128
#define MAX_FOUND_CANDIDATES 24   /* max results from findPinyinMatches */
#define CANDIDATES_PER_PAGE  8    /* pills shown per page in the candidate row */

/* Input-row geometry, taken from the design. Every widget in the row is a
   direct child of Home_panel_Active_Input_Field (774x48): the magnifier at
   x=15, the composed text (Home_label_Text_14) at x=39, the Btn_ClearInput
   button at x=530 and the TARGET TEMP panel at x=594. The composed text and
   the pinyin edit field share the span from INPUT_TEXT_X to INPUT_TEXT_RIGHT,
   which stops short of Btn_ClearInput so neither covers it. */
#define INPUT_TEXT_X          39
#define INPUT_TEXT_RIGHT     525
#define OUTPUT_LABEL_W       480
#define PINYIN_FIELD_Y         1
#define PINYIN_FIELD_H        46
#define PINYIN_FIELD_MIN_W    60
#define PINYIN_FIELD_GAP       4

/* Artwork used for a candidate pill. Legato draws button images unscaled and
   clips them to the widget, so the button is sized from the image itself rather
   than from hard-coded numbers — swap this for a taller pill graphic and the row
   re-lays itself out with no other code change. SelectBtn is 72x28 native; the
   design's own Btn_Select is the same pill at 88x46 with transparent padding,
   which is why a 69x28 button cropped its border away.

   Glyph headroom is set by this image: Font0's CJK glyphs are a fixed 24px tall
   and raster fonts cannot be scaled, so the only way to give the characters more
   room inside the pill is a taller pill. */
#define PILL_IMAGE            SelectBtn
#define PILL_MIN_GAP           6

/* Font for the candidate pills. Legato raster fonts are fixed-size: each glyph
   is a bitmap baked at the point size the asset was generated with, and there is
   no scaling at draw time. So the pill text is made smaller by pointing this at
   a smaller font asset — there is no size to set here.

   Font0 is 24pt, giving 24px-tall CJK glyphs in a 28px pill. It is also the only
   font in the project with CJK coverage, so a smaller one has to be created in
   MGS Composer before this can change. keepRenderable() queries this same font,
   so the coverage check always matches what the pills actually draw. */
#define CANDIDATE_FONT        Font0

/* ----- Fixed strings for keypad rows ----- */
static leFixedString keyStrings[NUM_KEY_STRINGS];
static leChar        keyStringBuffers[NUM_KEY_STRINGS][MAX_KEY_STR_LEN];

/* ----- Fixed strings for the candidate pills ----- */
static leFixedString candidateStrings[CANDIDATES_PER_PAGE];
static leChar        candidateStringBuffers[CANDIDATES_PER_PAGE][MAX_KEY_STR_LEN];

/* ----- Pinyin state ----- */
static char        lastInputText[MAX_INPUT_LEN] = {0};
static const char* allCandidates[MAX_FOUND_CANDIDATES];
static int         totalCandidateCount = 0;
static int         candidatePageOffset = 0;

/* ----- Committed Chinese text -----
   Displayed in the design's Home_label_Text_14, which already sits inside the
   input box where the mock-up shows the composed recipe name. */
static leFixedString outputString;
static leChar        outputStringBuffer[MAX_OUTPUT_LEN];
static leChar        outputChars[MAX_OUTPUT_LEN];
static uint32_t      outputCharCount = 0;

/* ----- Candidate row -----
   The row is drawn by widgets from MGS Composer: Home_SelectPanel is its
   background, Home_Btn_Prev / Home_Btn_Next page through the results, and
   Home_Btn_Select is candidate slot 0. Slots 1..7 are cloned from
   Home_Btn_Select in buildCandidateRow(), so the design only has to carry a
   single pill. */
static leButtonWidget* candidateBtns[CANDIDATES_PER_PAGE];
static leBool          candidateRowReady = LE_FALSE;

/* Pills actually laid out, <= CANDIDATES_PER_PAGE; set from the pill artwork's
   width in buildCandidateRow() and used as the paging step. */
static int             pillsPerPage = CANDIDATES_PER_PAGE;

/* ----- Key label arrays -----
   Row1 = digits  (keyStrings indices  0- 9)
   Row2 = QWERTY  (keyStrings indices 10-19)
   Row3 = ASDFG   (keyStrings indices 20-28)
   Row4 = ZXCVB   (keyStrings indices 29-35)  col7=backspace, no string */
static const char* row1Keys[]      = {"1","2","3","4","5","6","7","8","9","0"};
static const char* row2Keys[]      = {"q","w","e","r","t","y","u","i","o","p"};
static const char* row2KeysUpper[] = {"Q","W","E","R","T","Y","U","I","O","P"};
static const char* row3Keys[]      = {"a","s","d","f","g","h","j","k","l"};
static const char* row3KeysUpper[] = {"A","S","D","F","G","H","J","K","L"};
static const char* row4Keys[]      = {"z","x","c","v","b","n","m"};
static const char* row4KeysUpper[] = {"Z","X","C","V","B","N","M"};

static leBool shiftActive = LE_FALSE;

/* ----- Forward declarations ----- */
static void onTextFieldChanged(leTextFieldWidget* wgt);
static void onCandidateBtnPressed(leButtonWidget* btn);
static void onPrevPage(leButtonWidget* btn);
static void onNextPage(leButtonWidget* btn);

/* ---------------------------------------------------------------------------
   Convert first UTF-8 character into a single leChar.
--------------------------------------------------------------------------- */
static uint32_t oneUtf8ToLeChar(const char* utf8, leChar* out)
{
    const unsigned char* s = (const unsigned char*)utf8;
    if (!*s) { out[0] = 0; return 0; }

    if      ((*s & 0x80) == 0)    { out[0] = *s; }
    else if ((*s & 0xE0) == 0xC0) { out[0] = (leChar)(((s[0] & 0x1F) << 6) | (s[1] & 0x3F)); }
    else if ((*s & 0xF0) == 0xE0) { out[0] = (leChar)(((s[0] & 0x0F) << 12) | ((s[1] & 0x3F) << 6) | (s[2] & 0x3F)); }
    else                           { out[0] = 0; return 0; }
    out[1] = 0;
    return 1;
}

/* ---------------------------------------------------------------------------
   Move a widget to the end of its parent's child list, which is the top of
   the paint order. The candidate row is listed ahead of the background image
   in the design, so without this it would be drawn underneath it.
--------------------------------------------------------------------------- */
static void raiseToTop(leWidget* wgt)
{
    leWidget* parent;

    if (wgt == NULL) return;

    parent = wgt->parent;
    if (parent == NULL) return;

    parent->fn->removeChild(parent, wgt);
    parent->fn->addChild(parent, wgt);
}

/* ---------------------------------------------------------------------------
   Candidate row helpers
--------------------------------------------------------------------------- */
static void showCandidateRow(leBool show)
{
    int i;

    if (Home_SelectPanel)
        Home_SelectPanel->fn->setVisible(Home_SelectPanel, show);
    if (Home_Btn_Prev)
        Home_Btn_Prev->fn->setVisible(Home_Btn_Prev, show);
    if (Home_Btn_Next)
        Home_Btn_Next->fn->setVisible(Home_Btn_Next, show);

    if (!show)
    {
        for (i = 0; i < CANDIDATES_PER_PAGE; i++)
            if (candidateBtns[i])
                candidateBtns[i]->fn->setVisible(candidateBtns[i], LE_FALSE);
    }
}

static void refreshCandidates(void)
{
    int i;
    int pageEnd;
    int pageCount;

    if (!candidateRowReady) return;

    if (totalCandidateCount <= 0)
    {
        showCandidateRow(LE_FALSE);
        return;
    }

    pageEnd = candidatePageOffset + pillsPerPage;
    if (pageEnd > totalCandidateCount) pageEnd = totalCandidateCount;
    pageCount = pageEnd - candidatePageOffset;

    showCandidateRow(LE_TRUE);

    for (i = 0; i < CANDIDATES_PER_PAGE; i++)
    {
        if (!candidateBtns[i]) continue;

        if (i < pageCount)
        {
            leChar   charBuf[8];
            uint32_t clen = oneUtf8ToLeChar(allCandidates[candidatePageOffset + i], charBuf);
            candidateStrings[i].fn->setFromChar(&candidateStrings[i], charBuf, clen);
            candidateBtns[i]->fn->setString(candidateBtns[i], (leString*)&candidateStrings[i]);
            candidateBtns[i]->fn->setVisible(candidateBtns[i], LE_TRUE);
        }
        else
        {
            candidateBtns[i]->fn->setVisible(candidateBtns[i], LE_FALSE);
        }
    }

    if (Home_Btn_Prev)
        Home_Btn_Prev->fn->setEnabled(Home_Btn_Prev,
            candidatePageOffset > 0 ? LE_TRUE : LE_FALSE);
    if (Home_Btn_Next)
        Home_Btn_Next->fn->setEnabled(Home_Btn_Next,
            (candidatePageOffset + pillsPerPage < totalCandidateCount)
            ? LE_TRUE : LE_FALSE);
}

static void hideCandidates(void)
{
    int i;

    totalCandidateCount = 0;
    candidatePageOffset = 0;

    showCandidateRow(LE_FALSE);

    for (i = 0; i < CANDIDATES_PER_PAGE; i++)
        if (candidateBtns[i])
            candidateBtns[i]->fn->setString(candidateBtns[i], NULL);
}

/* ---------------------------------------------------------------------------
   Clone Home_Btn_Select into the remaining candidate slots and hook up the
   row's callbacks. Home_Btn_Prev marks the right-hand edge of the pill area,
   so the slots are spread evenly between the two.
--------------------------------------------------------------------------- */
static void buildCandidateRow(void)
{
    leWidget* parent;
    leRect    slot;
    int32_t   pitch;
    int       i;

    if (candidateRowReady || Home_Btn_Select == NULL) return;

    parent = Home_Btn_Select->widget.parent;
    slot   = Home_Btn_Select->widget.rect;

    /* Match the button to the artwork, and centre the row of pills vertically in
       the SelectPanel bar so a taller pill graphic stays balanced. */
    slot.width  = (int32_t)PILL_IMAGE.buffer.size.width;
    slot.height = (int32_t)PILL_IMAGE.buffer.size.height;

    if (Home_SelectPanel != NULL)
        slot.y = Home_SelectPanel->widget.rect.y +
                 ((int32_t)Home_SelectPanel->widget.rect.height - slot.height) / 2;

    /* Fix up slot 0 before cloning, so every slot inherits the same look:
        - the pill image at its native size, so its border is not clipped.
        - BEHIND, or the pill image is laid out beside the label instead of
          under it and pushes the glyph outside the button (LEFTOF is the
          leButtonWidget default and the design never overrides it).
        - a scheme, since the design sets none and the glyph would otherwise
          draw in the default dark colour. */
    Home_Btn_Select->fn->setPosition(Home_Btn_Select, slot.x, slot.y);
    Home_Btn_Select->fn->setSize(Home_Btn_Select, slot.width, slot.height);
    Home_Btn_Select->fn->setPressedImage(Home_Btn_Select, (leImage*)&PILL_IMAGE);
    Home_Btn_Select->fn->setReleasedImage(Home_Btn_Select, (leImage*)&PILL_IMAGE);
    Home_Btn_Select->fn->setImagePosition(Home_Btn_Select,
        LE_RELATIVE_POSITION_BEHIND);
    Home_Btn_Select->fn->setScheme(Home_Btn_Select, &text_goldenrod);

    /* Fit as many pills as the gap up to Home_Btn_Prev allows, so a wider pill
       graphic reduces the page size instead of overlapping the arrows. */
    if (Home_Btn_Prev != NULL)
    {
        int32_t avail = Home_Btn_Prev->widget.rect.x - slot.x;

        pillsPerPage = (int)(avail / (slot.width + PILL_MIN_GAP));
        if (pillsPerPage < 1)                   pillsPerPage = 1;
        if (pillsPerPage > CANDIDATES_PER_PAGE) pillsPerPage = CANDIDATES_PER_PAGE;

        pitch = avail / pillsPerPage;
    }
    else
    {
        pillsPerPage = CANDIDATES_PER_PAGE;
        pitch        = slot.width + PILL_MIN_GAP;
    }

    candidateBtns[0] = Home_Btn_Select;

    for (i = 1; i < pillsPerPage; i++)
    {
        leButtonWidget* btn = leButtonWidget_New();
        if (btn == NULL) continue;

        btn->fn->setPosition(btn, slot.x + i * pitch, slot.y);
        btn->fn->setSize(btn, slot.width, slot.height);
        btn->fn->setBackgroundType(btn,
            Home_Btn_Select->fn->getBackgroundType(Home_Btn_Select));
        btn->fn->setBorderType(btn,
            Home_Btn_Select->fn->getBorderType(Home_Btn_Select));
        btn->fn->setScheme(btn, Home_Btn_Select->fn->getScheme(Home_Btn_Select));
        btn->fn->setPressedImage(btn,
            Home_Btn_Select->fn->getPressedImage(Home_Btn_Select));
        btn->fn->setReleasedImage(btn,
            Home_Btn_Select->fn->getReleasedImage(Home_Btn_Select));
        btn->fn->setImagePosition(btn,
            Home_Btn_Select->fn->getImagePosition(Home_Btn_Select));

        candidateBtns[i] = btn;

        if (parent)
            parent->fn->addChild(parent, (leWidget*)btn);
    }

    for (i = 0; i < CANDIDATES_PER_PAGE; i++)
        if (candidateBtns[i])
            candidateBtns[i]->fn->setPressedEventCallback(candidateBtns[i],
                onCandidateBtnPressed);

    if (Home_Btn_Prev)
        Home_Btn_Prev->fn->setPressedEventCallback(Home_Btn_Prev, onPrevPage);
    if (Home_Btn_Next)
        Home_Btn_Next->fn->setPressedEventCallback(Home_Btn_Next, onNextPage);

    /* Bring the whole row in front of the full-screen background image. */
    raiseToTop((leWidget*)Home_SelectPanel);
    for (i = 0; i < CANDIDATES_PER_PAGE; i++)
        raiseToTop((leWidget*)candidateBtns[i]);
    raiseToTop((leWidget*)Home_Btn_Prev);
    raiseToTop((leWidget*)Home_Btn_Next);

    candidateRowReady = LE_TRUE;
    hideCandidates();
}

/* ---------------------------------------------------------------------------
   Push the committed text into the label and keep the pinyin edit field
   sitting just after it.
--------------------------------------------------------------------------- */
static void refreshOutputLabel(void)
{
    leRect strRect;

    /* setFromChar returns without storing or invalidating when the length is
       zero, so an empty string has to go through clear() or the label keeps
       rendering the previous text. */
    if (outputCharCount == 0)
        outputString.fn->clear(&outputString);
    else
        outputString.fn->setFromChar(&outputString, outputChars, outputCharCount);

    if (Home_label_Text_14)
        Home_label_Text_14->fn->setString(Home_label_Text_14,
            (leString*)&outputString);

    if (Home_TextFieldWidget_Input == NULL) return;

    strRect.width = 0;
    outputString.fn->getRect(&outputString, &strRect);

    {
        int32_t x = INPUT_TEXT_X + strRect.width + PINYIN_FIELD_GAP;

        if (x > INPUT_TEXT_RIGHT - PINYIN_FIELD_MIN_W)
            x = INPUT_TEXT_RIGHT - PINYIN_FIELD_MIN_W;

        Home_TextFieldWidget_Input->fn->setPosition(Home_TextFieldWidget_Input,
            x, PINYIN_FIELD_Y);
        Home_TextFieldWidget_Input->fn->setSize(Home_TextFieldWidget_Input,
            INPUT_TEXT_RIGHT - x, PINYIN_FIELD_H);
    }
}

/* ---------------------------------------------------------------------------
   Append a UTF-8 Chinese character to the output label and clear input.
--------------------------------------------------------------------------- */
static void appendToOutput(const char* utf8Char)
{
    leChar   charBuf[8];
    uint32_t len;

    if (!utf8Char) return;

    len = oneUtf8ToLeChar(utf8Char, charBuf);
    if (outputCharCount + len < MAX_OUTPUT_LEN - 1)
    {
        uint32_t i;
        for (i = 0; i < len; i++)
            outputChars[outputCharCount++] = charBuf[i];
        outputChars[outputCharCount] = 0;

        refreshOutputLabel();
    }

    lastInputText[0]    = '\0';
    candidatePageOffset = 0;
    hideCandidates();
    Home_TextFieldWidget_Input->fn->editClear(Home_TextFieldWidget_Input);
}

/* ---------------------------------------------------------------------------
   Drop candidates Font0 has no glyph for, compacting the list in place and
   returning the surviving count.

   leFont_GetGlyphInfo reports LE_FAILURE for a codepoint the font does not
   carry and hands back a blank placeholder glyph — half the font height wide
   with no pixel data. Drawn on a pill that is the empty box you would otherwise
   see. Offering a character the display cannot render is never useful, so they
   are filtered out before paging is calculated.

   Characters are added to Font0 by putting them in the strChSet string in the
   MGS Composer string table; anything present there passes this filter.
--------------------------------------------------------------------------- */
static int keepRenderable(const char** list, int count)
{
    leFontGlyph glyph;
    int         in;
    int         out = 0;

    for (in = 0; in < count; in++)
    {
        leChar   charBuf[8];
        uint32_t clen = oneUtf8ToLeChar(list[in], charBuf);

        if (clen == 0) continue;

        if (leFont_GetGlyphInfo((leFont*)&CANDIDATE_FONT, charBuf[0], &glyph)
            == LE_SUCCESS)
            list[out++] = list[in];
    }

    return out;
}

/* ---------------------------------------------------------------------------
   Update candidate row from the text field's current pinyin content.
--------------------------------------------------------------------------- */
static void updatePinyinHint(void)
{
    char            inputText[MAX_INPUT_LEN] = {0};
    const leString* str;
    uint32_t        len, i;

    str = Home_TextFieldWidget_Input->fn->getString(Home_TextFieldWidget_Input);
    if (!str) { hideCandidates(); return; }

    len = str->fn->length(str);
    if (len >= MAX_INPUT_LEN) len = MAX_INPUT_LEN - 1;
    for (i = 0; i < len; i++)
        inputText[i] = (char)str->fn->charAt(str, i);
    inputText[len] = '\0';

    if (strcmp(inputText, lastInputText) == 0) return;
    strcpy(lastInputText, inputText);

    candidatePageOffset = 0;
    totalCandidateCount = findPinyinMatches(inputText, allCandidates, MAX_FOUND_CANDIDATES);
    totalCandidateCount = keepRenderable(allCandidates, totalCandidateCount);
    refreshCandidates();
}

/* ---------------------------------------------------------------------------
   Keypad row helpers
--------------------------------------------------------------------------- */
static void initKeypadRow(leKeyPadWidget* keypad, const char** labels,
                          uint32_t count, uint32_t startIdx)
{
    uint32_t col;
    if (!keypad) return;
    for (col = 0; col < count; col++)
    {
        uint32_t        idx = startIdx + col;
        leButtonWidget* btn;

        leFixedString_Constructor(&keyStrings[idx], keyStringBuffers[idx], MAX_KEY_STR_LEN);
        keyStrings[idx].fn->setFont(&keyStrings[idx], (leFont*)&Font0);
        keyStrings[idx].fn->setFromCStr(&keyStrings[idx], labels[col]);

        btn = keypad->fn->getCellButton(keypad, 0, col);
        if (btn) btn->fn->setString(btn, (leString*)&keyStrings[idx]);

        keypad->fn->setKeyAction(keypad, 0, col, LE_KEYPAD_CELL_ACTION_APPEND);
        keypad->fn->setKeyValue(keypad, 0, col, (leString*)&keyStrings[idx]);
    }
}

static void updateKeypadRow(leKeyPadWidget* keypad, const char** labels,
                            uint32_t count, uint32_t startIdx)
{
    uint32_t col;
    if (!keypad) return;
    for (col = 0; col < count; col++)
    {
        uint32_t        idx = startIdx + col;
        leButtonWidget* btn;

        keyStrings[idx].fn->setFromCStr(&keyStrings[idx], labels[col]);
        btn = keypad->fn->getCellButton(keypad, 0, col);
        if (btn) btn->fn->setString(btn, (leString*)&keyStrings[idx]);
        keypad->fn->setKeyValue(keypad, 0, col, (leString*)&keyStrings[idx]);
    }
}

static void setKeypadCase(leBool uppercase)
{
    if (uppercase)
    {
        updateKeypadRow(Home_KeysRow2, row2KeysUpper, 10, 10);
        updateKeypadRow(Home_KeysRow3, row3KeysUpper,  9, 20);
        updateKeypadRow(Home_KeysRow4, row4KeysUpper,  7, 29);
    }
    else
    {
        updateKeypadRow(Home_KeysRow2, row2Keys, 10, 10);
        updateKeypadRow(Home_KeysRow3, row3Keys,  9, 20);
        updateKeypadRow(Home_KeysRow4, row4Keys,  7, 29);
    }
}

/* ---------------------------------------------------------------------------
   Keypad click event handlers — called by generated screen code
--------------------------------------------------------------------------- */
void event_Home_KeysRow1_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell,
                                    uint32_t row, uint32_t col)
{
    /* Digit row — APPEND action handled by keypad; shift unaffected by digits */
    (void)wgt; (void)cell; (void)row; (void)col;
}

void event_Home_KeysRow2_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell,
                                    uint32_t row, uint32_t col)
{
    (void)wgt; (void)cell; (void)row; (void)col;
    if (shiftActive) { shiftActive = LE_FALSE; setKeypadCase(LE_FALSE); }
}

void event_Home_KeysRow3_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell,
                                    uint32_t row, uint32_t col)
{
    (void)wgt; (void)cell; (void)row; (void)col;
    if (shiftActive) { shiftActive = LE_FALSE; setKeypadCase(LE_FALSE); }
}

void event_Home_KeysRow4_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell,
                                    uint32_t row, uint32_t col)
{
    (void)wgt; (void)cell; (void)row;
    /* col 7 is backspace — don't deactivate shift for backspace */
    if (col < 7 && shiftActive) { shiftActive = LE_FALSE; setKeypadCase(LE_FALSE); }
}

/* ---------------------------------------------------------------------------
   Shift and Start event handlers — called by generated screen code
--------------------------------------------------------------------------- */
void event_Home_BtnKeyShift_OnPressed(leButtonWidget* btn)
{
    (void)btn;
    shiftActive = LE_TRUE;
    setKeypadCase(LE_TRUE);
}

void event_Home_BtnKeyShift_OnReleased(leButtonWidget* btn)
{
    (void)btn;
    shiftActive = LE_FALSE;
    setKeypadCase(LE_FALSE);
}

void event_Home_BtnKeyStart_OnReleased(leButtonWidget* btn)
{
    (void)btn;
}

/* ---------------------------------------------------------------------------
   Text-changed callback (manually registered)
--------------------------------------------------------------------------- */
static void onTextFieldChanged(leTextFieldWidget* wgt)
{
    (void)wgt;
    updatePinyinHint();
    if (shiftActive)
    {
        shiftActive = LE_FALSE;
        setKeypadCase(LE_FALSE);
        Home_BtnKeyShift->fn->setPressed(Home_BtnKeyShift, LE_FALSE);
    }
}

/* ---------------------------------------------------------------------------
   Space button — commits the first candidate on the current page
--------------------------------------------------------------------------- */
void event_Home_BtnKeySpace_OnReleased(leButtonWidget* btn)
{
    (void)btn;
    if (totalCandidateCount > 0)
        appendToOutput(allCandidates[candidatePageOffset]);
}

/* ---------------------------------------------------------------------------
   Discard the pinyin being typed and the candidates it produced. The characters
   already committed to Home_label_Text_14 are left alone.
--------------------------------------------------------------------------- */
static void clearPinyinInput(void)
{
    lastInputText[0]    = '\0';
    candidatePageOffset = 0;

    if (Home_TextFieldWidget_Input)
        Home_TextFieldWidget_Input->fn->editClear(Home_TextFieldWidget_Input);

    hideCandidates();
}

/* ---------------------------------------------------------------------------
   Empty the field completely: the committed Chinese characters as well as any
   half-typed pinyin. The pinyin goes first, because refreshOutputLabel() moves
   the edit field back to the head of the row once the composed text is gone.
--------------------------------------------------------------------------- */
static void clearAllInput(void)
{
    clearPinyinInput();

    outputCharCount = 0;
    outputChars[0]  = 0;
    refreshOutputLabel();
}

/* 清空 — drops only the pinyin currently being typed. */
void event_Home_BtnKeyClear_OnReleased(leButtonWidget* btn)
{
    (void)btn;
    clearPinyinInput();
}

/* ⊗ in the input row — wipes the whole composed phrase. */
void event_Home_Btn_ClearInput_OnReleased(leButtonWidget* btn)
{
    (void)btn;
    clearAllInput();
}

/* The same two actions on press. Released-only buttons have never been observed
   firing in this build, while pressed callbacks demonstrably do, so both clear
   buttons are bound to either event. Both routines are idempotent, so the
   doubled-up binding costs nothing. */
static void onKeyClearPressed(leButtonWidget* btn)
{
    (void)btn;
    clearPinyinInput();
}

static void onClearInputPressed(leButtonWidget* btn)
{
    (void)btn;
    clearAllInput();
}

/* ---------------------------------------------------------------------------
   Candidate row callbacks (registered in buildCandidateRow)
--------------------------------------------------------------------------- */
static void onCandidateBtnPressed(leButtonWidget* btn)
{
    int i;
    for (i = 0; i < CANDIDATES_PER_PAGE; i++)
    {
        if (candidateBtns[i] == btn)
        {
            int idx = candidatePageOffset + i;
            if (idx < totalCandidateCount)
                appendToOutput(allCandidates[idx]);
            return;
        }
    }
}

static void onPrevPage(leButtonWidget* btn)
{
    (void)btn;
    if (candidatePageOffset >= pillsPerPage)
    {
        candidatePageOffset -= pillsPerPage;
        refreshCandidates();
    }
}

static void onNextPage(leButtonWidget* btn)
{
    (void)btn;
    if (candidatePageOffset + pillsPerPage < totalCandidateCount)
    {
        candidatePageOffset += pillsPerPage;
        refreshCandidates();
    }
}

/* ---------------------------------------------------------------------------
   Screen lifecycle
--------------------------------------------------------------------------- */
void Home_OnShow(void)
{
    int i;

    /* Digit row — 1-9, 0 with APPEND action */
    initKeypadRow(Home_KeysRow1, row1Keys, 10,  0);

    /* Letter rows */
    initKeypadRow(Home_KeysRow2, row2Keys, 10, 10);
    initKeypadRow(Home_KeysRow3, row3Keys,  9, 20);
    initKeypadRow(Home_KeysRow4, row4Keys,  7, 29);

    /* Col 7 of Row4 is the backspace key */
    Home_KeysRow4->fn->setKeyAction(Home_KeysRow4, 0, 7, LE_KEYPAD_CELL_ACTION_BACKSPACE);

    /* Candidate pill strings — see CANDIDATE_FONT for how to resize these */
    for (i = 0; i < CANDIDATES_PER_PAGE; i++)
    {
        leFixedString_Constructor(&candidateStrings[i],
            candidateStringBuffers[i], MAX_KEY_STR_LEN);
        candidateStrings[i].fn->setFont(&candidateStrings[i],
            (leFont*)&CANDIDATE_FONT);
    }

    /* Committed Chinese text */
    leFixedString_Constructor(&outputString, outputStringBuffer, MAX_OUTPUT_LEN);
    outputString.fn->setFont(&outputString, (leFont*)&Font0);

    /* State reset */
    lastInputText[0]    = '\0';
    totalCandidateCount = 0;
    candidatePageOffset = 0;
    outputCharCount     = 0;
    outputChars[0]      = 0;
    shiftActive         = LE_FALSE;

    /* The design leaves the edit field with neither a font nor a scheme, so
       typed pinyin had no glyphs and drew in the default dark text colour. */
    Home_TextFieldWidget_Input->fn->setFont(Home_TextFieldWidget_Input,
        (leFont*)&Font0);
    Home_TextFieldWidget_Input->fn->setScheme(Home_TextFieldWidget_Input,
        &text_white);

    /* Widen the composed text to fit a full recipe name. Only the label grows —
       its parent is the entire 774px input row, and shrinking that would clip
       the row's clear icon and the TARGET TEMP panel beside it. */
    if (Home_label_Text_14)
    {
        Home_label_Text_14->fn->setSize(Home_label_Text_14, OUTPUT_LABEL_W,
            Home_label_Text_14->widget.rect.height);
        Home_label_Text_14->fn->setHAlignment(Home_label_Text_14, LE_HALIGN_LEFT);
    }

    /* The flattened Figma bitmap that used to cover this row (Home_image_
       Container_29) is gone from the design, so the label and the edit field no
       longer need lifting — and lifting them would put them above
       Home_Btn_ClearInput and swallow its touches. */

    refreshOutputLabel();

    buildCandidateRow();

    /* Re-assert the 清空 binding here rather than trusting the generated
       registration alone, and make sure the button is not toggleable — a
       toggleable leButtonWidget only raises its released event on the second
       tap, which looks exactly like a dead button. */
    if (Home_BtnKeyClear)
    {
        Home_BtnKeyClear->fn->setToggleable(Home_BtnKeyClear, LE_FALSE);
        Home_BtnKeyClear->fn->setReleasedEventCallback(Home_BtnKeyClear,
            event_Home_BtnKeyClear_OnReleased);
        Home_BtnKeyClear->fn->setPressedEventCallback(Home_BtnKeyClear,
            onKeyClearPressed);
    }

    if (Home_Btn_ClearInput)
    {
        Home_Btn_ClearInput->fn->setToggleable(Home_Btn_ClearInput, LE_FALSE);
        Home_Btn_ClearInput->fn->setReleasedEventCallback(Home_Btn_ClearInput,
            event_Home_Btn_ClearInput_OnReleased);
        Home_Btn_ClearInput->fn->setPressedEventCallback(Home_Btn_ClearInput,
            onClearInputPressed);
    }

    Home_TextFieldWidget_Input->fn->setTextChangedEventCallback(
        Home_TextFieldWidget_Input, onTextFieldChanged);

    leSetEditWidget((leEditWidget*)Home_TextFieldWidget_Input);
}

void Home_OnHide(void)
{
    int i;

    /* The clones are children of a screen widget, so screenHide_Home deletes
       them along with the rest of the tree — just drop the references. */
    for (i = 0; i < CANDIDATES_PER_PAGE; i++)
        candidateBtns[i] = NULL;

    candidateRowReady = LE_FALSE;
}

void Home_OnUpdate(void)
{
}
