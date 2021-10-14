/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.5721
* mtb-pdl-cat2 1.4.0.5338
* personalities 5.0.0.0
* udd 3.0.0.1428
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
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

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_CSX_BTN_TX_ENABLED 1U
#define CYBSP_CSX_BTN_TX_PORT GPIO_PRT0
#define CYBSP_CSX_BTN_TX_PORT_NUM 0U
#define CYBSP_CSX_BTN_TX_PIN 2U
#define CYBSP_CSX_BTN_TX_NUM 2U
#define CYBSP_CSX_BTN_TX_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSX_BTN_TX_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_2_HSIOM
    #define ioss_0_port_0_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSX_BTN_TX_HSIOM ioss_0_port_0_pin_2_HSIOM
#define CYBSP_CSX_BTN_TX_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN_TX_HAL_PORT_PIN P0_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN_TX P0_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN_TX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN_TX_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN_TX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD0 (P1_0)
    #define CYBSP_LED5 CYBSP_LED_SLD0
    #define CYBSP_USER_LED2 CYBSP_LED_SLD0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD1 (P1_2)
    #define CYBSP_LED6 CYBSP_LED_SLD1
    #define CYBSP_USER_LED3 CYBSP_LED_SLD1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD2 (P1_4)
    #define CYBSP_LED7 CYBSP_LED_SLD2
    #define CYBSP_USER_LED4 CYBSP_LED_SLD2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD3 (P1_6)
    #define CYBSP_LED8 CYBSP_LED_SLD3
    #define CYBSP_USER_LED5 CYBSP_LED_SLD3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD4 (P2_0)
    #define CYBSP_LED9 CYBSP_LED_SLD4
    #define CYBSP_USER_LED6 CYBSP_LED_SLD4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_SLD5 (P2_2)
    #define CYBSP_LED10 CYBSP_LED_SLD5
    #define CYBSP_USER_LED7 CYBSP_LED_SLD5
#endif //defined (CY_USING_HAL)
#define CYBSP_CSD_SLD0_ENABLED 1U
#define CYBSP_CS_SLD0_ENABLED CYBSP_CSD_SLD0_ENABLED
#define CYBSP_CSD_SLD0_PORT GPIO_PRT2
#define CYBSP_CS_SLD0_PORT CYBSP_CSD_SLD0_PORT
#define CYBSP_CSD_SLD0_PORT_NUM 2U
#define CYBSP_CS_SLD0_PORT_NUM CYBSP_CSD_SLD0_PORT_NUM
#define CYBSP_CSD_SLD0_PIN 7U
#define CYBSP_CS_SLD0_PIN CYBSP_CSD_SLD0_PIN
#define CYBSP_CSD_SLD0_NUM 7U
#define CYBSP_CS_SLD0_NUM CYBSP_CSD_SLD0_NUM
#define CYBSP_CSD_SLD0_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CS_SLD0_DRIVEMODE CYBSP_CSD_SLD0_DRIVEMODE
#define CYBSP_CSD_SLD0_INIT_DRIVESTATE 1
#define CYBSP_CS_SLD0_INIT_DRIVESTATE CYBSP_CSD_SLD0_INIT_DRIVESTATE
#ifndef ioss_0_port_2_pin_7_HSIOM
    #define ioss_0_port_2_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD0_HSIOM ioss_0_port_2_pin_7_HSIOM
#define CYBSP_CS_SLD0_HSIOM CYBSP_CSD_SLD0_HSIOM
#define CYBSP_CSD_SLD0_IRQ ioss_interrupts_gpio_2_IRQn
#define CYBSP_CS_SLD0_IRQ CYBSP_CSD_SLD0_IRQ
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD0_HAL_PORT_PIN P2_7
    #define CYBSP_CS_SLD0_HAL_PORT_PIN CYBSP_CSD_SLD0_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD0 P2_7
    #define CYBSP_CS_SLD0 CYBSP_CSD_SLD0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_CS_SLD0_HAL_IRQ CYBSP_CSD_SLD0_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD0_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_CS_SLD0_HAL_DIR CYBSP_CSD_SLD0_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
    #define CYBSP_CS_SLD0_HAL_DRIVEMODE CYBSP_CSD_SLD0_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SCL (P3_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SDA (P3_1)
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_PORT GPIO_PRT3
#define CYBSP_SWDIO_PORT_NUM 3U
#define CYBSP_SWDIO_PIN 2U
#define CYBSP_SWDIO_NUM 2U
#define CYBSP_SWDIO_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_2_HSIOM
    #define ioss_0_port_3_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDIO_HSIOM ioss_0_port_3_pin_2_HSIOM
