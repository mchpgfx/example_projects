/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "app.h"
#include "gfx/canvas/gfx_canvas_api.h"
#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"
#include "system/input/sys_input.h"
#include "system/time/sys_time.h"
#include <stdio.h>
#include <stdlib.h>
// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* COMMON */
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.

    Application strings and buffers are be defined outside this structure.
*/

APP_DATA appData;
SCREEN_STATES getScreen(void);

/*****************************************************************************/
/* Variables & prototypes for for Screen0 */
void ShowScene0(void);

/*****************************************************************************/
/* Variables & prototypes for for Screen1 */

void ShowScene1(void);
void exitScene1(void);
void calculate_meter_change(void);
void update_meterLabels(void);

#define OUTPUT_POWER 25 //unit KW 
#define BATTERY_SIZE 50  //unit KWh

static unsigned int ssIntervalMS = 10000;
static unsigned int tickIntervalMS = 100;


static SYS_TIME_HANDLE ssTimer;
static SYS_TIME_HANDLE tickTimer;

static uint32_t prev_tick, tick =0;
//Array of cable animation images
leImage  imgAnim[14];
//counter to cycle through the array of cable animation images
static uint8_t anim_cnt=0;


uint8_t screensaver_cnt = 0;
bool scene1_FC = false; //boolean to track if the fully charged notice is displayed
bool animate_cable = true;

uint8_t prev_percent_battery_charge = 0;
uint32_t battery_image =0;
uint8_t percent_battery_charge;
int     remaining_time;  //unit min
int     charged_time;   // unit min
int     delivered_energy; // unit KWh   

/* Legato string objects to display the EV charger meter labels */
leFixedString p_percentage;
leFixedString p_remainingT;
leFixedString p_chargeT;
leFixedString p_deliveredE;
/*end*/

/*Legato Char buffer to maintain data for EV charger meter labels */
static leChar p_legato_percentageBuff[5] = {0};
static leChar p_legato_remainingT_Buff[4] = {0};
static leChar p_legato_chargeT_Buff[4] = {0};
static leChar p_legato_deliveredE_Buff[4] = {0};
/*end*/

/*C character buffer to maintain data for EV charger meter labels */
static char p_percentcharbuff[5];
static char p_remainingtimecharbuff[4];
static char p_chargeTcharbuff[4];
static char p_deliveredEcharbuff[4];
/*end*/
/*****************************************************************************/
/* Variables & prototypes for screen 2*/
static SYS_INP_InputListener app_inputListener;
static unsigned int tick2IntervalMS = 100;
static SYS_TIME_HANDLE tick2Timer;
static uint32_t prev_batt_tick, battery_tick=0;
int sec_cntr=0;
bool right = true;

leFixedString p_BattPercentage;
static leChar p_BattPercentageBuff[4] = {0};
static char p_BatPercentcharbuff[4];

leFixedString p_rtString;
static leChar p_rtStringBuff[8] = {0};
static char p_rtStringcharbuff[8];
bool userTouchScreen2 = false;
int i, j =11;
// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************
/* SCREEN0 */
/* Event handler for ButtonWidget1: Launch Screen1 */
void event_Screen0_ButtonWidget1_OnReleased(leButtonWidget* btn)
{
    ShowScene1();
}


/*****************************************************************************/
/* SCREEN1 */
static void ssTimerCallback ( uintptr_t context )
{
    screensaver_cnt++;
}

