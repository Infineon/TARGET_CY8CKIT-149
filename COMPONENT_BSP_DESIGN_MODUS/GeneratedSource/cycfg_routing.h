/*******************************************************************************
* File Name: cycfg_routing.h
*
* Description:
* Establishes all necessary connections between hardware elements.
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

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "cycfg_notices.h"
void init_cycfg_routing(void);
#define init_cycfg_connectivity() init_cycfg_routing()
#define ioss_0_port_0_pin_2_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_2_pin_7_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_3_pin_2_HSIOM P3_2_CPUSS_SWD_DATA
#define ioss_0_port_3_pin_3_HSIOM P3_3_CPUSS_SWD_CLK
#define ioss_0_port_4_pin_1_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_4_pin_2_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_4_pin_3_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_4_pin_4_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_4_pin_5_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_4_pin_6_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_6_pin_0_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_6_pin_1_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_6_pin_2_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_6_pin_4_HSIOM HSIOM_SEL_AMUXA
#define ioss_0_port_6_pin_5_HSIOM HSIOM_SEL_AMUXA

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_ROUTING_H */
