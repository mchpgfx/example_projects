#include "definitions.h"

/* Screen resolution */
#define DEFAULT_WIDTH 480
#define DEFAULT_HEIGHT 272

/* LCD Layer IDs. 
 * Base layer (0) is used for the main menu and screens.
 * Overlay layer (1) is used for the sliding pop-up window
 */
#define BASE_LCD_LAYER_ID 0
#define OVERLAY_LCD_LAYER_ID 1

/* Macros for setting the widget enabled flag
 * Enabled widgets get touch events.
 * Disabled widgets (and its child widgets) do not get touch events, 
 * and allow events to go through it to lower level widgets.
 */
#define WIDGET_SET_ENABLE_FLAG(widget) (widget)->flags |= LE_WIDGET_ENABLED;
#define WIDGET_CLEAR_ENABLE_FLAG(widget) (widget)->flags &= ~LE_WIDGET_ENABLED;

/* Coefficient for pop up widget slide easing function */
#define LAYER_FX_MOVE_DELTA 6


/* Enum for layer-screen IDs. The order should match the MGS Composer layers 
 * and canvas objects */
typedef enum
{
    MAIN_MENU,
    SCREEN_1,
    SCREEN_2,
    SCREEN_3,
    SCREEN_4,
    POPUP,
    MAX_SCREENS
} APP_SCREENS;

/* Screen states */
typedef enum
{
    APP_SCREEN_INIT,
    APP_SCREEN_RUNNING,
} APP_SCREEN_STATE;

/* layer-screen objects */
typedef struct
{
    unsigned int lcdLayer;      /* The LCD layer used to display the layer-screen */
    leWidget ** bkgdPanel;      /* The parent background panel used */
} APP_LAYER_SCREEN_OBJ;

/* 
 * Structures that specify the layer-screen LCD layers and background panels 
 * The application screen code will use this to assign LCD layers and to reference
 * the layer-screen background panels.
 */
static APP_LAYER_SCREEN_OBJ appLayerScreen[MAX_SCREENS] = 
{
    [MAIN_MENU] = {0, &Screen0_BackgroundPanel},
    [SCREEN_1] = {0, &Screen0_BackgroundPanel_1},
    [SCREEN_2] = {0, &Screen0_BackgroundPanel_2},
    [SCREEN_3] = {0, &Screen0_BackgroundPanel_3},
    [SCREEN_4] = {0, &Screen0_BackgroundPanel_4},
    [POPUP] = {1, &Screen0_PopUpPanel},
};

/* Screen application state machine state variable */
static APP_SCREEN_STATE appScreenState = APP_SCREEN_INIT;

/* Helper function to hide a specific layer-screen */
static void APP_LayerScreenHide(uint32_t id)
{
    /* Hide the canvas layer */
    gfxcHideCanvas(id);
    gfxcCanvasUpdate(id);

    /* Disable the parent panel. This will disable events and allow events to 
     * pass through to the lower level layer-screens */
    WIDGET_CLEAR_ENABLE_FLAG(*appLayerScreen[id].bkgdPanel);        
}

/* Helper function to hide all screens */
static void APP_LayerScreenHideAll(void)
{
    unsigned int i;
    
    for (i = 0; i < MAX_SCREENS; i++)
    {
        APP_LayerScreenHide(i);
    }
}

/* Helper function to show a specific layer-screen */
static void APP_LayerScreenShow(uint32_t id)
{
    /* Hide all layer-screens first */
    APP_LayerScreenHideAll();
    
    /* Show the layer-screen */
    gfxcShowCanvas(id);
    gfxcCanvasUpdate(id);
    
    /* Enable the layer-screen panel for event processing */
    WIDGET_SET_ENABLE_FLAG(*appLayerScreen[id].bkgdPanel);
}

/* Function to show the pop-up layer-screen */
static void APP_ScreenShowPop(void)
{
    /* Show the layer-screen */
    gfxcSetWindowPosition(POPUP, 0, 272);
    gfxcShowCanvas(POPUP);
    gfxcCanvasUpdate(POPUP);
    
    /* Start pop-up sliding from bottom to show layer-screen */
    gfxcStartEffectMove(POPUP,
                        GFXC_FX_MOVE_DEC,
                        0,
                        272,
                        0,
                        0,
                        LAYER_FX_MOVE_DELTA);
    
    /* Enable the pop-up panel so it can receive touch events */
    WIDGET_SET_ENABLE_FLAG(*appLayerScreen[POPUP].bkgdPanel);     
}