static void tickTimerCallback ( uintptr_t context )
{
    tick++;
}
void event_Screen0_ButtonWidget_plus_OnReleased(leButtonWidget* btn)
{
    screensaver_cnt = 0;
    percent_battery_charge+=10;
    if(percent_battery_charge>=100){
        if(scene1_FC==false){
            scene1_FC = true;
            animate_cable = false;
            gfxcHideCanvas(CABLE_ANIMATE_CANVAS_ID);  
            gfxcCanvasUpdate(CABLE_ANIMATE_CANVAS_ID);
            Screen0_RectangleWidget_6->fn->setVisible(Screen0_RectangleWidget_6, LE_TRUE);
            Screen0_LabelWidget_14->fn->setVisible(Screen0_LabelWidget_14, LE_TRUE);
            Screen0_ImageSequenceWidget_0->fn->showImage(Screen0_ImageSequenceWidget_0,10);
        }
        percent_battery_charge=100;   
        
    }else{
        
           Screen0_ImageSequenceWidget_0->fn->showNextImage(Screen0_ImageSequenceWidget_0);        
    }
    gfxcShowCanvas(LAYER_1_CANVAS_ID);  
    gfxcCanvasUpdate(LAYER_1_CANVAS_ID);   
    if(percent_battery_charge !=prev_percent_battery_charge){
        calculate_meter_change();
        update_meterLabels();
        prev_percent_battery_charge = percent_battery_charge;
    }
}

void event_Screen0_ButtonWidget_minus_OnReleased(leButtonWidget* btn)
{
    screensaver_cnt = 0;
    if(scene1_FC==true){
        scene1_FC = false;
        animate_cable = true;
        gfxcShowCanvas(CABLE_ANIMATE_CANVAS_ID);  
        gfxcCanvasUpdate(CABLE_ANIMATE_CANVAS_ID);
        Screen0_RectangleWidget_6->fn->setVisible(Screen0_RectangleWidget_6, LE_FALSE);
        Screen0_LabelWidget_14->fn->setVisible(Screen0_LabelWidget_14, LE_FALSE);
    }
    if(percent_battery_charge<=10){
        percent_battery_charge=10;
    }else{
        percent_battery_charge-=10;
        Screen0_ImageSequenceWidget_0->fn->showPreviousImage(Screen0_ImageSequenceWidget_0);
    }
    
    if(percent_battery_charge !=prev_percent_battery_charge){
        calculate_meter_change();
        update_meterLabels();
        prev_percent_battery_charge = percent_battery_charge;
    }
}


void event_Screen0_ButtonWidget_scene1_OnReleased(leButtonWidget* btn)
{
    exitScene1();
    ShowScene0();
    
}

/*****************************************************************************/
/* SCREEN2 */
static void tick2TimerCallback ( uintptr_t context )
{
    battery_tick++;
    if(battery_tick>=10){
        sec_cntr++;
        battery_tick=0;
    }
}
static void app_touchDownHandler(const SYS_INP_TouchStateEvent* const evt)
{
    if(getScreen() == DEMO_SCREEN2)
        userTouchScreen2 = true;
    
}
// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************
/* COMMON */
SCREEN_STATES getScreen(void)
{
    return appData.demo_screen;
}
void setScreen(SCREEN_STATES screen)
{
    appData.demo_screen = screen;
}
/*****************************************************************************/
/* SCREEN0 */
void ShowScene0(void)
{
    if(getScreen() == DEMO_SCREEN1)
    {
        setScreen(DEMO_SCREEN0);
        Screen0_RectangleWidget_6->fn->setVisible(Screen0_RectangleWidget_6, LE_FALSE);
        Screen0_LabelWidget_14->fn->setVisible(Screen0_LabelWidget_14, LE_FALSE);
        Screen0_ButtonWidget_scene1->fn->setEnabled(Screen0_ButtonWidget_scene1, LE_FALSE);
        Screen0_ButtonWidget_plus->fn->setEnabled(Screen0_ButtonWidget_plus, LE_FALSE);
        Screen0_ButtonWidget_minus->fn->setEnabled(Screen0_ButtonWidget_minus, LE_FALSE);
        Screen0_ButtonWidget1->fn->setEnabled(Screen0_ButtonWidget1, LE_TRUE);

    }
    gfxcShowCanvas(LAYER_0_CANVAS_ID);  
    gfxcCanvasUpdate(LAYER_0_CANVAS_ID);
    gfxcHideCanvas(LAYER_1_CANVAS_ID); 
    gfxcCanvasUpdate(LAYER_1_CANVAS_ID);
    
    
}

