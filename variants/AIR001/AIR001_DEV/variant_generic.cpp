/*
 *******************************************************************************
 * Copyright (c) 2023, AirM2M
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_AIR001_DEV)
#include "pins_arduino.h"

// Digital PinName array
const PinName digitalPin[] = {
    PA_13, // D0
    PA_14, // D1
    PB_3,  // D2    
    PA_6,  // D3/A0
    PA_5,  // D4/A1
    PF_0,  // D5
    PF_1,  // D6
    PA_0,  // D7/A2
    PA_1,  // D8/A3
    PA_4,  // D9/A4
    PA_7,  // D10/A5
    PB_0,  // D11/A6
    PB_2,  // D12  
    PB_1  // D13/A7
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
    4,  // A0,  PA6
    5,  // A1,  PA5
    8,  // A2,  PA0
    9,  // A3,  PA1
    10,  // A4,  PA4
    11,  // A5,  PA7
    12,  // A6,  PB0
    13  // A7,  PB1
};

#endif /* ARDUINO_GENERIC_* */
