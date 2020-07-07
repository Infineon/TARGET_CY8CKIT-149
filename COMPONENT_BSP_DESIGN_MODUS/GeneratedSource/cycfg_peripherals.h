/*******************************************************************************
* File Name: cycfg_peripherals.h
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.1.0.1266
* psoc4pdl 1.0.0.899
* personalities_2.0 2.0.0.0
* udd_2.0 2.0.0.299
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#include "cy_csd.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_CSD_ENABLED 1U
#define CY_CAPSENSE_CORE 0u
#define CY_CAPSENSE_CPU_CLK 24000000u
#define CY_CAPSENSE_PERI_CLK 24000000u
#define CY_CAPSENSE_VDDA_MV 3300u
#define CY_CAPSENSE_PERI_DIV_TYPE CY_SYSCLK_DIV_16_BIT
#define CY_CAPSENSE_PERI_DIV_INDEX 0u
#define Cmod_PORT GPIO_PRT4
#define CintA_PORT GPIO_PRT4
#define CintB_PORT GPIO_PRT4
#define Button0_Rx0_PORT GPIO_PRT4
#define Button0_Tx_PORT GPIO_PRT0
#define Button1_Rx0_PORT GPIO_PRT4
#define Button1_Tx_PORT GPIO_PRT0
#define Button2_Rx0_PORT GPIO_PRT4
#define Button2_Tx_PORT GPIO_PRT0
#define LinearSlider0_Sns0_PORT GPIO_PRT2
#define LinearSlider0_Sns1_PORT GPIO_PRT6
#define LinearSlider0_Sns2_PORT GPIO_PRT6
#define LinearSlider0_Sns3_PORT GPIO_PRT6
#define LinearSlider0_Sns4_PORT GPIO_PRT6
#define LinearSlider0_Sns5_PORT GPIO_PRT6
#define Cmod_PIN 1u
#define CintA_PIN 2u
#define CintB_PIN 3u
#define Button0_Rx0_PIN 6u
#define Button0_Tx_PIN 2u
#define Button1_Rx0_PIN 5u
#define Button1_Tx_PIN 2u
#define Button2_Rx0_PIN 4u
#define Button2_Tx_PIN 2u
#define LinearSlider0_Sns0_PIN 7u
#define LinearSlider0_Sns1_PIN 0u
#define LinearSlider0_Sns2_PIN 1u
#define LinearSlider0_Sns3_PIN 2u
#define LinearSlider0_Sns4_PIN 4u
#define LinearSlider0_Sns5_PIN 5u
#define Cmod_PORT_NUM 4u
#define CintA_PORT_NUM 4u
#define CintB_PORT_NUM 4u
#define CYBSP_CSD_HW CSD0
#define CYBSP_CSD_IRQ csd_interrupt_IRQn

extern cy_stc_csd_context_t cy_csd_0_context;

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