#define CYBSP_SWDIO_IRQ ioss_interrupts_gpio_3_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_PORT_PIN P3_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO P3_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDCK_ENABLED 1U
#define CYBSP_SWDCK_PORT GPIO_PRT3
#define CYBSP_SWDCK_PORT_NUM 3U
#define CYBSP_SWDCK_PIN 3U
#define CYBSP_SWDCK_NUM 3U
#define CYBSP_SWDCK_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWDCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_3_HSIOM
    #define ioss_0_port_3_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDCK_HSIOM ioss_0_port_3_pin_3_HSIOM
#define CYBSP_SWDCK_IRQ ioss_interrupts_gpio_3_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_PORT_PIN P3_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK P3_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED1 (P3_4)
    #define CYBSP_USER_LED CYBSP_LED1
    #define CYBSP_USER_LED1 CYBSP_LED1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SW1 (P3_7)
    #define CYBSP_USER_BTN1 CYBSP_SW1
    #define CYBSP_USER_BTN CYBSP_SW1
#endif //defined (CY_USING_HAL)
#define CYBSP_CMOD_ENABLED 1U
#define CYBSP_CMOD_PORT GPIO_PRT4
#define CYBSP_CMOD_PORT_NUM 4U
#define CYBSP_CMOD_PIN 1U
#define CYBSP_CMOD_NUM 1U
#define CYBSP_CMOD_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CMOD_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_1_HSIOM
    #define ioss_0_port_4_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CMOD_HSIOM ioss_0_port_4_pin_1_HSIOM
#define CYBSP_CMOD_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CMOD_HAL_PORT_PIN P4_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CMOD P4_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CMOD_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CMOD_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CMOD_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_CINTA_ENABLED 1U
#define CYBSP_CINTA_PORT GPIO_PRT4
#define CYBSP_CINTA_PORT_NUM 4U
#define CYBSP_CINTA_PIN 2U
#define CYBSP_CINTA_NUM 2U
#define CYBSP_CINTA_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CINTA_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_2_HSIOM
    #define ioss_0_port_4_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CINTA_HSIOM ioss_0_port_4_pin_2_HSIOM
#define CYBSP_CINTA_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CINTA_HAL_PORT_PIN P4_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CINTA P4_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CINTA_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CINTA_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CINTA_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_CINTB_ENABLED 1U
#define CYBSP_CINTB_PORT GPIO_PRT4
#define CYBSP_CINTB_PORT_NUM 4U
#define CYBSP_CINTB_PIN 3U
#define CYBSP_CINTB_NUM 3U
#define CYBSP_CINTB_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CINTB_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_3_HSIOM
    #define ioss_0_port_4_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CINTB_HSIOM ioss_0_port_4_pin_3_HSIOM
#define CYBSP_CINTB_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CINTB_HAL_PORT_PIN P4_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CINTB P4_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CINTB_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CINTB_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CINTB_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_CSX_BTN2_ENABLED 1U
#define CYBSP_CSX_BTN2_PORT GPIO_PRT4
#define CYBSP_CSX_BTN2_PORT_NUM 4U
#define CYBSP_CSX_BTN2_PIN 4U
#define CYBSP_CSX_BTN2_NUM 4U
#define CYBSP_CSX_BTN2_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSX_BTN2_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_4_HSIOM
    #define ioss_0_port_4_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSX_BTN2_HSIOM ioss_0_port_4_pin_4_HSIOM
#define CYBSP_CSX_BTN2_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN2_HAL_PORT_PIN P4_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN2 P4_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN2_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN2_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN2_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_CSX_BTN1_ENABLED 1U
#define CYBSP_CSX_BTN1_PORT GPIO_PRT4
#define CYBSP_CSX_BTN1_PORT_NUM 4U
#define CYBSP_CSX_BTN1_PIN 5U
#define CYBSP_CSX_BTN1_NUM 5U
#define CYBSP_CSX_BTN1_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSX_BTN1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_5_HSIOM
    #define ioss_0_port_4_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSX_BTN1_HSIOM ioss_0_port_4_pin_5_HSIOM
#define CYBSP_CSX_BTN1_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN1_HAL_PORT_PIN P4_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN1 P4_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN1_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_CSX_BTN0_ENABLED 1U
#define CYBSP_CSX_BTN0_PORT GPIO_PRT4
#define CYBSP_CSX_BTN0_PORT_NUM 4U
#define CYBSP_CSX_BTN0_PIN 6U
#define CYBSP_CSX_BTN0_NUM 6U
#define CYBSP_CSX_BTN0_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSX_BTN0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_6_HSIOM
    #define ioss_0_port_4_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSX_BTN0_HSIOM ioss_0_port_4_pin_6_HSIOM
