#include "gfx/legato/generated/screen/le_gen_screen_Game_Screen.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Game_Screen_Panel_0;
leKeyPadWidget* Game_Screen_KeyPadWidget;
leButtonWidget* Game_Screen_ButtonWidget_Logo;
leLabelWidget* Game_Screen_LabelWidget_Player;
leLabelWidget* Game_Screen_LabelWidget_Winner;
leButtonWidget* Game_Screen_ButtonWidget_Game_Rst;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Game_Screen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Game_Screen(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, 800, 480);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Game_Screen_Panel_0 = leWidget_New();
    Game_Screen_Panel_0->fn->setPosition(Game_Screen_Panel_0, 0, 0);
    Game_Screen_Panel_0->fn->setSize(Game_Screen_Panel_0, 800, 480);
    Game_Screen_Panel_0->fn->setScheme(Game_Screen_Panel_0, &BlueScheme);
    Game_Screen_Panel_0->fn->setBorderType(Game_Screen_Panel_0, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)Game_Screen_Panel_0);

    Game_Screen_KeyPadWidget = leKeyPadWidget_New(3, 3);
    Game_Screen_KeyPadWidget->fn->setPosition(Game_Screen_KeyPadWidget, 298, 173);
    Game_Screen_KeyPadWidget->fn->setScheme(Game_Screen_KeyPadWidget, &RedScheme);
    Game_Screen_KeyPadWidget->fn->setBackgroundType(Game_Screen_KeyPadWidget, LE_WIDGET_BACKGROUND_NONE);
    leButtonWidget* Game_Screen_KeyPadWidget_cell_0_0 = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 0, 0);
    Game_Screen_KeyPadWidget_cell_0_0->fn->setPressedImage(Game_Screen_KeyPadWidget_cell_0_0, &PressedImgTicTacToe2);
    Game_Screen_KeyPadWidget_cell_0_0->fn->setReleasedImage(Game_Screen_KeyPadWidget_cell_0_0, &ReleasedImg_tictactoe);
    Game_Screen_KeyPadWidget_cell_0_0->fn->setBackgroundType(Game_Screen_KeyPadWidget_cell_0_0, LE_WIDGET_BACKGROUND_NONE);
    Game_Screen_KeyPadWidget_cell_0_0->fn->setBorderType(Game_Screen_KeyPadWidget_cell_0_0, LE_WIDGET_BORDER_BEVEL);
    Game_Screen_KeyPadWidget_cell_0_0->fn->setImagePosition(Game_Screen_KeyPadWidget_cell_0_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Game_Screen_KeyPadWidget_cell_0_1 = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 0, 1);
    Game_Screen_KeyPadWidget_cell_0_1->fn->setPressedImage(Game_Screen_KeyPadWidget_cell_0_1, &PressedImgTicTacToe2);
    Game_Screen_KeyPadWidget_cell_0_1->fn->setReleasedImage(Game_Screen_KeyPadWidget_cell_0_1, &ReleasedImg_tictactoe);
    Game_Screen_KeyPadWidget_cell_0_1->fn->setBackgroundType(Game_Screen_KeyPadWidget_cell_0_1, LE_WIDGET_BACKGROUND_NONE);
    Game_Screen_KeyPadWidget_cell_0_1->fn->setBorderType(Game_Screen_KeyPadWidget_cell_0_1, LE_WIDGET_BORDER_BEVEL);
    Game_Screen_KeyPadWidget_cell_0_1->fn->setImagePosition(Game_Screen_KeyPadWidget_cell_0_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Game_Screen_KeyPadWidget_cell_0_2 = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 0, 2);
    Game_Screen_KeyPadWidget_cell_0_2->fn->setPressedImage(Game_Screen_KeyPadWidget_cell_0_2, &PressedImgTicTacToe2);
    Game_Screen_KeyPadWidget_cell_0_2->fn->setReleasedImage(Game_Screen_KeyPadWidget_cell_0_2, &ReleasedImg_tictactoe);
    Game_Screen_KeyPadWidget_cell_0_2->fn->setBackgroundType(Game_Screen_KeyPadWidget_cell_0_2, LE_WIDGET_BACKGROUND_NONE);
    Game_Screen_KeyPadWidget_cell_0_2->fn->setBorderType(Game_Screen_KeyPadWidget_cell_0_2, LE_WIDGET_BORDER_BEVEL);
    Game_Screen_KeyPadWidget_cell_0_2->fn->setImagePosition(Game_Screen_KeyPadWidget_cell_0_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Game_Screen_KeyPadWidget_cell_1_0 = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 1, 0);
    Game_Screen_KeyPadWidget_cell_1_0->fn->setPressedImage(Game_Screen_KeyPadWidget_cell_1_0, &PressedImgTicTacToe2);
    Game_Screen_KeyPadWidget_cell_1_0->fn->setReleasedImage(Game_Screen_KeyPadWidget_cell_1_0, &ReleasedImg_tictactoe);
    Game_Screen_KeyPadWidget_cell_1_0->fn->setBackgroundType(Game_Screen_KeyPadWidget_cell_1_0, LE_WIDGET_BACKGROUND_NONE);
    Game_Screen_KeyPadWidget_cell_1_0->fn->setBorderType(Game_Screen_KeyPadWidget_cell_1_0, LE_WIDGET_BORDER_BEVEL);
    Game_Screen_KeyPadWidget_cell_1_0->fn->setImagePosition(Game_Screen_KeyPadWidget_cell_1_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Game_Screen_KeyPadWidget_cell_1_1 = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 1, 1);
    Game_Screen_KeyPadWidget_cell_1_1->fn->setPressedImage(Game_Screen_KeyPadWidget_cell_1_1, &PressedImgTicTacToe2);
    Game_Screen_KeyPadWidget_cell_1_1->fn->setReleasedImage(Game_Screen_KeyPadWidget_cell_1_1, &ReleasedImg_tictactoe);
    Game_Screen_KeyPadWidget_cell_1_1->fn->setBackgroundType(Game_Screen_KeyPadWidget_cell_1_1, LE_WIDGET_BACKGROUND_NONE);
    Game_Screen_KeyPadWidget_cell_1_1->fn->setBorderType(Game_Screen_KeyPadWidget_cell_1_1, LE_WIDGET_BORDER_BEVEL);
    Game_Screen_KeyPadWidget_cell_1_1->fn->setImagePosition(Game_Screen_KeyPadWidget_cell_1_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Game_Screen_KeyPadWidget_cell_1_2 = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 1, 2);
    Game_Screen_KeyPadWidget_cell_1_2->fn->setPressedImage(Game_Screen_KeyPadWidget_cell_1_2, &PressedImgTicTacToe2);
    Game_Screen_KeyPadWidget_cell_1_2->fn->setReleasedImage(Game_Screen_KeyPadWidget_cell_1_2, &ReleasedImg_tictactoe);
    Game_Screen_KeyPadWidget_cell_1_2->fn->setBackgroundType(Game_Screen_KeyPadWidget_cell_1_2, LE_WIDGET_BACKGROUND_NONE);
    Game_Screen_KeyPadWidget_cell_1_2->fn->setBorderType(Game_Screen_KeyPadWidget_cell_1_2, LE_WIDGET_BORDER_BEVEL);
    Game_Screen_KeyPadWidget_cell_1_2->fn->setImagePosition(Game_Screen_KeyPadWidget_cell_1_2, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Game_Screen_KeyPadWidget_cell_2_0 = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 2, 0);
    Game_Screen_KeyPadWidget_cell_2_0->fn->setPressedImage(Game_Screen_KeyPadWidget_cell_2_0, &PressedImgTicTacToe2);
    Game_Screen_KeyPadWidget_cell_2_0->fn->setReleasedImage(Game_Screen_KeyPadWidget_cell_2_0, &ReleasedImg_tictactoe);
    Game_Screen_KeyPadWidget_cell_2_0->fn->setBackgroundType(Game_Screen_KeyPadWidget_cell_2_0, LE_WIDGET_BACKGROUND_NONE);
    Game_Screen_KeyPadWidget_cell_2_0->fn->setBorderType(Game_Screen_KeyPadWidget_cell_2_0, LE_WIDGET_BORDER_BEVEL);
    Game_Screen_KeyPadWidget_cell_2_0->fn->setImagePosition(Game_Screen_KeyPadWidget_cell_2_0, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Game_Screen_KeyPadWidget_cell_2_1 = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 2, 1);
    Game_Screen_KeyPadWidget_cell_2_1->fn->setPressedImage(Game_Screen_KeyPadWidget_cell_2_1, &PressedImgTicTacToe2);
    Game_Screen_KeyPadWidget_cell_2_1->fn->setReleasedImage(Game_Screen_KeyPadWidget_cell_2_1, &ReleasedImg_tictactoe);
    Game_Screen_KeyPadWidget_cell_2_1->fn->setBackgroundType(Game_Screen_KeyPadWidget_cell_2_1, LE_WIDGET_BACKGROUND_NONE);
    Game_Screen_KeyPadWidget_cell_2_1->fn->setBorderType(Game_Screen_KeyPadWidget_cell_2_1, LE_WIDGET_BORDER_BEVEL);
    Game_Screen_KeyPadWidget_cell_2_1->fn->setImagePosition(Game_Screen_KeyPadWidget_cell_2_1, LE_RELATIVE_POSITION_BEHIND);
    leButtonWidget* Game_Screen_KeyPadWidget_cell_2_2 = Game_Screen_KeyPadWidget->fn->getCellButton(Game_Screen_KeyPadWidget, 2, 2);
    Game_Screen_KeyPadWidget_cell_2_2->fn->setPressedImage(Game_Screen_KeyPadWidget_cell_2_2, &PressedImgTicTacToe2);
    Game_Screen_KeyPadWidget_cell_2_2->fn->setReleasedImage(Game_Screen_KeyPadWidget_cell_2_2, &ReleasedImg_tictactoe);
    Game_Screen_KeyPadWidget_cell_2_2->fn->setBackgroundType(Game_Screen_KeyPadWidget_cell_2_2, LE_WIDGET_BACKGROUND_NONE);
    Game_Screen_KeyPadWidget_cell_2_2->fn->setBorderType(Game_Screen_KeyPadWidget_cell_2_2, LE_WIDGET_BORDER_BEVEL);
    Game_Screen_KeyPadWidget_cell_2_2->fn->setImagePosition(Game_Screen_KeyPadWidget_cell_2_2, LE_RELATIVE_POSITION_BEHIND);
    Game_Screen_KeyPadWidget->fn->setKeyClickEventCallback(Game_Screen_KeyPadWidget, event_Game_Screen_KeyPadWidget_OnKeyClick);
    root0->fn->addChild(root0, (leWidget*)Game_Screen_KeyPadWidget);

    Game_Screen_ButtonWidget_Logo = leButtonWidget_New();
    Game_Screen_ButtonWidget_Logo->fn->setPosition(Game_Screen_ButtonWidget_Logo, 28, 17);
    Game_Screen_ButtonWidget_Logo->fn->setSize(Game_Screen_ButtonWidget_Logo, 168, 35);
    Game_Screen_ButtonWidget_Logo->fn->setScheme(Game_Screen_ButtonWidget_Logo, &RedScheme);
    Game_Screen_ButtonWidget_Logo->fn->setBorderType(Game_Screen_ButtonWidget_Logo, LE_WIDGET_BORDER_NONE);
    Game_Screen_ButtonWidget_Logo->fn->setVAlignment(Game_Screen_ButtonWidget_Logo, LE_VALIGN_TOP);
    Game_Screen_ButtonWidget_Logo->fn->setString(Game_Screen_ButtonWidget_Logo, (leString*)&string_Rand);
    Game_Screen_ButtonWidget_Logo->fn->setPressedEventCallback(Game_Screen_ButtonWidget_Logo, event_Game_Screen_ButtonWidget_Logo_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Game_Screen_ButtonWidget_Logo);

    Game_Screen_LabelWidget_Player = leLabelWidget_New();
    Game_Screen_LabelWidget_Player->fn->setPosition(Game_Screen_LabelWidget_Player, 299, 90);
    Game_Screen_LabelWidget_Player->fn->setSize(Game_Screen_LabelWidget_Player, 198, 39);
    Game_Screen_LabelWidget_Player->fn->setScheme(Game_Screen_LabelWidget_Player, &RedScheme);
    root0->fn->addChild(root0, (leWidget*)Game_Screen_LabelWidget_Player);

    Game_Screen_LabelWidget_Winner = leLabelWidget_New();
    Game_Screen_LabelWidget_Winner->fn->setPosition(Game_Screen_LabelWidget_Winner, 298, 239);
    Game_Screen_LabelWidget_Winner->fn->setSize(Game_Screen_LabelWidget_Winner, 199, 68);
    Game_Screen_LabelWidget_Winner->fn->setEnabled(Game_Screen_LabelWidget_Winner, LE_FALSE);
    Game_Screen_LabelWidget_Winner->fn->setVisible(Game_Screen_LabelWidget_Winner, LE_FALSE);
    Game_Screen_LabelWidget_Winner->fn->setScheme(Game_Screen_LabelWidget_Winner, &RedScheme);
    Game_Screen_LabelWidget_Winner->fn->setBorderType(Game_Screen_LabelWidget_Winner, LE_WIDGET_BORDER_LINE);
    root0->fn->addChild(root0, (leWidget*)Game_Screen_LabelWidget_Winner);

    Game_Screen_ButtonWidget_Game_Rst = leButtonWidget_New();
    Game_Screen_ButtonWidget_Game_Rst->fn->setPosition(Game_Screen_ButtonWidget_Game_Rst, 640, 17);
    Game_Screen_ButtonWidget_Game_Rst->fn->setSize(Game_Screen_ButtonWidget_Game_Rst, 90, 33);
    Game_Screen_ButtonWidget_Game_Rst->fn->setScheme(Game_Screen_ButtonWidget_Game_Rst, &RedScheme);
    Game_Screen_ButtonWidget_Game_Rst->fn->setBorderType(Game_Screen_ButtonWidget_Game_Rst, LE_WIDGET_BORDER_NONE);
    Game_Screen_ButtonWidget_Game_Rst->fn->setVAlignment(Game_Screen_ButtonWidget_Game_Rst, LE_VALIGN_TOP);
    Game_Screen_ButtonWidget_Game_Rst->fn->setString(Game_Screen_ButtonWidget_Game_Rst, (leString*)&string_Restart);
    Game_Screen_ButtonWidget_Game_Rst->fn->setPressedEventCallback(Game_Screen_ButtonWidget_Game_Rst, event_Game_Screen_ButtonWidget_Game_Rst_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Game_Screen_ButtonWidget_Game_Rst);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    Game_Screen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Game_Screen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
}

void screenHide_Game_Screen(void)
{
    Game_Screen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Game_Screen_Panel_0 = NULL;
    Game_Screen_KeyPadWidget = NULL;
    Game_Screen_ButtonWidget_Logo = NULL;
    Game_Screen_LabelWidget_Player = NULL;
    Game_Screen_LabelWidget_Winner = NULL;
    Game_Screen_ButtonWidget_Game_Rst = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Game_Screen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Game_Screen(uint32_t lyrIdx)
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

