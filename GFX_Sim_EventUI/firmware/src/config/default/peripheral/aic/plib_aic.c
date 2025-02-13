/*******************************************************************************
  AIC PLIB Implementation

  Company:
    Microchip Technology Inc.

  File Name:
    plib_aic.h

  Summary:
    Function implementations for the AIC PLIB.

  Description:
    This PLIB provides a simple interface to configure the Advanced Interrupt
    Controller.

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
//DOM-IGNORE-END
#include "definitions.h"


// *****************************************************************************
// *****************************************************************************
// Section: Local Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: AIC Implementation
// *****************************************************************************
// *****************************************************************************
extern IrqData  irqData[];
extern uint32_t irqDataEntryCount;

void
AIC_INT_Initialize( void )
{   
    __enable_irq();
    __ISB();                                                // Allow pended interrupts to be recognized immediately
}

void AIC_INT_IrqEnable( void )
{
    __DMB();
    __enable_irq();
}

bool AIC_INT_IrqDisable( void )
{
    /* Add a volatile qualifier to the return value to prevent the compiler from optimizing out this function */
    volatile bool previousValue = ((CPSR_I_Msk & __get_CPSR()) != 0U)? false:true;
    __disable_irq();
    __DMB();
    return( previousValue );
}

void AIC_INT_IrqRestore( bool state )
{
    if( state == true )
    {
        __DMB();
        __enable_irq();
    }
    else
    {
        __disable_irq();
        __DMB();
    }
}