#define CYBSP_CSX_BTN0_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN0_HAL_PORT_PIN P4_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN0 P4_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN0_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSX_BTN0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_MOSI (P5_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_MISO (P5_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN0 (P5_2)
    #define CYBSP_LED11 CYBSP_LED_BTN0
    #define CYBSP_USER_LED8 CYBSP_LED_BTN0
    #define CYBSP_SPI_CLK CYBSP_LED_BTN0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_CS (P5_3)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN1 (P5_5)
    #define CYBSP_LED12 CYBSP_LED_BTN1
    #define CYBSP_USER_LED9 CYBSP_LED_BTN1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED_BTN2 (P5_7)
    #define CYBSP_LED13 CYBSP_LED_BTN2
    #define CYBSP_USER_LED10 CYBSP_LED_BTN2
#endif //defined (CY_USING_HAL)
#define CYBSP_CSD_SLD1_ENABLED 1U
#define CYBSP_CS_SLD1_ENABLED CYBSP_CSD_SLD1_ENABLED
#define CYBSP_CSD_SLD1_PORT GPIO_PRT6
#define CYBSP_CS_SLD1_PORT CYBSP_CSD_SLD1_PORT
#define CYBSP_CSD_SLD1_PORT_NUM 6U
#define CYBSP_CS_SLD1_PORT_NUM CYBSP_CSD_SLD1_PORT_NUM
#define CYBSP_CSD_SLD1_PIN 0U
#define CYBSP_CS_SLD1_PIN CYBSP_CSD_SLD1_PIN
#define CYBSP_CSD_SLD1_NUM 0U
#define CYBSP_CS_SLD1_NUM CYBSP_CSD_SLD1_NUM
#define CYBSP_CSD_SLD1_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CS_SLD1_DRIVEMODE CYBSP_CSD_SLD1_DRIVEMODE
#define CYBSP_CSD_SLD1_INIT_DRIVESTATE 1
#define CYBSP_CS_SLD1_INIT_DRIVESTATE CYBSP_CSD_SLD1_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_0_HSIOM
    #define ioss_0_port_6_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD1_HSIOM ioss_0_port_6_pin_0_HSIOM
#define CYBSP_CS_SLD1_HSIOM CYBSP_CSD_SLD1_HSIOM
#define CYBSP_CSD_SLD1_IRQ ioss_interrupt_gpio_IRQn
#define CYBSP_CS_SLD1_IRQ CYBSP_CSD_SLD1_IRQ
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD1_HAL_PORT_PIN P6_0
    #define CYBSP_CS_SLD1_HAL_PORT_PIN CYBSP_CSD_SLD1_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD1 P6_0
    #define CYBSP_CS_SLD1 CYBSP_CSD_SLD1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_CS_SLD1_HAL_IRQ CYBSP_CSD_SLD1_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD1_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_CS_SLD1_HAL_DIR CYBSP_CSD_SLD1_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
    #define CYBSP_CS_SLD1_HAL_DRIVEMODE CYBSP_CSD_SLD1_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define CYBSP_CSD_SLD2_ENABLED 1U
#define CYBSP_CS_SLD2_ENABLED CYBSP_CSD_SLD2_ENABLED
#define CYBSP_CSD_SLD2_PORT GPIO_PRT6
#define CYBSP_CS_SLD2_PORT CYBSP_CSD_SLD2_PORT
#define CYBSP_CSD_SLD2_PORT_NUM 6U
#define CYBSP_CS_SLD2_PORT_NUM CYBSP_CSD_SLD2_PORT_NUM
#define CYBSP_CSD_SLD2_PIN 1U
#define CYBSP_CS_SLD2_PIN CYBSP_CSD_SLD2_PIN
#define CYBSP_CSD_SLD2_NUM 1U
#define CYBSP_CS_SLD2_NUM CYBSP_CSD_SLD2_NUM
#define CYBSP_CSD_SLD2_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CS_SLD2_DRIVEMODE CYBSP_CSD_SLD2_DRIVEMODE
#define CYBSP_CSD_SLD2_INIT_DRIVESTATE 1
#define CYBSP_CS_SLD2_INIT_DRIVESTATE CYBSP_CSD_SLD2_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_1_HSIOM
    #define ioss_0_port_6_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD2_HSIOM ioss_0_port_6_pin_1_HSIOM
