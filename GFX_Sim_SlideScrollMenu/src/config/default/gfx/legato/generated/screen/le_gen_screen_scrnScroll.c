#include "gfx/legato/generated/screen/le_gen_screen_scrnScroll.h"

// screen member widget declarations
static leWidget* root0;

leWidget* scrnScroll_BackgroundPanel;
leWidget* scrnScroll_pnlSlideMenu;
leWidget* scrnScroll_pnlEventFilter;
leLabelWidget* scrnScroll_lblItemSelected;
leLabelWidget* scrnScroll_LabelWidget_0;
leLabelWidget* scrnScroll_lblItemA;
leLabelWidget* scrnScroll_lblItemB;
leLabelWidget* scrnScroll_lblItemC;
leLabelWidget* scrnScroll_lblItemD;
leLabelWidget* scrnScroll_lblItemE;
leLabelWidget* scrnScroll_lblItemF;
leLabelWidget* scrnScroll_lblItemG;
leLabelWidget* scrnScroll_lblItemH;
leLabelWidget* scrnScroll_lblItemI;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_scrnScroll(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_scrnScroll(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, 480, 272);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    scrnScroll_BackgroundPanel = leWidget_New();
    scrnScroll_BackgroundPanel->fn->setPosition(scrnScroll_BackgroundPanel, 0, 0);
    scrnScroll_BackgroundPanel->fn->setSize(scrnScroll_BackgroundPanel, 480, 272);
    scrnScroll_BackgroundPanel->fn->setScheme(scrnScroll_BackgroundPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)scrnScroll_BackgroundPanel);

    scrnScroll_pnlSlideMenu = leWidget_New();
    scrnScroll_pnlSlideMenu->fn->setPosition(scrnScroll_pnlSlideMenu, 0, 90);
    scrnScroll_pnlSlideMenu->fn->setSize(scrnScroll_pnlSlideMenu, 1000, 100);
    scrnScroll_pnlSlideMenu->fn->setBackgroundType(scrnScroll_pnlSlideMenu, LE_WIDGET_BACKGROUND_NONE);
    scrnScroll_pnlSlideMenu->fn->setBorderType(scrnScroll_pnlSlideMenu, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)scrnScroll_pnlSlideMenu);

    scrnScroll_lblItemA = leLabelWidget_New();
    scrnScroll_lblItemA->fn->setPosition(scrnScroll_lblItemA, 20, 10);
    scrnScroll_lblItemA->fn->setSize(scrnScroll_lblItemA, 80, 80);
    scrnScroll_lblItemA->fn->setScheme(scrnScroll_lblItemA, &ItemScheme);
    scrnScroll_lblItemA->fn->setBackgroundType(scrnScroll_lblItemA, LE_WIDGET_BACKGROUND_NONE);
    scrnScroll_lblItemA->fn->setBorderType(scrnScroll_lblItemA, LE_WIDGET_BORDER_LINE);
    scrnScroll_lblItemA->fn->setHAlignment(scrnScroll_lblItemA, LE_HALIGN_CENTER);
    scrnScroll_lblItemA->fn->setString(scrnScroll_lblItemA, (leString*)&string_strA);
    scrnScroll_pnlSlideMenu->fn->addChild(scrnScroll_pnlSlideMenu, (leWidget*)scrnScroll_lblItemA);

    scrnScroll_lblItemB = leLabelWidget_New();
    scrnScroll_lblItemB->fn->setPosition(scrnScroll_lblItemB, 130, 10);
    scrnScroll_lblItemB->fn->setSize(scrnScroll_lblItemB, 80, 80);
    scrnScroll_lblItemB->fn->setScheme(scrnScroll_lblItemB, &ItemScheme);
    scrnScroll_lblItemB->fn->setBackgroundType(scrnScroll_lblItemB, LE_WIDGET_BACKGROUND_NONE);
    scrnScroll_lblItemB->fn->setBorderType(scrnScroll_lblItemB, LE_WIDGET_BORDER_LINE);
    scrnScroll_lblItemB->fn->setHAlignment(scrnScroll_lblItemB, LE_HALIGN_CENTER);
    scrnScroll_lblItemB->fn->setString(scrnScroll_lblItemB, (leString*)&string_strB);
    scrnScroll_pnlSlideMenu->fn->addChild(scrnScroll_pnlSlideMenu, (leWidget*)scrnScroll_lblItemB);

    scrnScroll_lblItemC = leLabelWidget_New();
    scrnScroll_lblItemC->fn->setPosition(scrnScroll_lblItemC, 240, 10);
    scrnScroll_lblItemC->fn->setSize(scrnScroll_lblItemC, 80, 80);
    scrnScroll_lblItemC->fn->setScheme(scrnScroll_lblItemC, &ItemScheme);
    scrnScroll_lblItemC->fn->setBackgroundType(scrnScroll_lblItemC, LE_WIDGET_BACKGROUND_NONE);
    scrnScroll_lblItemC->fn->setBorderType(scrnScroll_lblItemC, LE_WIDGET_BORDER_LINE);
    scrnScroll_lblItemC->fn->setHAlignment(scrnScroll_lblItemC, LE_HALIGN_CENTER);
    scrnScroll_lblItemC->fn->setString(scrnScroll_lblItemC, (leString*)&string_strC);
    scrnScroll_pnlSlideMenu->fn->addChild(scrnScroll_pnlSlideMenu, (leWidget*)scrnScroll_lblItemC);

    scrnScroll_lblItemD = leLabelWidget_New();
    scrnScroll_lblItemD->fn->setPosition(scrnScroll_lblItemD, 350, 10);
    scrnScroll_lblItemD->fn->setSize(scrnScroll_lblItemD, 80, 80);
    scrnScroll_lblItemD->fn->setScheme(scrnScroll_lblItemD, &ItemScheme);
    scrnScroll_lblItemD->fn->setBackgroundType(scrnScroll_lblItemD, LE_WIDGET_BACKGROUND_NONE);
    scrnScroll_lblItemD->fn->setBorderType(scrnScroll_lblItemD, LE_WIDGET_BORDER_LINE);
    scrnScroll_lblItemD->fn->setHAlignment(scrnScroll_lblItemD, LE_HALIGN_CENTER);
    scrnScroll_lblItemD->fn->setString(scrnScroll_lblItemD, (leString*)&string_strD);
    scrnScroll_pnlSlideMenu->fn->addChild(scrnScroll_pnlSlideMenu, (leWidget*)scrnScroll_lblItemD);

    scrnScroll_lblItemE = leLabelWidget_New();
    scrnScroll_lblItemE->fn->setPosition(scrnScroll_lblItemE, 460, 10);
    scrnScroll_lblItemE->fn->setSize(scrnScroll_lblItemE, 80, 80);
    scrnScroll_lblItemE->fn->setScheme(scrnScroll_lblItemE, &ItemScheme);
    scrnScroll_lblItemE->fn->setBackgroundType(scrnScroll_lblItemE, LE_WIDGET_BACKGROUND_NONE);
    scrnScroll_lblItemE->fn->setBorderType(scrnScroll_lblItemE, LE_WIDGET_BORDER_LINE);
    scrnScroll_lblItemE->fn->setHAlignment(scrnScroll_lblItemE, LE_HALIGN_CENTER);
    scrnScroll_lblItemE->fn->setString(scrnScroll_lblItemE, (leString*)&string_strE);
    scrnScroll_pnlSlideMenu->fn->addChild(scrnScroll_pnlSlideMenu, (leWidget*)scrnScroll_lblItemE);

    scrnScroll_lblItemF = leLabelWidget_New();
    scrnScroll_lblItemF->fn->setPosition(scrnScroll_lblItemF, 570, 10);
    scrnScroll_lblItemF->fn->setSize(scrnScroll_lblItemF, 80, 80);
    scrnScroll_lblItemF->fn->setScheme(scrnScroll_lblItemF, &ItemScheme);
    scrnScroll_lblItemF->fn->setBackgroundType(scrnScroll_lblItemF, LE_WIDGET_BACKGROUND_NONE);
    scrnScroll_lblItemF->fn->setBorderType(scrnScroll_lblItemF, LE_WIDGET_BORDER_LINE);
    scrnScroll_lblItemF->fn->setHAlignment(scrnScroll_lblItemF, LE_HALIGN_CENTER);
    scrnScroll_lblItemF->fn->setString(scrnScroll_lblItemF, (leString*)&string_strF);
    scrnScroll_pnlSlideMenu->fn->addChild(scrnScroll_pnlSlideMenu, (leWidget*)scrnScroll_lblItemF);

    scrnScroll_lblItemG = leLabelWidget_New();
    scrnScroll_lblItemG->fn->setPosition(scrnScroll_lblItemG, 680, 10);
    scrnScroll_lblItemG->fn->setSize(scrnScroll_lblItemG, 80, 80);
    scrnScroll_lblItemG->fn->setScheme(scrnScroll_lblItemG, &ItemScheme);
    scrnScroll_lblItemG->fn->setBackgroundType(scrnScroll_lblItemG, LE_WIDGET_BACKGROUND_NONE);
    scrnScroll_lblItemG->fn->setBorderType(scrnScroll_lblItemG, LE_WIDGET_BORDER_LINE);
    scrnScroll_lblItemG->fn->setHAlignment(scrnScroll_lblItemG, LE_HALIGN_CENTER);
    scrnScroll_lblItemG->fn->setString(scrnScroll_lblItemG, (leString*)&string_strG);
    scrnScroll_pnlSlideMenu->fn->addChild(scrnScroll_pnlSlideMenu, (leWidget*)scrnScroll_lblItemG);

    scrnScroll_lblItemH = leLabelWidget_New();
    scrnScroll_lblItemH->fn->setPosition(scrnScroll_lblItemH, 790, 10);
    scrnScroll_lblItemH->fn->setSize(scrnScroll_lblItemH, 80, 80);
    scrnScroll_lblItemH->fn->setScheme(scrnScroll_lblItemH, &ItemScheme);
    scrnScroll_lblItemH->fn->setBackgroundType(scrnScroll_lblItemH, LE_WIDGET_BACKGROUND_NONE);
    scrnScroll_lblItemH->fn->setBorderType(scrnScroll_lblItemH, LE_WIDGET_BORDER_LINE);
    scrnScroll_lblItemH->fn->setHAlignment(scrnScroll_lblItemH, LE_HALIGN_CENTER);
    scrnScroll_lblItemH->fn->setString(scrnScroll_lblItemH, (leString*)&string_strH);
    scrnScroll_pnlSlideMenu->fn->addChild(scrnScroll_pnlSlideMenu, (leWidget*)scrnScroll_lblItemH);

    scrnScroll_lblItemI = leLabelWidget_New();
    scrnScroll_lblItemI->fn->setPosition(scrnScroll_lblItemI, 900, 10);
    scrnScroll_lblItemI->fn->setSize(scrnScroll_lblItemI, 80, 80);
    scrnScroll_lblItemI->fn->setScheme(scrnScroll_lblItemI, &ItemScheme);
    scrnScroll_lblItemI->fn->setBackgroundType(scrnScroll_lblItemI, LE_WIDGET_BACKGROUND_NONE);
    scrnScroll_lblItemI->fn->setBorderType(scrnScroll_lblItemI, LE_WIDGET_BORDER_LINE);
    scrnScroll_lblItemI->fn->setHAlignment(scrnScroll_lblItemI, LE_HALIGN_CENTER);
    scrnScroll_lblItemI->fn->setString(scrnScroll_lblItemI, (leString*)&string_strI);
    scrnScroll_pnlSlideMenu->fn->addChild(scrnScroll_pnlSlideMenu, (leWidget*)scrnScroll_lblItemI);

    scrnScroll_pnlEventFilter = leWidget_New();
    scrnScroll_pnlEventFilter->fn->setPosition(scrnScroll_pnlEventFilter, 0, 90);
    scrnScroll_pnlEventFilter->fn->setSize(scrnScroll_pnlEventFilter, 480, 100);
    scrnScroll_pnlEventFilter->fn->setBackgroundType(scrnScroll_pnlEventFilter, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)scrnScroll_pnlEventFilter);

    scrnScroll_lblItemSelected = leLabelWidget_New();
    scrnScroll_lblItemSelected->fn->setPosition(scrnScroll_lblItemSelected, 204, 192);
    scrnScroll_lblItemSelected->fn->setSize(scrnScroll_lblItemSelected, 80, 80);
    scrnScroll_lblItemSelected->fn->setBackgroundType(scrnScroll_lblItemSelected, LE_WIDGET_BACKGROUND_NONE);
    scrnScroll_lblItemSelected->fn->setHAlignment(scrnScroll_lblItemSelected, LE_HALIGN_CENTER);
    scrnScroll_lblItemSelected->fn->setString(scrnScroll_lblItemSelected, (leString*)&string_strNone);
    root0->fn->addChild(root0, (leWidget*)scrnScroll_lblItemSelected);

    scrnScroll_LabelWidget_0 = leLabelWidget_New();
    scrnScroll_LabelWidget_0->fn->setPosition(scrnScroll_LabelWidget_0, 140, 16);
    scrnScroll_LabelWidget_0->fn->setSize(scrnScroll_LabelWidget_0, 200, 35);
    scrnScroll_LabelWidget_0->fn->setScheme(scrnScroll_LabelWidget_0, &WhiteScheme);
    scrnScroll_LabelWidget_0->fn->setBackgroundType(scrnScroll_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    scrnScroll_LabelWidget_0->fn->setHAlignment(scrnScroll_LabelWidget_0, LE_HALIGN_CENTER);
    scrnScroll_LabelWidget_0->fn->setString(scrnScroll_LabelWidget_0, (leString*)&string_strSlide);
    root0->fn->addChild(root0, (leWidget*)scrnScroll_LabelWidget_0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    scrnScroll_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_scrnScroll(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    scrnScroll_OnUpdate(); // raise event
}

void screenHide_scrnScroll(void)
{
    scrnScroll_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    scrnScroll_BackgroundPanel = NULL;
    scrnScroll_pnlSlideMenu = NULL;
    scrnScroll_pnlEventFilter = NULL;
    scrnScroll_lblItemSelected = NULL;
    scrnScroll_LabelWidget_0 = NULL;
    scrnScroll_lblItemA = NULL;
    scrnScroll_lblItemB = NULL;
    scrnScroll_lblItemC = NULL;
    scrnScroll_lblItemD = NULL;
    scrnScroll_lblItemE = NULL;
    scrnScroll_lblItemF = NULL;
    scrnScroll_lblItemG = NULL;
    scrnScroll_lblItemH = NULL;
    scrnScroll_lblItemI = NULL;


    showing = LE_FALSE;
}

void screenDestroy_scrnScroll(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_scrnScroll(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        default:
        {
            return NULL;
        }
    }
}

