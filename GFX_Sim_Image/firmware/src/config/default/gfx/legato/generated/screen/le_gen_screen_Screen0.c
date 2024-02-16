#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_Panel_0;
leImageWidget* Screen0_Background;
leImageWidget* Screen0_MicrochipLogo;
leImageWidget* Screen0_Image4;
leImageWidget* Screen0_Image1;
leImageWidget* Screen0_Image3;
leImageWidget* Screen0_Image2;

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

    Screen0_Panel_0 = leWidget_New();
    Screen0_Panel_0->fn->setPosition(Screen0_Panel_0, 0, 0);
    Screen0_Panel_0->fn->setSize(Screen0_Panel_0, 480, 272);
    Screen0_Panel_0->fn->setScheme(Screen0_Panel_0, &Scheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_Panel_0);

    Screen0_Background = leImageWidget_New();
    Screen0_Background->fn->setPosition(Screen0_Background, 0, 0);
    Screen0_Background->fn->setSize(Screen0_Background, 480, 272);
    Screen0_Background->fn->setBorderType(Screen0_Background, LE_WIDGET_BORDER_NONE);
    Screen0_Background->fn->setImage(Screen0_Background, (leImage*)&background_0);
    root0->fn->addChild(root0, (leWidget*)Screen0_Background);

    Screen0_MicrochipLogo = leImageWidget_New();
    Screen0_MicrochipLogo->fn->setPosition(Screen0_MicrochipLogo, -4, -1);
    Screen0_MicrochipLogo->fn->setSize(Screen0_MicrochipLogo, 188, 44);
    Screen0_MicrochipLogo->fn->setAlphaEnabled(Screen0_MicrochipLogo, LE_TRUE);
    Screen0_MicrochipLogo->fn->setScheme(Screen0_MicrochipLogo, &Scheme);
    Screen0_MicrochipLogo->fn->setBackgroundType(Screen0_MicrochipLogo, LE_WIDGET_BACKGROUND_NONE);
    Screen0_MicrochipLogo->fn->setBorderType(Screen0_MicrochipLogo, LE_WIDGET_BORDER_NONE);
    Screen0_MicrochipLogo->fn->setHAlignment(Screen0_MicrochipLogo, LE_HALIGN_LEFT);
    Screen0_MicrochipLogo->fn->setImage(Screen0_MicrochipLogo, (leImage*)&microchiplogo);
    root0->fn->addChild(root0, (leWidget*)Screen0_MicrochipLogo);

    Screen0_Image4 = leImageWidget_New();
    Screen0_Image4->fn->setPosition(Screen0_Image4, 364, 120);
    Screen0_Image4->fn->setSize(Screen0_Image4, 80, 80);
    Screen0_Image4->fn->setScheme(Screen0_Image4, &Scheme);
    Screen0_Image4->fn->setBackgroundType(Screen0_Image4, LE_WIDGET_BACKGROUND_NONE);
    Screen0_Image4->fn->setBorderType(Screen0_Image4, LE_WIDGET_BORDER_NONE);
    Screen0_Image4->fn->setImage(Screen0_Image4, (leImage*)&icon1);
    root0->fn->addChild(root0, (leWidget*)Screen0_Image4);

    Screen0_Image1 = leImageWidget_New();
    Screen0_Image1->fn->setPosition(Screen0_Image1, 20, 120);
    Screen0_Image1->fn->setSize(Screen0_Image1, 80, 80);
    Screen0_Image1->fn->setScheme(Screen0_Image1, &Scheme1);
    Screen0_Image1->fn->setBorderType(Screen0_Image1, LE_WIDGET_BORDER_NONE);
    Screen0_Image1->fn->setImage(Screen0_Image1, (leImage*)&icon1);
    root0->fn->addChild(root0, (leWidget*)Screen0_Image1);

    Screen0_Image3 = leImageWidget_New();
    Screen0_Image3->fn->setPosition(Screen0_Image3, 257, 120);
    Screen0_Image3->fn->setSize(Screen0_Image3, 80, 80);
    Screen0_Image3->fn->setBackgroundType(Screen0_Image3, LE_WIDGET_BACKGROUND_NONE);
    Screen0_Image3->fn->setBorderType(Screen0_Image3, LE_WIDGET_BORDER_LINE);
    Screen0_Image3->fn->setImage(Screen0_Image3, (leImage*)&icon1);
    root0->fn->addChild(root0, (leWidget*)Screen0_Image3);

    Screen0_Image2 = leImageWidget_New();
    Screen0_Image2->fn->setPosition(Screen0_Image2, 131, 120);
    Screen0_Image2->fn->setSize(Screen0_Image2, 85, 76);
    Screen0_Image2->fn->setAlphaEnabled(Screen0_Image2, LE_TRUE);
    Screen0_Image2->fn->setAlphaAmount(Screen0_Image2, 100);
    Screen0_Image2->fn->setScheme(Screen0_Image2, &Scheme1);
    Screen0_Image2->fn->setBorderType(Screen0_Image2, LE_WIDGET_BORDER_NONE);
    Screen0_Image2->fn->setImage(Screen0_Image2, (leImage*)&icon1);
    root0->fn->addChild(root0, (leWidget*)Screen0_Image2);

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

    Screen0_Panel_0 = NULL;
    Screen0_Background = NULL;
    Screen0_MicrochipLogo = NULL;
    Screen0_Image4 = NULL;
    Screen0_Image1 = NULL;
    Screen0_Image3 = NULL;
    Screen0_Image2 = NULL;


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