#define CYBSP_CS_SLD2_HSIOM CYBSP_CSD_SLD2_HSIOM
#define CYBSP_CSD_SLD2_IRQ ioss_interrupt_gpio_IRQn
#define CYBSP_CS_SLD2_IRQ CYBSP_CSD_SLD2_IRQ
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD2_HAL_PORT_PIN P6_1
    #define CYBSP_CS_SLD2_HAL_PORT_PIN CYBSP_CSD_SLD2_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD2 P6_1
    #define CYBSP_CS_SLD2 CYBSP_CSD_SLD2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD2_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_CS_SLD2_HAL_IRQ CYBSP_CSD_SLD2_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD2_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_CS_SLD2_HAL_DIR CYBSP_CSD_SLD2_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD2_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
    #define CYBSP_CS_SLD2_HAL_DRIVEMODE CYBSP_CSD_SLD2_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define CYBSP_CSD_SLD3_ENABLED 1U
#define CYBSP_CS_SLD3_ENABLED CYBSP_CSD_SLD3_ENABLED
#define CYBSP_CSD_SLD3_PORT GPIO_PRT6
#define CYBSP_CS_SLD3_PORT CYBSP_CSD_SLD3_PORT
#define CYBSP_CSD_SLD3_PORT_NUM 6U
#define CYBSP_CS_SLD3_PORT_NUM CYBSP_CSD_SLD3_PORT_NUM
#define CYBSP_CSD_SLD3_PIN 2U
#define CYBSP_CS_SLD3_PIN CYBSP_CSD_SLD3_PIN
#define CYBSP_CSD_SLD3_NUM 2U
#define CYBSP_CS_SLD3_NUM CYBSP_CSD_SLD3_NUM
#define CYBSP_CSD_SLD3_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CS_SLD3_DRIVEMODE CYBSP_CSD_SLD3_DRIVEMODE
#define CYBSP_CSD_SLD3_INIT_DRIVESTATE 1
#define CYBSP_CS_SLD3_INIT_DRIVESTATE CYBSP_CSD_SLD3_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_2_HSIOM
    #define ioss_0_port_6_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD3_HSIOM ioss_0_port_6_pin_2_HSIOM
#define CYBSP_CS_SLD3_HSIOM CYBSP_CSD_SLD3_HSIOM
#define CYBSP_CSD_SLD3_IRQ ioss_interrupt_gpio_IRQn
#define CYBSP_CS_SLD3_IRQ CYBSP_CSD_SLD3_IRQ
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD3_HAL_PORT_PIN P6_2
    #define CYBSP_CS_SLD3_HAL_PORT_PIN CYBSP_CSD_SLD3_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD3 P6_2
    #define CYBSP_CS_SLD3 CYBSP_CSD_SLD3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD3_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_CS_SLD3_HAL_IRQ CYBSP_CSD_SLD3_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD3_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_CS_SLD3_HAL_DIR CYBSP_CSD_SLD3_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD3_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
    #define CYBSP_CS_SLD3_HAL_DRIVEMODE CYBSP_CSD_SLD3_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define CYBSP_CSD_SLD4_ENABLED 1U
#define CYBSP_CS_SLD4_ENABLED CYBSP_CSD_SLD4_ENABLED
#define CYBSP_CSD_SLD4_PORT GPIO_PRT6
#define CYBSP_CS_SLD4_PORT CYBSP_CSD_SLD4_PORT
#define CYBSP_CSD_SLD4_PORT_NUM 6U
#define CYBSP_CS_SLD4_PORT_NUM CYBSP_CSD_SLD4_PORT_NUM
#define CYBSP_CSD_SLD4_PIN 4U
#define CYBSP_CS_SLD4_PIN CYBSP_CSD_SLD4_PIN
#define CYBSP_CSD_SLD4_NUM 4U
#define CYBSP_CS_SLD4_NUM CYBSP_CSD_SLD4_NUM
#define CYBSP_CSD_SLD4_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CS_SLD4_DRIVEMODE CYBSP_CSD_SLD4_DRIVEMODE
#define CYBSP_CSD_SLD4_INIT_DRIVESTATE 1
#define CYBSP_CS_SLD4_INIT_DRIVESTATE CYBSP_CSD_SLD4_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_4_HSIOM
    #define ioss_0_port_6_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD4_HSIOM ioss_0_port_6_pin_4_HSIOM