/*****************************************************************************/
/* SCREEN1 */
void init_anim_images(void)
{
    imgAnim[0]= cable0;
    imgAnim[1]= cable1;
    imgAnim[2]= cable2;
    imgAnim[3]= cable3;
    imgAnim[4]= cable4;
    imgAnim[5]= cable5;
    imgAnim[6]= cable6;
    imgAnim[7]= cable7;
    imgAnim[8]= cable8;
    imgAnim[9]= cable9;
    imgAnim[10]= cable10;
    imgAnim[11]= cable11;
    imgAnim[12]= cable12;
    imgAnim[13]= cable13;

}

void init_Scene1(void)
{
#ifdef TARGET    
    lastminute=0;
    /*Setting the RTC time label*/
    leFixedString_Constructor(&p_timestring,  p_legatoTimeBuff, MAX_TIME_STRING_LEN *2);
    p_timestring.fn->setFont(&p_timestring, (leFont*)& NotoMono_14);
    
    // Using a 24hr clock, with 0 based day of week and month (0=Sunday, 0=January)
    // 3-31-2019 23:59:50 Sunday
    currentTime.tm_hour = 23;
    currentTime.tm_min = 59;
    currentTime.tm_sec = 50;
    currentTime.tm_year = 122;
    currentTime.tm_mon = 2;
    currentTime.tm_mday = 31;
    currentTime.tm_wday = 0;
    RTC_TimeSet( &currentTime );
#endif
	/*Setting labels for the EV Charger meter*/
    leFixedString_Constructor(&p_percentage,  p_legato_percentageBuff, 10);
    p_percentage.fn->setFont(&p_percentage, (leFont*)&NotoSans_28);
    
    leFixedString_Constructor(&p_remainingT,  p_legato_remainingT_Buff, 8);
    p_remainingT.fn->setFont(&p_remainingT, (leFont*)&NotoSans_28);
    
    leFixedString_Constructor(&p_chargeT,  p_legato_chargeT_Buff, 8);
    p_chargeT.fn->setFont(&p_chargeT, (leFont*)&NotoSans_28);
    
    leFixedString_Constructor(&p_deliveredE,  p_legato_deliveredE_Buff, 8);
    p_deliveredE.fn->setFont(&p_deliveredE, (leFont*)&NotoSans_28);


    /*Initializing the sprite image array*/
    init_anim_images();
    /*TC0_CH2 callback to handle charge cable animation*/
    tickTimer = SYS_TIME_CallbackRegisterMS(tickTimerCallback,
                           (uintptr_t) NULL,
                           tickIntervalMS,
                           SYS_TIME_PERIODIC);
    
    /* Callback to keep track of time to display the charging screen0*/
    ssTimer = SYS_TIME_CallbackRegisterMS(ssTimerCallback,
                           (uintptr_t) NULL,
                           ssIntervalMS,
                           SYS_TIME_PERIODIC);
}
void UpdateChargeAnime_Canvas(void)
{
if (tick != prev_tick)
    {
        prev_tick = tick;     
        gfxcSetPixelBuffer(CABLE_ANIMATE_CANVAS_ID,
                       161,
                       261,
                       GFX_COLOR_MODE_RGBA_8888,
                       (void *) imgAnim[++anim_cnt].buffer.pixels);
        if(anim_cnt >=13)
            anim_cnt =0;
   
    
    }    
}

void Update_Scene1(void)
{
#ifdef TARGET    
    UpdateTime_Label();
#endif    
    if(animate_cable == true){
        UpdateChargeAnime_Canvas();
        gfxcShowCanvas(CABLE_ANIMATE_CANVAS_ID);  
        gfxcCanvasUpdate(CABLE_ANIMATE_CANVAS_ID);
    }
    gfxcShowCanvas(LAYER_1_CANVAS_ID);  
    gfxcCanvasUpdate(LAYER_1_CANVAS_ID);
    
       
}
int get_rt(void)
{
    return remaining_time;
}

void calculate_meter_change(void)
{
    remaining_time = (BATTERY_SIZE/OUTPUT_POWER)*(100-percent_battery_charge);
    charged_time = percent_battery_charge;
    delivered_energy = (OUTPUT_POWER * charged_time)/60;
}

