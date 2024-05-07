#include <stdio.h>
#include <time.h>
#include "app.h"
#include "definitions.h"

#ifdef TARGET	

/* Task 3: Fixed String Variable Declarations to display time */
#define TIME_FIXED_STR_SIZE 19
static leFixedString timeStaticStr;
static leChar timeStrStatBuff[TIME_FIXED_STR_SIZE] = {0}; 
/* C-type string buffer */
static char p_timecharbuff[TIME_FIXED_STR_SIZE];
// Structure to store RTC data
struct tm currentTime;
//variable to keep track of when to update time
int lastminute;

#endif   

//Array of cable animation images
leImage  imgAnim[14];
//counter to cycle through the array of cable animation images
static uint8_t anim_cnt=0;
//counters to keep track of the current and previous iteration of cable image array
static uint32_t prev_tick, tick = 0;
bool scene1_FC = false; //boolean to track if the fully charged notice is displayed

#define OUTPUT_POWER 25 //unit KW 
#define BATTERY_SIZE 50  //unit KWh

uint8_t percent_battery_charge = 10;
uint8_t prev_percent_battery_charge = 0;
int remaining_time = 0;  // unit min
int charged_time = 0;  //unit min
int delivered_energy  = 0; // unit KWh

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
void update_meterLabels(void);
void UpdateTime_Label (void);
void calculate_meter_change(void);
uint8_t screensaver_cnt = 0;
bool animate_cable = true;
uint32_t battery_image =0;

static unsigned int ssIntervalMS = 10000;
static unsigned int tickIntervalMS = 100;

/*Screen Saver timer*/
static SYS_TIME_HANDLE ssTimer; 
/*Tick timer*/
static SYS_TIME_HANDLE tickTimer;

static void ssTimerCallback ( uintptr_t context )
{
    screensaver_cnt++;
}

uint8_t get_screensaver_cnt(void)
{
    if(scene1_FC)
        return 0;
    else
        return screensaver_cnt;
}

int get_rt(void)
{
    return remaining_time;
}

static void tickTimerCallback ( uintptr_t context )
{
    tick++;
}

/* Display Scene 1 */
void ShowScene1(void)
{
	/* If coming from Scene 0, display meter labels */
    if(getScreen()== DEMO_SCREEN0)
    {
        percent_battery_charge = 10;
        prev_percent_battery_charge = 0;
        calculate_meter_change();
        update_meterLabels(); 
        Screen0_ButtonWidget_0->fn->setEnabled(Screen0_ButtonWidget_0, LE_FALSE);
		/* Setting battery_image to 1 if coming from scene0 */
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
        Screen0_ButtonWidget_scene1->fn->setVisible(Screen0_ButtonWidget_scene1, LE_TRUE);
        Screen0_ButtonWidget_0->fn->setVisible(Screen0_ButtonWidget_0, LE_TRUE);
    }

    setScreen(DEMO_SCREEN1);
    animate_cable = true;        
 
	/*Task 5: Set Screen0_ImageSequenceWidget_0 widget with the battery_image index; battery_image is 1 if coming from scene0 
	else it is last known vaue stored before going from scene 1 to 2 */
    Screen0_ImageSequenceWidget_0->fn->showImage(Screen0_ImageSequenceWidget_0, battery_image);

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
	/* Task 3: initialize time fixed string with statically allocated variable for data storage and set the font */

	/*Setting labels for the RTC Time */
    leFixedString_Constructor(&timeStaticStr,  timeStrStatBuff, TIME_FIXED_STR_SIZE*2);
    timeStaticStr.fn->setFont(&timeStaticStr, (leFont*)&NotoMono_14);

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
    /*Initializing the sprite image array*/
    init_anim_images();
    
	/*Setting labels for the EV Charger meter*/
    leFixedString_Constructor(&p_percentage,  p_legato_percentageBuff, (5*2));
    p_percentage.fn->setFont(&p_percentage, (leFont*)&NotoSans_28);
    
    leFixedString_Constructor(&p_remainingT,  p_legato_remainingT_Buff, (4*2));
    p_remainingT.fn->setFont(&p_remainingT, (leFont*)&NotoSans_28);
    
    leFixedString_Constructor(&p_chargeT,  p_legato_chargeT_Buff, (4*2));
    p_chargeT.fn->setFont(&p_chargeT, (leFont*)&NotoSans_28);
    
    leFixedString_Constructor(&p_deliveredE,  p_legato_deliveredE_Buff, (4*2));
    p_deliveredE.fn->setFont(&p_deliveredE, (leFont*)&NotoSans_28);
	
	/* Callback to handle charge cable animation*/
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

#ifdef TARGET 
void UpdateTime_Label (void)
{
    RTC_TimeGet( &currentTime );
    if(lastminute != currentTime.tm_min)
    {
        lastminute = currentTime.tm_min;
		/* Task 3: Create time string using RTC value, update fixed string using c string and finally display to Screen0_rtc_label label */
        memset(p_timecharbuff,0,sizeof(p_timecharbuff));
        sprintf(p_timecharbuff ,"%02d/%02d/%04d - %02d:%02d",1+currentTime.tm_mon, currentTime.tm_mday,1900+currentTime.tm_year, currentTime.tm_hour,currentTime.tm_min);
        timeStaticStr.fn->setFromCStr(&timeStaticStr, p_timecharbuff);  
        Screen0_rtc_label->fn->setString(Screen0_rtc_label, (leString*)&timeStaticStr);
    }
}
#endif 	

void UpdateChargeAnime_Canvas(void)
{
if (tick != prev_tick)
    {
        prev_tick = tick;     
        /* Task 4: Set the pixel buffer with the next image in the array of spite images imgAnim using anim_cnt */		
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
            /* Task 5: Full charge has reached. Therefore show last image in the sequence */
            Screen0_ImageSequenceWidget_0->fn->showImage(Screen0_ImageSequenceWidget_0, 10);
        }
        percent_battery_charge=100;   
        
    }else{
        
        /* Task 5: Go to Next image in the sequence */   
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
		/* Task 5: Go to previous image in the sequence */
        Screen0_ImageSequenceWidget_0->fn->showPreviousImage(Screen0_ImageSequenceWidget_0);
    }
    
    if(percent_battery_charge !=prev_percent_battery_charge){
        calculate_meter_change();
        update_meterLabels();
        prev_percent_battery_charge = percent_battery_charge;
    }
}

void exitScene1(void)
{
    SYS_TIME_TimerStop(ssTimer); // for showing screen saver screen (Scene2))
    SYS_TIME_TimerStop(tickIntervalMS); // for cable animation
    screensaver_cnt = 0;
    scene1_FC = false;
    gfxcHideCanvas(CABLE_ANIMATE_CANVAS_ID);  
    gfxcCanvasUpdate(CABLE_ANIMATE_CANVAS_ID);
	/* Task 5: get the image count to battery_image variable */
    battery_image = Screen0_ImageSequenceWidget_0->fn->getImageCount(Screen0_ImageSequenceWidget_0);
}

void event_Screen0_ButtonWidget_scene1_OnReleased(leButtonWidget* btn)
{
    exitScene1();
    ShowScene0();
    
}