void APP_ScreenHidePop(void)
{
    /* Start pop-up sliding from top to hide layer-screen */
    gfxcStartEffectMove(POPUP,
                        GFXC_FX_MOVE_DEC,
                        0,
                        0,
                        0,
                        272,
                        LAYER_FX_MOVE_DELTA);
    
    /* Disable the parent panel. This will disable events */
    WIDGET_CLEAR_ENABLE_FLAG(*appLayerScreen[POPUP].bkgdPanel);   
        
}

void APP_Screen_Initialize(void)
{
    unsigned int i;
    
    for (i = 0; i < MAX_SCREENS; i++)
    {
        /* Set the LCD layers for each layer-screen */
        gfxcSetLayer(i, appLayerScreen[i].lcdLayer);
        
        /* WQVGA size for all layer-screens */
        gfxcSetWindowSize(i, DEFAULT_WIDTH, DEFAULT_HEIGHT);
        
        /* 0,0 position for all layer-screens */
        gfxcSetWindowPosition(i, 0, 0);
    }
}



void Screen0_OnShow(void)
{
    /* Initialize all layer-screens */
    APP_Screen_Initialize();
    
    /* Hide all the layer-screens at boot */
    APP_LayerScreenHideAll();    
    
    appScreenState = APP_SCREEN_INIT;
}

void Screen0_OnUpdate(void)
{
    switch(appScreenState)
    {
        case APP_SCREEN_INIT:
        {
            /* Wait for the renderer to complete drawing all the layer-screens */
            if (leRenderer_IsIdle() == true)
                break;
            
            /* Show the main menu screen */
            APP_LayerScreenShow(MAIN_MENU);
            
            appScreenState = APP_SCREEN_RUNNING;
            
            break;
        }
        case APP_SCREEN_RUNNING:
        {
            break;
        }
        default:
            break;
    }
}


void event_Screen0_Screen1Button_OnReleased(leButtonWidget* btn)
{
    /* Show Screen 1 layer-screen */
    APP_LayerScreenShow(SCREEN_1);
}

void event_Screen0_Screen2Button_OnReleased(leButtonWidget* btn)
{
    /* Show Screen 2 layer-screen */
    APP_LayerScreenShow(SCREEN_2);
}

void event_Screen0_Screen3Button_OnReleased(leButtonWidget* btn)
{
    /* Show Screen 3 layer-screen */
    APP_LayerScreenShow(SCREEN_3);
}

void event_Screen0_Screen4Button_OnReleased(leButtonWidget* btn)
{
    /* Show Screen 4 layer-screen */
    APP_LayerScreenShow(SCREEN_4);
}

void event_Screen0_HomeButton_OnReleased(leButtonWidget* btn)
{
    /* Show Main Menu layer-screen */
     APP_LayerScreenShow(MAIN_MENU);
}

void event_Screen0_HomeButton_0_OnReleased(leButtonWidget* btn)
{
    /* Show Main Menu layer-screen when home button is pressed */
    APP_LayerScreenShow(MAIN_MENU);
}

void event_Screen0_HomeButton_1_OnReleased(leButtonWidget* btn)
{
    /* Show Main Menu layer-screen when home button is pressed */
    APP_LayerScreenShow(MAIN_MENU);
}

void event_Screen0_HomeButton_2_OnReleased(leButtonWidget* btn)
{
    /* Show Main Menu layer-screen when home button is pressed */
    APP_LayerScreenShow(MAIN_MENU);
}

void event_Screen0_PopUp_OnReleased(leButtonWidget* btn)
{
    /* Show pop-up layer-screen */
    APP_ScreenShowPop();
}

void event_Screen0_BackButton_OnReleased(leButtonWidget* btn)
{
    /* Hide pop-up layer-screen */
    APP_ScreenHidePop();
}