void update_meterLabels(void)
{
    memset(p_percentcharbuff,0,sizeof(p_percentcharbuff));
    sprintf(p_percentcharbuff,"%d%%",percent_battery_charge);
    p_percentage.fn->setFromCStr(&p_percentage, p_percentcharbuff);  
    Screen0_LabelWidget_13->fn->setString(Screen0_LabelWidget_13, (leString*)&p_percentage);

    memset(p_chargeTcharbuff,0,sizeof(p_chargeTcharbuff));
    sprintf(p_chargeTcharbuff,"%d",charged_time);
    p_chargeT.fn->setFromCStr(&p_chargeT, p_chargeTcharbuff);  
    Screen0_LabelWidget_7->fn->setString(Screen0_LabelWidget_7, (leString*)&p_chargeT);
  
    memset(p_deliveredEcharbuff,0,sizeof(p_deliveredEcharbuff));
    sprintf(p_deliveredEcharbuff,"%d",delivered_energy);
    p_deliveredE.fn->setFromCStr(&p_deliveredE, p_deliveredEcharbuff);  
    Screen0_LabelWidget_9->fn->setString(Screen0_LabelWidget_9, (leString*)&p_deliveredE);
    
    memset(p_remainingtimecharbuff,0,sizeof(p_remainingtimecharbuff));
    sprintf(p_remainingtimecharbuff,"%d",remaining_time); 
    p_remainingT.fn->setFromCStr(&p_remainingT, p_remainingtimecharbuff);  
    Screen0_LabelWidget_11->fn->setString(Screen0_LabelWidget_11, (leString*)&p_remainingT); 
 
}

void ShowScene1(void)
{
    if(getScreen()== DEMO_SCREEN0)
    {
        percent_battery_charge = 10;
        prev_percent_battery_charge = 0;
        calculate_meter_change();
        update_meterLabels(); 
        Screen0_ButtonWidget1->fn->setEnabled(Screen0_ButtonWidget1, LE_FALSE);
        battery_image = 1;
    }
    else if(getScreen()== DEMO_SCREEN2)
    {
        Screen0_LabelWidget_15->fn->setVisible(Screen0_LabelWidget_15, LE_FALSE);
        Screen0_RectangleWidget_7->fn->setVisible(Screen0_RectangleWidget_7, LE_FALSE);
        Screen0_LabelWidget_percent->fn->setVisible(Screen0_LabelWidget_percent, LE_FALSE);
        Screen0_PanelWidget_battery->fn->setVisible(Screen0_PanelWidget_battery, LE_FALSE);
        Screen0_ImageWidget_batteryLevel->fn->setVisible(Screen0_ImageWidget_batteryLevel, LE_FALSE);
        Screen0_LabelWidget_rtime->fn->setVisible(Screen0_LabelWidget_rtime, LE_FALSE);
        screensaver_cnt = 0;    
        Screen0_LabelWidget_scene0->fn->setString(Screen0_LabelWidget_scene0, (leString*)&string_Notice);
        Screen0_PanelWidget_0->fn->setPosition(Screen0_PanelWidget_0, 11, 11);
        Screen0_ButtonWidget_scene1->fn->setVisible(Screen0_ButtonWidget_scene1, LE_TRUE);
        Screen0_ButtonWidget1->fn->setVisible(Screen0_ButtonWidget1, LE_TRUE);
    }

    setScreen(DEMO_SCREEN1);
    animate_cable = true;        
 

    Screen0_ImageSequenceWidget_0->fn->showImage(Screen0_ImageSequenceWidget_0,battery_image);
    Screen0_ButtonWidget_scene1->fn->setEnabled(Screen0_ButtonWidget_scene1, LE_TRUE);
    Screen0_ButtonWidget_plus->fn->setEnabled(Screen0_ButtonWidget_plus, LE_TRUE);
    Screen0_ButtonWidget_minus->fn->setEnabled(Screen0_ButtonWidget_minus, LE_TRUE);
    SYS_TIME_TimerStart(ssTimer); // for showing screen saver screen (Scene2))
    SYS_TIME_TimerStart(tickIntervalMS); // for cable animation
    
    gfxcHideCanvas(LAYER_0_CANVAS_ID);  
    gfxcCanvasUpdate(LAYER_0_CANVAS_ID);
    gfxcShowCanvas(LAYER_1_CANVAS_ID);  
    gfxcCanvasUpdate(LAYER_1_CANVAS_ID);
   
}

