#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BaseFillPanel;
leImageWidget* Screen0_imgGauge;
leButtonWidget* Screen0_btnChangeNeedle;
leLabelWidget* Screen0_lblNeedleType;
leImageWidget* Screen0_imgMGSLogo;
leLabelWidget* Screen0_lblDemoName;
leDrawSurfaceWidget* Screen0_surfNeedle;
leImageWidget* Screen0_imgCenter;

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
    root0->fn->setSize(root0, LE_DEFAULT_SCREEN_WIDTH, LE_DEFAULT_SCREEN_HEIGHT);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Screen0_BaseFillPanel = leWidget_New();
    Screen0_BaseFillPanel->fn->setPosition(Screen0_BaseFillPanel, 0, 0);
    Screen0_BaseFillPanel->fn->setSize(Screen0_BaseFillPanel, 800, 480);
    Screen0_BaseFillPanel->fn->setScheme(Screen0_BaseFillPanel, &LayerScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_BaseFillPanel);

    Screen0_imgGauge = leImageWidget_New();
    Screen0_imgGauge->fn->setPosition(Screen0_imgGauge, 183, 40);
    Screen0_imgGauge->fn->setSize(Screen0_imgGauge, 433, 330);
    Screen0_imgGauge->fn->setBackgroundType(Screen0_imgGauge, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgGauge->fn->setBorderType(Screen0_imgGauge, LE_WIDGET_BORDER_NONE);
    Screen0_imgGauge->fn->setImage(Screen0_imgGauge, (leImage*)&speedobase);
    root0->fn->addChild(root0, (leWidget*)Screen0_imgGauge);

    Screen0_btnChangeNeedle = leButtonWidget_New();
    Screen0_btnChangeNeedle->fn->setPosition(Screen0_btnChangeNeedle, 268, 413);
    Screen0_btnChangeNeedle->fn->setSize(Screen0_btnChangeNeedle, 270, 60);
    Screen0_btnChangeNeedle->fn->setScheme(Screen0_btnChangeNeedle, &LayerScheme);
    Screen0_btnChangeNeedle->fn->setBackgroundType(Screen0_btnChangeNeedle, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnChangeNeedle->fn->setBorderType(Screen0_btnChangeNeedle, LE_WIDGET_BORDER_LINE);
    Screen0_btnChangeNeedle->fn->setString(Screen0_btnChangeNeedle, (leString*)&string_strTap);
    Screen0_btnChangeNeedle->fn->setReleasedEventCallback(Screen0_btnChangeNeedle, event_Screen0_btnChangeNeedle_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_btnChangeNeedle);

    Screen0_lblNeedleType = leLabelWidget_New();
    Screen0_lblNeedleType->fn->setPosition(Screen0_lblNeedleType, 691, 9);
    Screen0_lblNeedleType->fn->setScheme(Screen0_lblNeedleType, &LayerScheme);
    Screen0_lblNeedleType->fn->setBackgroundType(Screen0_lblNeedleType, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblNeedleType->fn->setHAlignment(Screen0_lblNeedleType, LE_HALIGN_RIGHT);
    Screen0_lblNeedleType->fn->setString(Screen0_lblNeedleType, (leString*)&string_strVectorLines);
    root0->fn->addChild(root0, (leWidget*)Screen0_lblNeedleType);

    Screen0_imgMGSLogo = leImageWidget_New();
    Screen0_imgMGSLogo->fn->setPosition(Screen0_imgMGSLogo, 7, 9);
    Screen0_imgMGSLogo->fn->setSize(Screen0_imgMGSLogo, 150, 40);
    Screen0_imgMGSLogo->fn->setBackgroundType(Screen0_imgMGSLogo, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgMGSLogo->fn->setBorderType(Screen0_imgMGSLogo, LE_WIDGET_BORDER_NONE);
    Screen0_imgMGSLogo->fn->setImage(Screen0_imgMGSLogo, (leImage*)&MGS_140_White);
    root0->fn->addChild(root0, (leWidget*)Screen0_imgMGSLogo);

    Screen0_lblDemoName = leLabelWidget_New();
    Screen0_lblDemoName->fn->setPosition(Screen0_lblDemoName, 0, 54);
    Screen0_lblDemoName->fn->setSize(Screen0_lblDemoName, 170, 25);
    Screen0_lblDemoName->fn->setScheme(Screen0_lblDemoName, &LayerScheme);
    Screen0_lblDemoName->fn->setBackgroundType(Screen0_lblDemoName, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblDemoName->fn->setHAlignment(Screen0_lblDemoName, LE_HALIGN_CENTER);
    Screen0_lblDemoName->fn->setString(Screen0_lblDemoName, (leString*)&string_strDemoName);
    root0->fn->addChild(root0, (leWidget*)Screen0_lblDemoName);

    Screen0_surfNeedle = leDrawSurfaceWidget_New();
    Screen0_surfNeedle->fn->setPosition(Screen0_surfNeedle, 183, 40);
    Screen0_surfNeedle->fn->setSize(Screen0_surfNeedle, 433, 433);
    Screen0_surfNeedle->fn->setEnabled(Screen0_surfNeedle, LE_FALSE);
    Screen0_surfNeedle->fn->setBackgroundType(Screen0_surfNeedle, LE_WIDGET_BACKGROUND_NONE);
    Screen0_surfNeedle->fn->setDrawCallback(Screen0_surfNeedle, event_Screen0_surfNeedle_OnDraw);
    root0->fn->addChild(root0, (leWidget*)Screen0_surfNeedle);

    Screen0_imgCenter = leImageWidget_New();
    Screen0_imgCenter->fn->setPosition(Screen0_imgCenter, 361, 219);
    Screen0_imgCenter->fn->setSize(Screen0_imgCenter, 75, 75);
    Screen0_imgCenter->fn->setEnabled(Screen0_imgCenter, LE_FALSE);
    Screen0_imgCenter->fn->setBackgroundType(Screen0_imgCenter, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgCenter->fn->setBorderType(Screen0_imgCenter, LE_WIDGET_BORDER_NONE);
    Screen0_imgCenter->fn->setImage(Screen0_imgCenter, (leImage*)&CenterBlue);
    root0->fn->addChild(root0, (leWidget*)Screen0_imgCenter);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    Screen0_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen0(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    Screen0_OnUpdate(); // raise event
}

void screenHide_Screen0(void)
{
    Screen0_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen0_BaseFillPanel = NULL;
    Screen0_imgGauge = NULL;
    Screen0_btnChangeNeedle = NULL;
    Screen0_lblNeedleType = NULL;
    Screen0_imgMGSLogo = NULL;
    Screen0_lblDemoName = NULL;
    Screen0_surfNeedle = NULL;
    Screen0_imgCenter = NULL;


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

