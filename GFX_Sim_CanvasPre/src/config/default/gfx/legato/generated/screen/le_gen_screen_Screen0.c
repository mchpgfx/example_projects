#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;
static leWidget* root1;
static leWidget* root2;
static leWidget* root3;
static leWidget* root4;
static leWidget* root5;

leWidget* Screen0_BackgroundPanel;
leLabelWidget* Screen0_LabelWidget_0;
leButtonWidget* Screen0_Screen1Button;
leButtonWidget* Screen0_Screen2Button;
leButtonWidget* Screen0_Screen3Button;
leButtonWidget* Screen0_Screen4Button;
leButtonWidget* Screen0_PopUp;
leWidget* Screen0_BackgroundPanel_1;
leButtonWidget* Screen0_HomeButton;
leButtonWidget* Screen0_ButtonWidget_0_0_0;
leWidget* Screen0_BackgroundPanel_2;
leButtonWidget* Screen0_HomeButton_0;
leButtonWidget* Screen0_ButtonWidget_0_0;
leWidget* Screen0_BackgroundPanel_3;
leButtonWidget* Screen0_HomeButton_1;
leButtonWidget* Screen0_ButtonWidget_0_1;
leWidget* Screen0_BackgroundPanel_4;
leButtonWidget* Screen0_HomeButton_2;
leButtonWidget* Screen0_ButtonWidget_0_2;
leWidget* Screen0_PopUpPanel;
leLabelWidget* Screen0_LabelWidget_1;
leButtonWidget* Screen0_BackButton;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Screen0(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Screen0(void)
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

    Screen0_BackgroundPanel = leWidget_New();
    Screen0_BackgroundPanel->fn->setPosition(Screen0_BackgroundPanel, 0, 0);
    Screen0_BackgroundPanel->fn->setSize(Screen0_BackgroundPanel, 480, 272);
    Screen0_BackgroundPanel->fn->setScheme(Screen0_BackgroundPanel, &Background1);
    root0->fn->addChild(root0, (leWidget*)Screen0_BackgroundPanel);

    Screen0_LabelWidget_0 = leLabelWidget_New();
    Screen0_LabelWidget_0->fn->setPosition(Screen0_LabelWidget_0, 130, 17);
    Screen0_LabelWidget_0->fn->setSize(Screen0_LabelWidget_0, 225, 36);
    Screen0_LabelWidget_0->fn->setScheme(Screen0_LabelWidget_0, &TextScheme);
    Screen0_LabelWidget_0->fn->setBackgroundType(Screen0_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_LabelWidget_0->fn->setHAlignment(Screen0_LabelWidget_0, LE_HALIGN_CENTER);
    Screen0_LabelWidget_0->fn->setString(Screen0_LabelWidget_0, (leString*)&string_MainScreen);
    Screen0_BackgroundPanel->fn->addChild(Screen0_BackgroundPanel, (leWidget*)Screen0_LabelWidget_0);

    Screen0_Screen1Button = leButtonWidget_New();
    Screen0_Screen1Button->fn->setPosition(Screen0_Screen1Button, 15, 94);
    Screen0_Screen1Button->fn->setSize(Screen0_Screen1Button, 100, 100);
    Screen0_Screen1Button->fn->setScheme(Screen0_Screen1Button, &TextScheme);
    Screen0_Screen1Button->fn->setBorderType(Screen0_Screen1Button, LE_WIDGET_BORDER_LINE);
    Screen0_Screen1Button->fn->setString(Screen0_Screen1Button, (leString*)&string_Screen1);
    Screen0_Screen1Button->fn->setReleasedEventCallback(Screen0_Screen1Button, event_Screen0_Screen1Button_OnReleased);
    Screen0_BackgroundPanel->fn->addChild(Screen0_BackgroundPanel, (leWidget*)Screen0_Screen1Button);

    Screen0_Screen2Button = leButtonWidget_New();
    Screen0_Screen2Button->fn->setPosition(Screen0_Screen2Button, 131, 94);
    Screen0_Screen2Button->fn->setSize(Screen0_Screen2Button, 100, 100);
    Screen0_Screen2Button->fn->setScheme(Screen0_Screen2Button, &TextScheme);
    Screen0_Screen2Button->fn->setBorderType(Screen0_Screen2Button, LE_WIDGET_BORDER_LINE);
    Screen0_Screen2Button->fn->setString(Screen0_Screen2Button, (leString*)&string_Screen2);
    Screen0_Screen2Button->fn->setReleasedEventCallback(Screen0_Screen2Button, event_Screen0_Screen2Button_OnReleased);
    Screen0_BackgroundPanel->fn->addChild(Screen0_BackgroundPanel, (leWidget*)Screen0_Screen2Button);

    Screen0_Screen3Button = leButtonWidget_New();
    Screen0_Screen3Button->fn->setPosition(Screen0_Screen3Button, 247, 94);
    Screen0_Screen3Button->fn->setSize(Screen0_Screen3Button, 100, 100);
    Screen0_Screen3Button->fn->setScheme(Screen0_Screen3Button, &TextScheme);
    Screen0_Screen3Button->fn->setBorderType(Screen0_Screen3Button, LE_WIDGET_BORDER_LINE);
    Screen0_Screen3Button->fn->setString(Screen0_Screen3Button, (leString*)&string_Screen3);
    Screen0_Screen3Button->fn->setReleasedEventCallback(Screen0_Screen3Button, event_Screen0_Screen3Button_OnReleased);
    Screen0_BackgroundPanel->fn->addChild(Screen0_BackgroundPanel, (leWidget*)Screen0_Screen3Button);

    Screen0_Screen4Button = leButtonWidget_New();
    Screen0_Screen4Button->fn->setPosition(Screen0_Screen4Button, 365, 94);
    Screen0_Screen4Button->fn->setSize(Screen0_Screen4Button, 100, 100);
    Screen0_Screen4Button->fn->setScheme(Screen0_Screen4Button, &TextScheme);
    Screen0_Screen4Button->fn->setBorderType(Screen0_Screen4Button, LE_WIDGET_BORDER_LINE);
    Screen0_Screen4Button->fn->setString(Screen0_Screen4Button, (leString*)&string_Screen4);
    Screen0_Screen4Button->fn->setReleasedEventCallback(Screen0_Screen4Button, event_Screen0_Screen4Button_OnReleased);
    Screen0_BackgroundPanel->fn->addChild(Screen0_BackgroundPanel, (leWidget*)Screen0_Screen4Button);

    Screen0_PopUp = leButtonWidget_New();
    Screen0_PopUp->fn->setPosition(Screen0_PopUp, 170, 210);
    Screen0_PopUp->fn->setSize(Screen0_PopUp, 136, 50);
    Screen0_PopUp->fn->setScheme(Screen0_PopUp, &TextScheme);
    Screen0_PopUp->fn->setBorderType(Screen0_PopUp, LE_WIDGET_BORDER_LINE);
    Screen0_PopUp->fn->setString(Screen0_PopUp, (leString*)&string_PopUpMessage);
    Screen0_PopUp->fn->setReleasedEventCallback(Screen0_PopUp, event_Screen0_PopUp_OnReleased);
    Screen0_BackgroundPanel->fn->addChild(Screen0_BackgroundPanel, (leWidget*)Screen0_PopUp);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_BackgroundPanel_1 = leWidget_New();
    Screen0_BackgroundPanel_1->fn->setPosition(Screen0_BackgroundPanel_1, 0, 0);
    Screen0_BackgroundPanel_1->fn->setSize(Screen0_BackgroundPanel_1, 480, 272);
    Screen0_BackgroundPanel_1->fn->setScheme(Screen0_BackgroundPanel_1, &Back2);
    root1->fn->addChild(root1, (leWidget*)Screen0_BackgroundPanel_1);

    Screen0_HomeButton = leButtonWidget_New();
    Screen0_HomeButton->fn->setPosition(Screen0_HomeButton, 10, 200);
    Screen0_HomeButton->fn->setSize(Screen0_HomeButton, 60, 60);
    Screen0_HomeButton->fn->setBackgroundType(Screen0_HomeButton, LE_WIDGET_BACKGROUND_NONE);
    Screen0_HomeButton->fn->setBorderType(Screen0_HomeButton, LE_WIDGET_BORDER_LINE);
    Screen0_HomeButton->fn->setPressedImage(Screen0_HomeButton, (leImage*)&reply);
    Screen0_HomeButton->fn->setReleasedImage(Screen0_HomeButton, (leImage*)&reply);
    Screen0_HomeButton->fn->setReleasedEventCallback(Screen0_HomeButton, event_Screen0_HomeButton_OnReleased);
    Screen0_BackgroundPanel_1->fn->addChild(Screen0_BackgroundPanel_1, (leWidget*)Screen0_HomeButton);

    Screen0_ButtonWidget_0_0_0 = leButtonWidget_New();
    Screen0_ButtonWidget_0_0_0->fn->setPosition(Screen0_ButtonWidget_0_0_0, 154, 112);
    Screen0_ButtonWidget_0_0_0->fn->setSize(Screen0_ButtonWidget_0_0_0, 181, 59);
    Screen0_ButtonWidget_0_0_0->fn->setScheme(Screen0_ButtonWidget_0_0_0, &TextScheme);
    Screen0_ButtonWidget_0_0_0->fn->setBackgroundType(Screen0_ButtonWidget_0_0_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_0_0_0->fn->setBorderType(Screen0_ButtonWidget_0_0_0, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_0_0_0->fn->setToggleable(Screen0_ButtonWidget_0_0_0, LE_TRUE);
    Screen0_ButtonWidget_0_0_0->fn->setString(Screen0_ButtonWidget_0_0_0, (leString*)&string_Screen1);
    Screen0_ButtonWidget_0_0_0->fn->setPressedImage(Screen0_ButtonWidget_0_0_0, (leImage*)&MainMenuBtnPr);
    Screen0_ButtonWidget_0_0_0->fn->setReleasedImage(Screen0_ButtonWidget_0_0_0, (leImage*)&MainMenuBtnRel);
    Screen0_ButtonWidget_0_0_0->fn->setImagePosition(Screen0_ButtonWidget_0_0_0, LE_RELATIVE_POSITION_BEHIND);
    Screen0_BackgroundPanel_1->fn->addChild(Screen0_BackgroundPanel_1, (leWidget*)Screen0_ButtonWidget_0_0_0);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    // layer 2
    root2 = leWidget_New();
    root2->fn->setSize(root2, 480, 272);
    root2->fn->setBackgroundType(root2, LE_WIDGET_BACKGROUND_NONE);
    root2->fn->setMargins(root2, 0, 0, 0, 0);
    root2->flags |= LE_WIDGET_IGNOREEVENTS;
    root2->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_BackgroundPanel_2 = leWidget_New();
    Screen0_BackgroundPanel_2->fn->setPosition(Screen0_BackgroundPanel_2, 0, 0);
    Screen0_BackgroundPanel_2->fn->setSize(Screen0_BackgroundPanel_2, 480, 272);
    Screen0_BackgroundPanel_2->fn->setScheme(Screen0_BackgroundPanel_2, &Back3);
    root2->fn->addChild(root2, (leWidget*)Screen0_BackgroundPanel_2);

    Screen0_HomeButton_0 = leButtonWidget_New();
    Screen0_HomeButton_0->fn->setPosition(Screen0_HomeButton_0, 10, 200);
    Screen0_HomeButton_0->fn->setSize(Screen0_HomeButton_0, 60, 60);
    Screen0_HomeButton_0->fn->setBackgroundType(Screen0_HomeButton_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_HomeButton_0->fn->setBorderType(Screen0_HomeButton_0, LE_WIDGET_BORDER_LINE);
    Screen0_HomeButton_0->fn->setPressedImage(Screen0_HomeButton_0, (leImage*)&reply);
    Screen0_HomeButton_0->fn->setReleasedImage(Screen0_HomeButton_0, (leImage*)&reply);
    Screen0_HomeButton_0->fn->setReleasedEventCallback(Screen0_HomeButton_0, event_Screen0_HomeButton_0_OnReleased);
    Screen0_BackgroundPanel_2->fn->addChild(Screen0_BackgroundPanel_2, (leWidget*)Screen0_HomeButton_0);

    Screen0_ButtonWidget_0_0 = leButtonWidget_New();
    Screen0_ButtonWidget_0_0->fn->setPosition(Screen0_ButtonWidget_0_0, 154, 112);
    Screen0_ButtonWidget_0_0->fn->setSize(Screen0_ButtonWidget_0_0, 181, 59);
    Screen0_ButtonWidget_0_0->fn->setScheme(Screen0_ButtonWidget_0_0, &TextScheme);
    Screen0_ButtonWidget_0_0->fn->setBackgroundType(Screen0_ButtonWidget_0_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_0_0->fn->setBorderType(Screen0_ButtonWidget_0_0, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_0_0->fn->setToggleable(Screen0_ButtonWidget_0_0, LE_TRUE);
    Screen0_ButtonWidget_0_0->fn->setString(Screen0_ButtonWidget_0_0, (leString*)&string_Screen2);
    Screen0_ButtonWidget_0_0->fn->setPressedImage(Screen0_ButtonWidget_0_0, (leImage*)&MainMenuBtnPr);
    Screen0_ButtonWidget_0_0->fn->setReleasedImage(Screen0_ButtonWidget_0_0, (leImage*)&MainMenuBtnRel);
    Screen0_ButtonWidget_0_0->fn->setImagePosition(Screen0_ButtonWidget_0_0, LE_RELATIVE_POSITION_BEHIND);
    Screen0_BackgroundPanel_2->fn->addChild(Screen0_BackgroundPanel_2, (leWidget*)Screen0_ButtonWidget_0_0);

    leAddRootWidget(root2, 2);
    leSetLayerColorMode(2, LE_COLOR_MODE_RGBA_8888);

    // layer 3
    root3 = leWidget_New();
    root3->fn->setSize(root3, 480, 272);
    root3->fn->setBackgroundType(root3, LE_WIDGET_BACKGROUND_NONE);
    root3->fn->setMargins(root3, 0, 0, 0, 0);
    root3->flags |= LE_WIDGET_IGNOREEVENTS;
    root3->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_BackgroundPanel_3 = leWidget_New();
    Screen0_BackgroundPanel_3->fn->setPosition(Screen0_BackgroundPanel_3, 0, 0);
    Screen0_BackgroundPanel_3->fn->setSize(Screen0_BackgroundPanel_3, 480, 272);
    Screen0_BackgroundPanel_3->fn->setScheme(Screen0_BackgroundPanel_3, &Back4);
    root3->fn->addChild(root3, (leWidget*)Screen0_BackgroundPanel_3);

    Screen0_HomeButton_1 = leButtonWidget_New();
    Screen0_HomeButton_1->fn->setPosition(Screen0_HomeButton_1, 10, 200);
    Screen0_HomeButton_1->fn->setSize(Screen0_HomeButton_1, 60, 60);
    Screen0_HomeButton_1->fn->setBackgroundType(Screen0_HomeButton_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_HomeButton_1->fn->setBorderType(Screen0_HomeButton_1, LE_WIDGET_BORDER_LINE);
    Screen0_HomeButton_1->fn->setPressedImage(Screen0_HomeButton_1, (leImage*)&reply);
    Screen0_HomeButton_1->fn->setReleasedImage(Screen0_HomeButton_1, (leImage*)&reply);
    Screen0_HomeButton_1->fn->setReleasedEventCallback(Screen0_HomeButton_1, event_Screen0_HomeButton_1_OnReleased);
    Screen0_BackgroundPanel_3->fn->addChild(Screen0_BackgroundPanel_3, (leWidget*)Screen0_HomeButton_1);

    Screen0_ButtonWidget_0_1 = leButtonWidget_New();
    Screen0_ButtonWidget_0_1->fn->setPosition(Screen0_ButtonWidget_0_1, 154, 112);
    Screen0_ButtonWidget_0_1->fn->setSize(Screen0_ButtonWidget_0_1, 181, 59);
    Screen0_ButtonWidget_0_1->fn->setScheme(Screen0_ButtonWidget_0_1, &TextScheme);
    Screen0_ButtonWidget_0_1->fn->setBackgroundType(Screen0_ButtonWidget_0_1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_0_1->fn->setBorderType(Screen0_ButtonWidget_0_1, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_0_1->fn->setToggleable(Screen0_ButtonWidget_0_1, LE_TRUE);
    Screen0_ButtonWidget_0_1->fn->setString(Screen0_ButtonWidget_0_1, (leString*)&string_Screen3);
    Screen0_ButtonWidget_0_1->fn->setPressedImage(Screen0_ButtonWidget_0_1, (leImage*)&MainMenuBtnPr);
    Screen0_ButtonWidget_0_1->fn->setReleasedImage(Screen0_ButtonWidget_0_1, (leImage*)&MainMenuBtnRel);
    Screen0_ButtonWidget_0_1->fn->setImagePosition(Screen0_ButtonWidget_0_1, LE_RELATIVE_POSITION_BEHIND);
    Screen0_BackgroundPanel_3->fn->addChild(Screen0_BackgroundPanel_3, (leWidget*)Screen0_ButtonWidget_0_1);

    leAddRootWidget(root3, 3);
    leSetLayerColorMode(3, LE_COLOR_MODE_RGBA_8888);

    // layer 4
    root4 = leWidget_New();
    root4->fn->setSize(root4, 480, 272);
    root4->fn->setBackgroundType(root4, LE_WIDGET_BACKGROUND_NONE);
    root4->fn->setMargins(root4, 0, 0, 0, 0);
    root4->flags |= LE_WIDGET_IGNOREEVENTS;
    root4->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_BackgroundPanel_4 = leWidget_New();
    Screen0_BackgroundPanel_4->fn->setPosition(Screen0_BackgroundPanel_4, 0, 0);
    Screen0_BackgroundPanel_4->fn->setSize(Screen0_BackgroundPanel_4, 480, 272);
    Screen0_BackgroundPanel_4->fn->setScheme(Screen0_BackgroundPanel_4, &Back5);
    root4->fn->addChild(root4, (leWidget*)Screen0_BackgroundPanel_4);

    Screen0_HomeButton_2 = leButtonWidget_New();
    Screen0_HomeButton_2->fn->setPosition(Screen0_HomeButton_2, 10, 200);
    Screen0_HomeButton_2->fn->setSize(Screen0_HomeButton_2, 60, 60);
    Screen0_HomeButton_2->fn->setBackgroundType(Screen0_HomeButton_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_HomeButton_2->fn->setBorderType(Screen0_HomeButton_2, LE_WIDGET_BORDER_LINE);
    Screen0_HomeButton_2->fn->setPressedImage(Screen0_HomeButton_2, (leImage*)&reply);
    Screen0_HomeButton_2->fn->setReleasedImage(Screen0_HomeButton_2, (leImage*)&reply);
    Screen0_HomeButton_2->fn->setReleasedEventCallback(Screen0_HomeButton_2, event_Screen0_HomeButton_2_OnReleased);
    Screen0_BackgroundPanel_4->fn->addChild(Screen0_BackgroundPanel_4, (leWidget*)Screen0_HomeButton_2);

    Screen0_ButtonWidget_0_2 = leButtonWidget_New();
    Screen0_ButtonWidget_0_2->fn->setPosition(Screen0_ButtonWidget_0_2, 154, 112);
    Screen0_ButtonWidget_0_2->fn->setSize(Screen0_ButtonWidget_0_2, 181, 59);
    Screen0_ButtonWidget_0_2->fn->setScheme(Screen0_ButtonWidget_0_2, &TextScheme);
    Screen0_ButtonWidget_0_2->fn->setBackgroundType(Screen0_ButtonWidget_0_2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_ButtonWidget_0_2->fn->setBorderType(Screen0_ButtonWidget_0_2, LE_WIDGET_BORDER_NONE);
    Screen0_ButtonWidget_0_2->fn->setToggleable(Screen0_ButtonWidget_0_2, LE_TRUE);
    Screen0_ButtonWidget_0_2->fn->setString(Screen0_ButtonWidget_0_2, (leString*)&string_Screen4);
    Screen0_ButtonWidget_0_2->fn->setPressedImage(Screen0_ButtonWidget_0_2, (leImage*)&MainMenuBtnPr);
    Screen0_ButtonWidget_0_2->fn->setReleasedImage(Screen0_ButtonWidget_0_2, (leImage*)&MainMenuBtnRel);
    Screen0_ButtonWidget_0_2->fn->setImagePosition(Screen0_ButtonWidget_0_2, LE_RELATIVE_POSITION_BEHIND);
    Screen0_BackgroundPanel_4->fn->addChild(Screen0_BackgroundPanel_4, (leWidget*)Screen0_ButtonWidget_0_2);

    leAddRootWidget(root4, 4);
    leSetLayerColorMode(4, LE_COLOR_MODE_RGBA_8888);

    // layer 5
    root5 = leWidget_New();
    root5->fn->setSize(root5, 480, 272);
    root5->fn->setBackgroundType(root5, LE_WIDGET_BACKGROUND_NONE);
    root5->fn->setMargins(root5, 0, 0, 0, 0);
    root5->flags |= LE_WIDGET_IGNOREEVENTS;
    root5->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_PopUpPanel = leWidget_New();
    Screen0_PopUpPanel->fn->setPosition(Screen0_PopUpPanel, 0, 0);
    Screen0_PopUpPanel->fn->setSize(Screen0_PopUpPanel, 480, 272);
    Screen0_PopUpPanel->fn->setScheme(Screen0_PopUpPanel, &TransScheme);
    root5->fn->addChild(root5, (leWidget*)Screen0_PopUpPanel);

    Screen0_LabelWidget_1 = leLabelWidget_New();
    Screen0_LabelWidget_1->fn->setPosition(Screen0_LabelWidget_1, 108, 80);
    Screen0_LabelWidget_1->fn->setSize(Screen0_LabelWidget_1, 285, 117);
    Screen0_LabelWidget_1->fn->setScheme(Screen0_LabelWidget_1, &TextScheme);
    Screen0_LabelWidget_1->fn->setHAlignment(Screen0_LabelWidget_1, LE_HALIGN_CENTER);
    Screen0_LabelWidget_1->fn->setString(Screen0_LabelWidget_1, (leString*)&string_PopUpMessage);
    Screen0_PopUpPanel->fn->addChild(Screen0_PopUpPanel, (leWidget*)Screen0_LabelWidget_1);

    Screen0_BackButton = leButtonWidget_New();
    Screen0_BackButton->fn->setPosition(Screen0_BackButton, 10, 200);
    Screen0_BackButton->fn->setSize(Screen0_BackButton, 60, 60);
    Screen0_BackButton->fn->setBackgroundType(Screen0_BackButton, LE_WIDGET_BACKGROUND_NONE);
    Screen0_BackButton->fn->setBorderType(Screen0_BackButton, LE_WIDGET_BORDER_LINE);
    Screen0_BackButton->fn->setPressedImage(Screen0_BackButton, (leImage*)&reply);
    Screen0_BackButton->fn->setReleasedImage(Screen0_BackButton, (leImage*)&reply);
    Screen0_BackButton->fn->setReleasedEventCallback(Screen0_BackButton, event_Screen0_BackButton_OnReleased);
    Screen0_PopUpPanel->fn->addChild(Screen0_PopUpPanel, (leWidget*)Screen0_BackButton);

    leAddRootWidget(root5, 5);
    leSetLayerColorMode(5, LE_COLOR_MODE_RGBA_8888);

    Screen0_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen0(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
    root1->fn->setSize(root1, root1->rect.width, root1->rect.height);
    root2->fn->setSize(root2, root2->rect.width, root2->rect.height);
    root3->fn->setSize(root3, root3->rect.width, root3->rect.height);
    root4->fn->setSize(root4, root4->rect.width, root4->rect.height);
    root5->fn->setSize(root5, root5->rect.width, root5->rect.height);

    Screen0_OnUpdate(); // raise event
}

void screenHide_Screen0(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen0_BackgroundPanel = NULL;
    Screen0_LabelWidget_0 = NULL;
    Screen0_Screen1Button = NULL;
    Screen0_Screen2Button = NULL;
    Screen0_Screen3Button = NULL;
    Screen0_Screen4Button = NULL;
    Screen0_PopUp = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    Screen0_BackgroundPanel_1 = NULL;
    Screen0_HomeButton = NULL;
    Screen0_ButtonWidget_0_0_0 = NULL;

    leRemoveRootWidget(root2, 2);
    leWidget_Delete(root2);
    root2 = NULL;

    Screen0_BackgroundPanel_2 = NULL;
    Screen0_HomeButton_0 = NULL;
    Screen0_ButtonWidget_0_0 = NULL;

    leRemoveRootWidget(root3, 3);
    leWidget_Delete(root3);
    root3 = NULL;

    Screen0_BackgroundPanel_3 = NULL;
    Screen0_HomeButton_1 = NULL;
    Screen0_ButtonWidget_0_1 = NULL;

    leRemoveRootWidget(root4, 4);
    leWidget_Delete(root4);
    root4 = NULL;

    Screen0_BackgroundPanel_4 = NULL;
    Screen0_HomeButton_2 = NULL;
    Screen0_ButtonWidget_0_2 = NULL;

    leRemoveRootWidget(root5, 5);
    leWidget_Delete(root5);
    root5 = NULL;

    Screen0_PopUpPanel = NULL;
    Screen0_LabelWidget_1 = NULL;
    Screen0_BackButton = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Screen0(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Screen0(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        case 1:
        {
            return root1;
        }
        case 2:
        {
            return root2;
        }
        case 3:
        {
            return root3;
        }
        case 4:
        {
            return root4;
        }
        case 5:
        {
            return root5;
        }
        default:
        {
            return NULL;
        }
    }
}

