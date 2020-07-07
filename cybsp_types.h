/***************************************************************************//**
* \file CY8CKIT-149/cybsp_types.h
*
* Description:
* Provides APIs for interacting with the hardware contained on the Cypress
* CY8CKIT-149 pioneer kit.
*
********************************************************************************
* \copyright
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
*******************************************************************************/

#pragma once
#if defined(CY_USING_HAL)
#include "cyhal_pin_package.h"
#endif
#if defined(COMPONENT_BSP_DESIGN_MODUS) || defined(COMPONENT_CUSTOM_DESIGN_MODUS)
#include "cycfg.h"
#endif
#if defined(__cplusplus)
extern "C" {
#endif

/**
* \addtogroup group_bsp_settings BSP Settings
* \{
*
* <div class="category">Peripheral Default HAL Settings:</div>
* | Resource | Parameter | Value | Remarks |
* | :------: | :-------: | :---: | :------ |
* | I2C      | Role | Slave | Configurable to slave mode through HAL function |
* | ^        | Data rate | 400 kbps | Configurable through HAL function |
* | ^        | Drive mode of SCL & SDA pins | Open Drain (drives low) | External pull-up resistors are required |
* | SPI      | Data rate | 100 kpbs | Configurable through HAL function |
* | ^        | Slave select polarity | Active low | |
* | UART     | Flow control | No flow control | Configurable through HAL function |
* | ^        | Data format | 8N1 | Configurable through HAL function |
* | ^        | Baud rate | 115200 | Configurable through HAL function |
*/
/** \} group_bsp_settings */


/**
* \addtogroup group_bsp_pin_state Pin States
* \{
*/

/** Pin state for the LED on. */
#ifndef CYBSP_LED_STATE_ON
#define CYBSP_LED_STATE_ON          (0U)
#endif
/** Pin state for the LED off. */
#ifndef CYBSP_LED_STATE_OFF
#define CYBSP_LED_STATE_OFF         (1U)
#endif
/** Pin state for when a button is pressed. */
#ifndef CYBSP_BTN_PRESSED
#define CYBSP_BTN_PRESSED           (0U)
#endif
/** Pin state for when a button is released. */
#ifndef CYBSP_BTN_OFF
#define CYBSP_BTN_OFF               (1U)
#endif

/** \} group_bsp_pin_state */

#if defined(CY_USING_HAL)

/**
* \addtogroup group_bsp_pins Pin Mappings
* \{
*/

/**
* \addtogroup group_bsp_pins_led LED Pins
* \{
*/

/** LED 1; LED1 (blue) */
#ifndef CYBSP_LED1
#define CYBSP_LED1                  (P3_4)
#endif

/** LED 1; User LED (blue) */
#ifndef CYBSP_USER_LED
#define CYBSP_USER_LED              (CYBSP_LED1)
#endif

/** LED 1; User LED1 (blue) */
#ifndef CYBSP_USER_LED1
#define CYBSP_USER_LED1             (CYBSP_LED1)
#endif

/** LED 5; LED5 (green) */
#ifndef CYBSP_LED5
#define CYBSP_LED5                  (P1_0)
#endif

/** LED 5; User LED2 (green) */
#ifndef CYBSP_USER_LED2
#define CYBSP_USER_LED2             (CYBSP_LED5)
#endif

/** LED 5; Slider LED 0 */
#ifndef CYBSP_LED_SLD0
#define CYBSP_LED_SLD0              (CYBSP_LED5)
#endif

/** LED 6; LED6 (green) */
#ifndef CYBSP_LED6
#define CYBSP_LED6                  (P1_2)
#endif

/** LED 6; User LED3 (green) */
#ifndef CYBSP_USER_LED3
#define CYBSP_USER_LED3             (CYBSP_LED6)
#endif

/** LED 6; Slider LED 1 */
#ifndef CYBSP_LED_SLD1
#define CYBSP_LED_SLD1              (CYBSP_LED6)
#endif

/** LED 7; LED7 (green) */
#ifndef CYBSP_LED7
#define CYBSP_LED7                  (P1_4)
#endif

/** LED 7; User LED4 (green) */
#ifndef CYBSP_USER_LED4
#define CYBSP_USER_LED4             (CYBSP_LED7)
#endif

/** LED 7; Slider LED 2 */
#ifndef CYBSP_LED_SLD2
#define CYBSP_LED_SLD2              (CYBSP_LED7)
#endif

/** LED 8; LED8 (green) */
#ifndef CYBSP_LED8
#define CYBSP_LED8                  (P1_6)
#endif

/** LED 8; User LED5 (green) */
#ifndef CYBSP_USER_LED5
#define CYBSP_USER_LED5             (CYBSP_LED8)
#endif

/** LED 8; Slider LED 3 */
#ifndef CYBSP_LED_SLD3
#define CYBSP_LED_SLD3              (CYBSP_LED8)
#endif

/** LED 9; LED9 (green) */
#ifndef CYBSP_LED9
#define CYBSP_LED9                  (P2_0)
#endif

/** LED 8; User LED6 (green) */
#ifndef CYBSP_USER_LED6
#define CYBSP_USER_LED6             (CYBSP_LED9)
#endif

/** LED 9; Slider LED 4 */
#ifndef CYBSP_LED_SLD4
#define CYBSP_LED_SLD4              (CYBSP_LED9)
#endif

/** LED 10; LED10 (green) */
#ifndef CYBSP_LED10
#define CYBSP_LED10                 (P2_2)
#endif

/** LED 8; User LED7 (green) */
#ifndef CYBSP_USER_LED7
#define CYBSP_USER_LED7             (CYBSP_LED10)
#endif

/** LED 10; Slider LED 5 */
#ifndef CYBSP_LED_SLD5
#define CYBSP_LED_SLD5              (CYBSP_LED10)
#endif

/** LED 11; LED11 (green) */
#ifndef CYBSP_LED11
#define CYBSP_LED11                 (P5_2)
#endif

/** LED 8; User LED8 (green) */
#ifndef CYBSP_USER_LED8
#define CYBSP_USER_LED8             (CYBSP_LED11)
#endif

/** LED 11; Button LED 0 */
#ifndef CYBSP_LED_BTN0
#define CYBSP_LED_BTN0              (CYBSP_LED11)
#endif

/** LED 12; LED12 (green) */
#ifndef CYBSP_LED12
#define CYBSP_LED12                 (P5_5)
#endif

/** LED 8; User LED9 (green) */
#ifndef CYBSP_USER_LED9
#define CYBSP_USER_LED9             (CYBSP_LED12)
#endif

/** LED 12; Button LED 1 */
#ifndef CYBSP_LED_BTN1
#define CYBSP_LED_BTN1              (CYBSP_LED12)
#endif

/** LED 13; LED13 (green) */
#ifndef CYBSP_LED13
#define CYBSP_LED13                 (P5_7)
#endif

/** LED 8; User LED10 (green) */
#ifndef CYBSP_USER_LED10
#define CYBSP_USER_LED10            (CYBSP_LED13)
#endif

/** LED 13; Button LED 2 */
#ifndef CYBSP_LED_BTN2
#define CYBSP_LED_BTN2              (CYBSP_LED13)
#endif

/** \} group_bsp_pins_led */

/**
* \addtogroup group_bsp_pins_btn Button Pins
* \{
*/

/** Switch 1; User Button 1 */
#ifndef CYBSP_SW1
#define CYBSP_SW1                   (P3_7)
#endif

/** Switch 1; User Button 1 */
#ifndef CYBSP_USER_BTN1
#define CYBSP_USER_BTN1             (CYBSP_SW1)
#endif

/** Switch 1; User Button 1 */
#ifndef CYBSP_USER_BTN
#define CYBSP_USER_BTN              (CYBSP_USER_BTN1)
#endif

/** \} group_bsp_pins_btn */

/**
* \addtogroup group_bsp_pins_comm Communication Pins
* \{
*/

/** Pin: I2C SCL */
#ifndef CYBSP_I2C_SCL
#define CYBSP_I2C_SCL               (P3_0)
#endif

/** Pin: I2C SDA */
#ifndef CYBSP_I2C_SDA
#define CYBSP_I2C_SDA               (P3_1)
#endif

/** Pin: SPI MOSI */
#ifndef CYBSP_SPI_MOSI
#define CYBSP_SPI_MOSI              (P5_0)
#endif
/** Pin: SPI MISO */
#ifndef CYBSP_SPI_MISO
#define CYBSP_SPI_MISO              (P5_1)
#endif
/** Pin: SPI CLK */
#ifndef CYBSP_SPI_CLK
#define CYBSP_SPI_CLK               (P5_2)
#endif
/** Pin: SPI CS */
#ifndef CYBSP_SPI_CS
#define CYBSP_SPI_CS                (P5_3)
#endif

/** Pin: UART RX */
#ifndef CYBSP_DEBUG_UART_RX
#define CYBSP_DEBUG_UART_RX         (P7_0)
#endif

/** Pin: UART TX */
#ifndef CYBSP_DEBUG_UART_TX
#define CYBSP_DEBUG_UART_TX         (P7_1)
#endif

/** Pin: SWDIO */
#ifndef CYBSP_SWDIO
#define CYBSP_SWDIO                 (P3_2)
#endif

/** Pin: SWDCK */
#ifndef CYBSP_SWDCK
#define CYBSP_SWDCK                 (P3_3)
#endif

/** \} group_bsp_pins_comm */

/** \} group_bsp_pins */

#endif /* defined(CY_USING_HAL) */

#if defined(__cplusplus)
}
#endif