void exitScene1(void)
{
    SYS_TIME_TimerStop(ssTimer); // for showing screen saver screen (Scene2))
    SYS_TIME_TimerStop(tickIntervalMS); // for cable animation
    
    screensaver_cnt = 0;
    scene1_FC = false;
    gfxcHideCanvas(CABLE_ANIMATE_CANVAS_ID);  
    gfxcCanvasUpdate(CABLE_ANIMATE_CANVAS_ID);
    battery_image = Screen0_ImageSequenceWidget_0->fn->getImageCount(Screen0_ImageSequenceWidget_0);
}
uint8_t get_screensaver_cnt(void)
{
    if(scene1_FC)
        return 0;
    else
        return screensaver_cnt;
}


/*****************************************************************************/
/* SCREEN2 */
void init_Scene2(void)
{
    tick2Timer = SYS_TIME_CallbackRegisterMS(tick2TimerCallback,
                           (uintptr_t) NULL,
                           tick2IntervalMS,
                           SYS_TIME_PERIODIC);
    leFixedString_Constructor(&p_BattPercentage,  p_BattPercentageBuff, 8);
    p_BattPercentage.fn->setFont(&p_BattPercentage, (leFont*)&NotoSans_28);
    
    leFixedString_Constructor(&p_rtString,  p_rtStringBuff, 16);
    p_rtString.fn->setFont(&p_rtString, (leFont*)&NotoSans_28);
    
    
}
void updateBattPercentage(void)
{
    memset(p_BatPercentcharbuff,0,sizeof(p_BatPercentcharbuff));
    sprintf(p_BatPercentcharbuff,"%d%%",percent_battery_charge);
    p_BattPercentage.fn->setFromCStr(&p_BattPercentage, p_BatPercentcharbuff);  
    Screen0_LabelWidget_percent->fn->setString(Screen0_LabelWidget_percent, (leString*)&p_BattPercentage);
}
void update_rt(void)
{
    memset(p_rtStringcharbuff,0,sizeof(p_rtStringcharbuff));
    sprintf(p_rtStringcharbuff,"%d min",get_rt());
    p_rtString.fn->setFromCStr(&p_rtString, p_rtStringcharbuff);  
    Screen0_LabelWidget_rtime->fn->setString(Screen0_LabelWidget_rtime, (leString*)&p_rtString);
    
}
void ShowScene2(void)
{
    if(getScreen() == DEMO_SCREEN1)
    {
        exitScene1();
        setScreen(DEMO_SCREEN2);
        gfxcHideCanvas(CABLE_ANIMATE_CANVAS_ID);  
        gfxcCanvasUpdate(CABLE_ANIMATE_CANVAS_ID);
        Screen0_ButtonWidget1->fn->setEnabled(Screen0_ButtonWidget1, LE_FALSE);
        Screen0_ButtonWidget1->fn->setVisible(Screen0_ButtonWidget1, LE_FALSE);
        Screen0_ButtonWidget_scene1->fn->setEnabled(Screen0_ButtonWidget_scene1, LE_FALSE);
        Screen0_ButtonWidget_scene1->fn->setVisible(Screen0_ButtonWidget_scene1, LE_FALSE);
        Screen0_LabelWidget_scene0->fn->setString(Screen0_LabelWidget_scene0, (leString*)&string_remaining_time);
        Screen0_LabelWidget_scene0->fn->setVisible(Screen0_LabelWidget_scene0, LE_TRUE);
        update_rt();
        Screen0_LabelWidget_rtime->fn->setVisible(Screen0_LabelWidget_rtime, LE_TRUE);
        Screen0_RectangleWidget_0->fn->setVisible(Screen0_RectangleWidget_0, LE_TRUE);
        Screen0_RectangleWidget_7->fn->setVisible(Screen0_RectangleWidget_7, LE_TRUE);
        Screen0_LabelWidget_15->fn->setVisible(Screen0_LabelWidget_15, LE_TRUE);
        Screen0_ImageWidget_batteryLevel->fn->setVisible(Screen0_ImageWidget_batteryLevel, LE_TRUE);
        updateBattPercentage();
        Screen0_PanelWidget_battery->fn->setWidth(Screen0_PanelWidget_battery, (64*0.1));
        Screen0_LabelWidget_percent->fn->setVisible(Screen0_LabelWidget_percent, LE_TRUE);
        Screen0_PanelWidget_battery->fn->setVisible(Screen0_PanelWidget_battery, LE_TRUE);
        right = true;
        j=11;
        userTouchScreen2 = false;
    }
    gfxcShowCanvas(LAYER_0_CANVAS_ID);  
    gfxcCanvasUpdate(LAYER_0_CANVAS_ID);
    gfxcHideCanvas(LAYER_1_CANVAS_ID);  
    gfxcCanvasUpdate(LAYER_1_CANVAS_ID);

    
    SYS_TIME_TimerStart(tick2Timer);
}