#define CYBSP_CS_SLD4_HSIOM CYBSP_CSD_SLD4_HSIOM
#define CYBSP_CSD_SLD4_IRQ ioss_interrupt_gpio_IRQn
#define CYBSP_CS_SLD4_IRQ CYBSP_CSD_SLD4_IRQ
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD4_HAL_PORT_PIN P6_4
    #define CYBSP_CS_SLD4_HAL_PORT_PIN CYBSP_CSD_SLD4_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD4 P6_4
    #define CYBSP_CS_SLD4 CYBSP_CSD_SLD4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD4_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_CS_SLD4_HAL_IRQ CYBSP_CSD_SLD4_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD4_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_CS_SLD4_HAL_DIR CYBSP_CSD_SLD4_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD4_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
    #define CYBSP_CS_SLD4_HAL_DRIVEMODE CYBSP_CSD_SLD4_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define CYBSP_CSD_SLD5_ENABLED 1U
#define CYBSP_CS_SLD5_ENABLED CYBSP_CSD_SLD5_ENABLED
#define CYBSP_CSD_SLD5_PORT GPIO_PRT6
#define CYBSP_CS_SLD5_PORT CYBSP_CSD_SLD5_PORT
#define CYBSP_CSD_SLD5_PORT_NUM 6U
#define CYBSP_CS_SLD5_PORT_NUM CYBSP_CSD_SLD5_PORT_NUM
#define CYBSP_CSD_SLD5_PIN 5U
#define CYBSP_CS_SLD5_PIN CYBSP_CSD_SLD5_PIN
#define CYBSP_CSD_SLD5_NUM 5U
#define CYBSP_CS_SLD5_NUM CYBSP_CSD_SLD5_NUM
#define CYBSP_CSD_SLD5_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CS_SLD5_DRIVEMODE CYBSP_CSD_SLD5_DRIVEMODE
#define CYBSP_CSD_SLD5_INIT_DRIVESTATE 1
#define CYBSP_CS_SLD5_INIT_DRIVESTATE CYBSP_CSD_SLD5_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_5_HSIOM
    #define ioss_0_port_6_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD5_HSIOM ioss_0_port_6_pin_5_HSIOM
#define CYBSP_CS_SLD5_HSIOM CYBSP_CSD_SLD5_HSIOM
#define CYBSP_CSD_SLD5_IRQ ioss_interrupt_gpio_IRQn
#define CYBSP_CS_SLD5_IRQ CYBSP_CSD_SLD5_IRQ
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD5_HAL_PORT_PIN P6_5
    #define CYBSP_CS_SLD5_HAL_PORT_PIN CYBSP_CSD_SLD5_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD5 P6_5
    #define CYBSP_CS_SLD5 CYBSP_CSD_SLD5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD5_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_CS_SLD5_HAL_IRQ CYBSP_CSD_SLD5_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD5_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_CS_SLD5_HAL_DIR CYBSP_CSD_SLD5_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD5_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
    #define CYBSP_CS_SLD5_HAL_DRIVEMODE CYBSP_CSD_SLD5_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_DEBUG_UART_RX (P7_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_DEBUG_UART_TX (P7_1)
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t CYBSP_CSX_BTN_TX_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSX_BTN_TX_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD0_config;
#define CYBSP_CS_SLD0_config CYBSP_CSD_SLD0_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_SLD0_obj;
    #define CYBSP_CS_SLD0_obj CYBSP_CSD_SLD0_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_SWDIO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_SWDCK_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CMOD_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CMOD_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CINTA_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CINTA_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CINTB_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CINTB_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSX_BTN2_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSX_BTN2_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSX_BTN1_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSX_BTN1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSX_BTN0_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSX_BTN0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD1_config;
#define CYBSP_CS_SLD1_config CYBSP_CSD_SLD1_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_SLD1_obj;
    #define CYBSP_CS_SLD1_obj CYBSP_CSD_SLD1_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD2_config;
#define CYBSP_CS_SLD2_config CYBSP_CSD_SLD2_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_SLD2_obj;
    #define CYBSP_CS_SLD2_obj CYBSP_CSD_SLD2_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD3_config;
#define CYBSP_CS_SLD3_config CYBSP_CSD_SLD3_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_SLD3_obj;
    #define CYBSP_CS_SLD3_obj CYBSP_CSD_SLD3_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD4_config;
#define CYBSP_CS_SLD4_config CYBSP_CSD_SLD4_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_SLD4_obj;
    #define CYBSP_CS_SLD4_obj CYBSP_CSD_SLD4_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD5_config;
#define CYBSP_CS_SLD5_config CYBSP_CSD_SLD5_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_CSD_SLD5_obj;
    #define CYBSP_CS_SLD5_obj CYBSP_CSD_SLD5_obj
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
