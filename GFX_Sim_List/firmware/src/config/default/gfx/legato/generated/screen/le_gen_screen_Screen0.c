#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leLabelWidget* Screen0_StaticLabelWidget;
leTextFieldWidget* Screen0_TextFieldWidgetDummy;
leListWidget* Screen0_ListWidget_Static;
leButtonWidget* Screen0_ButtonWidget_List1;
leLabelWidget* Screen0_LabelWidget_StaticSel;
leLabelWidget* Screen0_DynamiLabelWidget;
leButtonWidget* Screen0_ButtonWidget_List2;
leLabelWidget* Screen0_LabelWidget_DynamicSel;
leTextFieldWidget* Screen0_TextFieldWidgetDyn;
leListWidget* Screen0_ListWidget_Dynamic;
leButtonWidget* Screen0_ButtonWidget_AddL2;
leButtonWidget* Screen0_ButtonWidget_ClearL2;

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
    root0->fn->setSize(root0, 800, 480);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_BackgroundPanel = leWidget_New();
    Screen0_BackgroundPanel->fn->setPosition(Screen0_BackgroundPanel, 0, 0);
    Screen0_BackgroundPanel->fn->setSize(Screen0_BackgroundPanel, 800, 480);
    Screen0_BackgroundPanel->fn->setScheme(Screen0_BackgroundPanel, &PrimaryScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_BackgroundPanel);

    Screen0_StaticLabelWidget = leLabelWidget_New();
    Screen0_StaticLabelWidget->fn->setPosition(Screen0_StaticLabelWidget, 20, 16);
    Screen0_StaticLabelWidget->fn->setSize(Screen0_StaticLabelWidget, 138, 33);
    Screen0_StaticLabelWidget->fn->setScheme(Screen0_StaticLabelWidget, &WhiteScheme);
    Screen0_StaticLabelWidget->fn->setBackgroundType(Screen0_StaticLabelWidget, LE_WIDGET_BACKGROUND_NONE);
    Screen0_StaticLabelWidget->fn->setString(Screen0_StaticLabelWidget, (leString*)&string_static);
    root0->fn->addChild(root0, (leWidget*)Screen0_StaticLabelWidget);

    Screen0_TextFieldWidgetDummy = leTextFieldWidget_New();
    Screen0_TextFieldWidgetDummy->fn->setPosition(Screen0_TextFieldWidgetDummy, 20, 60);
    Screen0_TextFieldWidgetDummy->fn->setSize(Screen0_TextFieldWidgetDummy, 238, 25);
    Screen0_TextFieldWidgetDummy->fn->setHAlignment(Screen0_TextFieldWidgetDummy, LE_HALIGN_LEFT);
    Screen0_TextFieldWidgetDummy->fn->setString(Screen0_TextFieldWidgetDummy, (leString*)&string_String1);
    Screen0_TextFieldWidgetDummy->fn->setFont(Screen0_TextFieldWidgetDummy, (leFont*)&Font10);
    Screen0_TextFieldWidgetDummy->fn->setCursorEnabled(Screen0_TextFieldWidgetDummy, LE_FALSE);
    Screen0_TextFieldWidgetDummy->fn->setClearValueOnFirstEdit(Screen0_TextFieldWidgetDummy, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)Screen0_TextFieldWidgetDummy);

    Screen0_ListWidget_Static = leListWidget_New();
    Screen0_ListWidget_Static->fn->setPosition(Screen0_ListWidget_Static, 20, 60);
    Screen0_ListWidget_Static->fn->setSize(Screen0_ListWidget_Static, 238, 110);
    Screen0_ListWidget_Static->fn->setVisible(Screen0_ListWidget_Static, LE_FALSE);
    Screen0_ListWidget_Static->fn->setScheme(Screen0_ListWidget_Static, &RedScheme);
    Screen0_ListWidget_Static->fn->appendItem(Screen0_ListWidget_Static);
    Screen0_ListWidget_Static->fn->appendItem(Screen0_ListWidget_Static);
    Screen0_ListWidget_Static->fn->appendItem(Screen0_ListWidget_Static);
    Screen0_ListWidget_Static->fn->appendItem(Screen0_ListWidget_Static);
    Screen0_ListWidget_Static->fn->setSelectedItemChangedEventCallback(Screen0_ListWidget_Static, event_Screen0_ListWidget_Static_OnSelectionChanged);
    root0->fn->addChild(root0, (leWidget*)Screen0_ListWidget_Static);

    Screen0_ButtonWidget_List1 = leButtonWidget_New();
    Screen0_ButtonWidget_List1->fn->setPosition(Screen0_ButtonWidget_List1, 300, 60);
    Screen0_ButtonWidget_List1->fn->setSize(Screen0_ButtonWidget_List1, 115, 40);
    Screen0_ButtonWidget_List1->fn->setString(Screen0_ButtonWidget_List1, (leString*)&string_staticBtn);
    Screen0_ButtonWidget_List1->fn->setReleasedEventCallback(Screen0_ButtonWidget_List1, event_Screen0_ButtonWidget_List1_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_List1);

    Screen0_LabelWidget_StaticSel = leLabelWidget_New();
    Screen0_LabelWidget_StaticSel->fn->setPosition(Screen0_LabelWidget_StaticSel, 473, 60);
    Screen0_LabelWidget_StaticSel->fn->setSize(Screen0_LabelWidget_StaticSel, 188, 50);
    Screen0_LabelWidget_StaticSel->fn->setScheme(Screen0_LabelWidget_StaticSel, &WhiteScheme);
    Screen0_LabelWidget_StaticSel->fn->setBackgroundType(Screen0_LabelWidget_StaticSel, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_StaticSel);

    Screen0_DynamiLabelWidget = leLabelWidget_New();
    Screen0_DynamiLabelWidget->fn->setPosition(Screen0_DynamiLabelWidget, 20, 172);
    Screen0_DynamiLabelWidget->fn->setSize(Screen0_DynamiLabelWidget, 202, 33);
    Screen0_DynamiLabelWidget->fn->setScheme(Screen0_DynamiLabelWidget, &WhiteScheme);
    Screen0_DynamiLabelWidget->fn->setBackgroundType(Screen0_DynamiLabelWidget, LE_WIDGET_BACKGROUND_NONE);
    Screen0_DynamiLabelWidget->fn->setString(Screen0_DynamiLabelWidget, (leString*)&string_dynamic);
    root0->fn->addChild(root0, (leWidget*)Screen0_DynamiLabelWidget);

    Screen0_ButtonWidget_List2 = leButtonWidget_New();
    Screen0_ButtonWidget_List2->fn->setPosition(Screen0_ButtonWidget_List2, 300, 220);
    Screen0_ButtonWidget_List2->fn->setSize(Screen0_ButtonWidget_List2, 115, 40);
    Screen0_ButtonWidget_List2->fn->setString(Screen0_ButtonWidget_List2, (leString*)&string_dynamicBtn);
    Screen0_ButtonWidget_List2->fn->setReleasedEventCallback(Screen0_ButtonWidget_List2, event_Screen0_ButtonWidget_List2_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_List2);

    Screen0_LabelWidget_DynamicSel = leLabelWidget_New();
    Screen0_LabelWidget_DynamicSel->fn->setPosition(Screen0_LabelWidget_DynamicSel, 469, 273);
    Screen0_LabelWidget_DynamicSel->fn->setSize(Screen0_LabelWidget_DynamicSel, 188, 50);
    Screen0_LabelWidget_DynamicSel->fn->setVisible(Screen0_LabelWidget_DynamicSel, LE_FALSE);
    Screen0_LabelWidget_DynamicSel->fn->setScheme(Screen0_LabelWidget_DynamicSel, &WhiteScheme);
    Screen0_LabelWidget_DynamicSel->fn->setBackgroundType(Screen0_LabelWidget_DynamicSel, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)Screen0_LabelWidget_DynamicSel);

    Screen0_TextFieldWidgetDyn = leTextFieldWidget_New();
    Screen0_TextFieldWidgetDyn->fn->setPosition(Screen0_TextFieldWidgetDyn, 20, 220);
    Screen0_TextFieldWidgetDyn->fn->setSize(Screen0_TextFieldWidgetDyn, 238, 25);
    Screen0_TextFieldWidgetDyn->fn->setHAlignment(Screen0_TextFieldWidgetDyn, LE_HALIGN_LEFT);
    Screen0_TextFieldWidgetDyn->fn->setString(Screen0_TextFieldWidgetDyn, (leString*)&string_String);
    Screen0_TextFieldWidgetDyn->fn->setFont(Screen0_TextFieldWidgetDyn, (leFont*)&Font10);
    Screen0_TextFieldWidgetDyn->fn->setCursorEnabled(Screen0_TextFieldWidgetDyn, LE_FALSE);
    Screen0_TextFieldWidgetDyn->fn->setClearValueOnFirstEdit(Screen0_TextFieldWidgetDyn, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)Screen0_TextFieldWidgetDyn);

    Screen0_ListWidget_Dynamic = leListWidget_New();
    Screen0_ListWidget_Dynamic->fn->setPosition(Screen0_ListWidget_Dynamic, 19, 220);
    Screen0_ListWidget_Dynamic->fn->setSize(Screen0_ListWidget_Dynamic, 238, 110);
    Screen0_ListWidget_Dynamic->fn->setVisible(Screen0_ListWidget_Dynamic, LE_FALSE);
    Screen0_ListWidget_Dynamic->fn->setScheme(Screen0_ListWidget_Dynamic, &RedScheme);
    Screen0_ListWidget_Dynamic->fn->appendItem(Screen0_ListWidget_Dynamic);
    Screen0_ListWidget_Dynamic->fn->setItemString(Screen0_ListWidget_Dynamic, 0, (leString*)&string_StrA);
    Screen0_ListWidget_Dynamic->fn->appendItem(Screen0_ListWidget_Dynamic);
    Screen0_ListWidget_Dynamic->fn->setItemString(Screen0_ListWidget_Dynamic, 1, (leString*)&string_StrB);
    Screen0_ListWidget_Dynamic->fn->appendItem(Screen0_ListWidget_Dynamic);
    Screen0_ListWidget_Dynamic->fn->setItemString(Screen0_ListWidget_Dynamic, 2, (leString*)&string_StrC);
    Screen0_ListWidget_Dynamic->fn->setSelectedItemChangedEventCallback(Screen0_ListWidget_Dynamic, event_Screen0_ListWidget_Dynamic_OnSelectionChanged);
    root0->fn->addChild(root0, (leWidget*)Screen0_ListWidget_Dynamic);

    Screen0_ButtonWidget_AddL2 = leButtonWidget_New();
    Screen0_ButtonWidget_AddL2->fn->setPosition(Screen0_ButtonWidget_AddL2, 440, 220);
    Screen0_ButtonWidget_AddL2->fn->setSize(Screen0_ButtonWidget_AddL2, 115, 40);
    Screen0_ButtonWidget_AddL2->fn->setString(Screen0_ButtonWidget_AddL2, (leString*)&string_add);
    Screen0_ButtonWidget_AddL2->fn->setReleasedEventCallback(Screen0_ButtonWidget_AddL2, event_Screen0_ButtonWidget_AddL2_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_AddL2);

    Screen0_ButtonWidget_ClearL2 = leButtonWidget_New();
    Screen0_ButtonWidget_ClearL2->fn->setPosition(Screen0_ButtonWidget_ClearL2, 580, 220);
    Screen0_ButtonWidget_ClearL2->fn->setSize(Screen0_ButtonWidget_ClearL2, 115, 40);
    Screen0_ButtonWidget_ClearL2->fn->setString(Screen0_ButtonWidget_ClearL2, (leString*)&string_clear);
    Screen0_ButtonWidget_ClearL2->fn->setReleasedEventCallback(Screen0_ButtonWidget_ClearL2, event_Screen0_ButtonWidget_ClearL2_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_ButtonWidget_ClearL2);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen0(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
}

void screenHide_Screen0(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen0_BackgroundPanel = NULL;
    Screen0_StaticLabelWidget = NULL;
    Screen0_TextFieldWidgetDummy = NULL;
    Screen0_ListWidget_Static = NULL;
    Screen0_ButtonWidget_List1 = NULL;
    Screen0_LabelWidget_StaticSel = NULL;
    Screen0_DynamiLabelWidget = NULL;
    Screen0_ButtonWidget_List2 = NULL;
    Screen0_LabelWidget_DynamicSel = NULL;
    Screen0_TextFieldWidgetDyn = NULL;
    Screen0_ListWidget_Dynamic = NULL;
    Screen0_ButtonWidget_AddL2 = NULL;
    Screen0_ButtonWidget_ClearL2 = NULL;


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
        default:
        {
            return NULL;
        }
    }
}