void Update_Scene2(void)
{
    if (battery_tick != prev_batt_tick)
    {
        prev_batt_tick = battery_tick;

        if(i<=9){
            Screen0_PanelWidget_battery->fn->setWidth(Screen0_PanelWidget_battery, (64*0.1*++i));

        }else{
            i=0;
        }
        if(right==true)
            Screen0_PanelWidget_0->fn->setPosition(Screen0_PanelWidget_0, j++, 11);
        else
            Screen0_PanelWidget_0->fn->setPosition(Screen0_PanelWidget_0, j--, 11);
        if(j>=635 && (right == true)){
            right = false;
        }
        if(right==false && (j<=12)){
            right=true;
        }
    }
    if(userTouchScreen2 == true)
    {
        SYS_TIME_TimerStop(tick2Timer);
        ShowScene1();
        
    }

}


// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;

    gfxcSetLayer(LAYER_0_CANVAS_ID, LAYER_0_ID);
    gfxcSetWindowPosition(LAYER_0_CANVAS_ID, 0, 0);
    gfxcSetWindowSize(LAYER_0_CANVAS_ID, 800, 480);
    
    gfxcSetLayer(LAYER_1_CANVAS_ID, LAYER_1_ID);
    gfxcSetWindowPosition(LAYER_1_CANVAS_ID, 0, 0);
    gfxcSetWindowSize(LAYER_1_CANVAS_ID, 800, 480);
    
    gfxcSetLayer(CABLE_ANIMATE_CANVAS_ID, LAYER_2_ID);
    gfxcSetWindowPosition(CABLE_ANIMATE_CANVAS_ID, 58, 48);
    gfxcSetWindowSize(CABLE_ANIMATE_CANVAS_ID, 161, 261);
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
        {
            bool appInitialized = true;
            init_Scene1();
            init_Scene2();

            if (appInitialized)
            {
                gfxcHideCanvas(LAYER_1_CANVAS_ID);  
                gfxcCanvasUpdate(LAYER_1_CANVAS_ID);
                gfxcHideCanvas(CABLE_ANIMATE_CANVAS_ID);  
                gfxcCanvasUpdate(CABLE_ANIMATE_CANVAS_ID);
                gfxcShowCanvas(LAYER_0_CANVAS_ID);  
                gfxcCanvasUpdate(LAYER_0_CANVAS_ID);
                /* to return from screen2 to screen 1*/
                app_inputListener.handleTouchDown = &app_touchDownHandler;
                SYS_INP_AddListener(&app_inputListener);
                appData.state = APP_STATE_SERVICE_TASKS;
            }
            break;
        }

        case APP_STATE_SERVICE_TASKS:
        {
            if(appData.demo_screen == DEMO_SCREEN1){
                Update_Scene1();
                if(get_screensaver_cnt() >=2)
                    ShowScene2();                         
            }
            if(appData.demo_screen == DEMO_SCREEN2){
                Update_Scene2();                            
            }
            break;
        }

        /* The default state should never be executed. */
        default:
        {
            /* TODO: Handle error in application's state machine. */
            break;
        }
    }
}


/*******************************************************************************
 End of File
 */
