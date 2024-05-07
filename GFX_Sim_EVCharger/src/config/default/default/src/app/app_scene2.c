#include "definitions.h"

static SYS_INP_InputListener app_inputListener;
static unsigned int tick2IntervalMS = 100;
static SYS_TIME_HANDLE tick2Timer;
leFixedString p_BattPercentage;
static leChar p_BattPercentageBuff[4] = {0};
static char p_BatPercentcharbuff[4];

leFixedString p_rtString;
static leChar p_rtStringBuff[8] = {0};
static char p_rtStringcharbuff[8];

int i, j =11;
static uint32_t prev_batt_tick, battery_tick=0;
int sec_cntr=0;
bool right = true;
bool userTouchScreen2 = false;
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
        Screen0_ButtonWidget_0->fn->setEnabled(Screen0_ButtonWidget_0, LE_FALSE);
        Screen0_ButtonWidget_0->fn->setVisible(Screen0_ButtonWidget_0, LE_FALSE);
        Screen0_ButtonWidget_scene1->fn->setEnabled(Screen0_ButtonWidget_scene1, LE_FALSE);
        Screen0_ButtonWidget_scene1->fn->setVisible(Screen0_ButtonWidget_scene1, LE_FALSE);
        Screen0_LabelWidget_scene0->fn->setString(Screen0_LabelWidget_scene0, (leString*)&string_remaining_time);
        Screen0_LabelWidget_scene0->fn->setVisible(Screen0_LabelWidget_scene0, LE_TRUE);
        update_rt();
		Screen0_PanelWidget_0->fn->setPosition(Screen0_PanelWidget_0, 11, 11);
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




void init_Scene2(void)
{
	app_inputListener.handleTouchDown = &app_touchDownHandler;
    SYS_INP_AddListener(&app_inputListener);
    
	tick2Timer = SYS_TIME_CallbackRegisterMS(tick2TimerCallback,
                           (uintptr_t) NULL,
                           tick2IntervalMS,
                           SYS_TIME_PERIODIC);
						   
    leFixedString_Constructor(&p_BattPercentage,  p_BattPercentageBuff, 8);
    p_BattPercentage.fn->setFont(&p_BattPercentage, (leFont*)&NotoSans_28);
    
    leFixedString_Constructor(&p_rtString,  p_rtStringBuff, 16);
    p_rtString.fn->setFont(&p_rtString, (leFont*)&NotoSans_28);
    
    
}



void Update_Scene2(void)
{
    if (battery_tick != prev_batt_tick)
    {
        prev_batt_tick = battery_tick;

        if(i<=11){
            Screen0_PanelWidget_battery->fn->setWidth(Screen0_PanelWidget_battery, (64*0.1*++i));

        }else{
            i=0;
        }
        if(right==true){
            /* Task 6: Use Widget API to move Screen0_PanelWidget_0 to the right (j++) */
			Screen0_PanelWidget_0->fn->setPosition(Screen0_PanelWidget_0 , j++, 11);
		}
        else{	
			/* Task 6: Use Widget API to move Screen0_PanelWidget_0 to the left (j--) */
            Screen0_PanelWidget_0->fn->setPosition(Screen0_PanelWidget_0 , j--, 11);
		}
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
