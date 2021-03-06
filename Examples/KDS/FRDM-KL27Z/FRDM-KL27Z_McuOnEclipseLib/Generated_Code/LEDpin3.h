/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : LEDpin3.h
**     Project     : FRDM-KL27Z_McuOnEclipseLib
**     Processor   : MKL25Z128VLK4
**     Component   : SDK_BitIO
**     Version     : Component 01.019, Driver 01.00, CPU db: 3.00.000
**     Repository  : Legacy User Components
**     Compiler    : GNU C Compiler
**     Date/Time   : 2017-01-19, 17:19, # CodeGen: 4
**     Abstract    :
**
**     Settings    :
**          Component name                                 : LEDpin3
**          SDK                                            : MCUC1
**          GPIO Name                                      : GPIOB
**          PORT Name                                      : PORTB
**          Pin Number                                     : 19
**          Pin Symbol                                     : LED_RED
**          Do Pin Muxing                                  : yes
**     Contents    :
**         GetDir    - bool LEDpin3_GetDir(void);
**         SetDir    - void LEDpin3_SetDir(bool Dir);
**         SetInput  - void LEDpin3_SetInput(void);
**         SetOutput - void LEDpin3_SetOutput(void);
**         GetVal    - bool LEDpin3_GetVal(void);
**         PutVal    - void LEDpin3_PutVal(bool Val);
**         ClrVal    - void LEDpin3_ClrVal(void);
**         SetVal    - void LEDpin3_SetVal(void);
**         NegVal    - void LEDpin3_NegVal(void);
**         Init      - void LEDpin3_Init(void);
**         Deinit    - void LEDpin3_Deinit(void);
**
**     * Copyright (c) 2015-2017, Erich Styger
**      * Web:         https://mcuoneclipse.com
**      * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**      * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**      * All rights reserved.
**      *
**      * Redistribution and use in source and binary forms, with or without modification,
**      * are permitted provided that the following conditions are met:
**      *
**      * - Redistributions of source code must retain the above copyright notice, this list
**      *   of conditions and the following disclaimer.
**      *
**      * - Redistributions in binary form must reproduce the above copyright notice, this
**      *   list of conditions and the following disclaimer in the documentation and/or
**      *   other materials provided with the distribution.
**      *
**      * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**      * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**      * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**      * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**      * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**      * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**      * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**      * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**      * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**      * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file LEDpin3.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup LEDpin3_module LEDpin3 module documentation
**  @{
*/         

#ifndef __LEDpin3_H
#define __LEDpin3_H

/* MODULE LEDpin3. */
#include "MCUC1.h" /* SDK and API used */
#include "LEDpin3config.h" /* configuration */

#if MCUC1_CONFIG_SDK_VERSION_USED == MCUC1_CONFIG_SDK_KINETIS_1_3
  #include "fsl_gpio_driver.h"

  /* only GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF and GPIOG are currently supported */
  #define LEDpin3_GPIO_IDX GPIOB_IDX   /* GPIOB */
  #define LEDpin3_PinNumber  19u   /* number of pin, type unsigned integer */

  enum LEDpin3_pinNames{
    LED_RED = GPIO_MAKE_PIN(LEDpin3_GPIO_IDX, LEDpin3_PinNumber),
  };

  extern const gpio_output_pin_user_config_t LEDpin3_OutputConfig[];
  extern const gpio_input_pin_user_config_t LEDpin3_InputConfig[];
#endif

void LEDpin3_Init(void);
/*
** ===================================================================
**     Method      :  LEDpin3_Init (component SDK_BitIO)
**     Description :
**         Driver initialization method
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin3_ClrVal(void);
/*
** ===================================================================
**     Method      :  LEDpin3_ClrVal (component SDK_BitIO)
**     Description :
**         Clears the pin value (sets it to a low level)
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin3_SetVal(void);
/*
** ===================================================================
**     Method      :  LEDpin3_SetVal (component SDK_BitIO)
**     Description :
**         Sets the pin value to a high value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin3_NegVal(void);
/*
** ===================================================================
**     Method      :  LEDpin3_NegVal (component SDK_BitIO)
**     Description :
**         Toggles/negates the pin value
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin3_Deinit(void);
/*
** ===================================================================
**     Method      :  LEDpin3_Deinit (component SDK_BitIO)
**     Description :
**         Driver de-initialization method
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

bool LEDpin3_GetVal(void);
/*
** ===================================================================
**     Method      :  LEDpin3_GetVal (component SDK_BitIO)
**     Description :
**         Returns the pin value
**     Parameters  : None
**     Returns     :
**         ---             - Returns the value of the pin:
**                           FALSE/logical level '0' or TRUE/logical
**                           level '1'
** ===================================================================
*/

bool LEDpin3_GetDir(void);
/*
** ===================================================================
**     Method      :  LEDpin3_GetDir (component SDK_BitIO)
**     Description :
**         Return the direction of the pin (input/output)
**     Parameters  : None
**     Returns     :
**         ---             - FALSE if port is input, TRUE if port is
**                           output
** ===================================================================
*/

void LEDpin3_SetDir(bool Dir);
/*
** ===================================================================
**     Method      :  LEDpin3_SetDir (component SDK_BitIO)
**     Description :
**         Sets the direction of the pin (input or output)
**     Parameters  :
**         NAME            - DESCRIPTION
**         Dir             - FALSE: input, TRUE: output
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin3_SetInput(void);
/*
** ===================================================================
**     Method      :  LEDpin3_SetInput (component SDK_BitIO)
**     Description :
**         Sets the pin as input
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin3_SetOutput(void);
/*
** ===================================================================
**     Method      :  LEDpin3_SetOutput (component SDK_BitIO)
**     Description :
**         Sets the pin as output
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin3_PutVal(bool Val);
/*
** ===================================================================
**     Method      :  LEDpin3_PutVal (component SDK_BitIO)
**     Description :
**         Sets the pin value
**     Parameters  :
**         NAME            - DESCRIPTION
**         Val             - Value to set. FALSE/logical '0' or
**                           TRUE/logical '1'
**     Returns     : Nothing
** ===================================================================
*/

/* END LEDpin3. */

#endif
/* ifndef __LEDpin3_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
