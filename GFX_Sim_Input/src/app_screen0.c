#include <stdio.h>

#include "gfx/legato/generated/le_gen_init.h"
#include "system/time/sys_time.h"

#define SCREEN_TIMEOUT_SECS 30
#define SCREEN_TIMER_PERIOD_MS 1000

/* Timeout Timer handle */ 
SYS_TIME_HANDLE screenTimer;

/* Timeout timer counter */
static volatile unsigned int tickSecs = 0;
static unsigned int lastTickSec = 0;

/* Counter dynamic string */
static leDynamicString * screenCounterString;

/* Timeout timer callback */
static void Timer_Callback ( uintptr_t context)
{
    if (tickSecs > 0)
    {
        tickSecs--;
    }
}

/* API for resetting counter */
void App_Screen0_ResetTimer(void)
{
    tickSecs = SCREEN_TIMEOUT_SECS;
}

/* unlock button touch handler */
void event_Screen0_btnUnlock_OnReleased(leButtonWidget* btn)
{
    /* Reset timer counter value */
    App_Screen0_ResetTimer();
    
    /* Show lock dialog box */
    Screen0_pnlLock->fn->setVisible(Screen0_pnlLock, LE_FALSE);
    
    /* Restart timer */
    SYS_TIME_TimerStart(screenTimer);
}

/* Screen On Show Handler */
void Screen0_OnShow(void)
{
    /* Initialize counters */
    tickSecs = 0;
    lastTickSec = 0;
    
    /* Showing screen, register 1s timer */
    screenTimer = SYS_TIME_CallbackRegisterMS(Timer_Callback,
                  1, 
                  SCREEN_TIMER_PERIOD_MS,
                  SYS_TIME_PERIODIC);
    
    /* Hide lock dialog box at init */
    Screen0_pnlLock->fn->setVisible(Screen0_pnlLock, LE_TRUE);
    
    //Allocate dynamic string object, must be freed with leString_Delete
    screenCounterString = leDynamicString_New(); 
    screenCounterString->fn->setFont(screenCounterString, (leFont*) &Font0);
    
}

/* Screen On Hide handler */
void Screen0_OnHide(void)
{
    /* Hiding screen, destroy timer */
    SYS_TIME_TimerDestroy(screenTimer);
    
    /* Free Dynamic string allocations */
    leString_Delete((leString *) screenCounterString);
}

/* Screen periodic update handler */
void Screen0_OnUpdate(void)
{
    if (lastTickSec != tickSecs)
    {
        char cStrBuff[16];
        
        /* Update the counter value label */
        snprintf(cStrBuff, 16, "%d\nsecs", tickSecs);
        
        //Set string data from C-string
        screenCounterString->fn->setFromCStr(screenCounterString, cStrBuff);  
        
        //Update label widget string
        Screen0_lblCounter->fn->setString(Screen0_lblCounter, (leString *) screenCounterString); 
        
        /* Check if counter has expired */
        if (tickSecs == 0)
        {
            /* Stop Timer */
            SYS_TIME_TimerStop(screenTimer);
            
            /* Show lock dialog box */
            Screen0_pnlLock->fn->setVisible(Screen0_pnlLock, LE_TRUE);
        }
        
        lastTickSec = tickSecs;
    }
}