/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * RUMBA pin assignments
 */

#ifndef __AVR_ATmega2560__
  #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif

#if EXTRUDERS > 3
  #error RUMBA supports up to 3 extruders. Comment this line to keep going.
#endif

#define DEFAULT_MACHINE_NAME "Rumba"

#define X_STEP_PIN         17
#define X_DIR_PIN          16
#define X_ENABLE_PIN       48
#define X_MIN_PIN          37
#define X_MAX_PIN          36

#define Y_STEP_PIN         54
#define Y_DIR_PIN          47
#define Y_ENABLE_PIN       55
#define Y_MIN_PIN          35
#define Y_MAX_PIN          34

#define Z_STEP_PIN         57
#define Z_DIR_PIN          56
#define Z_ENABLE_PIN       62
#define Z_MIN_PIN          33
#define Z_MAX_PIN          32

#if ENABLED(Z_MIN_PROBE_ENDSTOP)
  // Define a pin to use as the signal pin on Arduino for the Z probe endstop.
  #define Z_MIN_PROBE_PIN  33
#endif

#define E0_STEP_PIN        23
#define E0_DIR_PIN         22
#define E0_ENABLE_PIN      24

#define E1_STEP_PIN        26
#define E1_DIR_PIN         25
#define E1_ENABLE_PIN      27

// E3D BigBox Dual Z
// #define E2_STEP_PIN        29
// #define E2_DIR_PIN         28
// #define E2_ENABLE_PIN      39

#define LED_PIN            13

#define FAN_PIN             7
#define FAN1_PIN            8

#define PS_ON_PIN          45
#define KILL_PIN           46

#if TEMP_SENSOR_0 == 0
  #define TEMP_0_PIN           -1
  #define HEATER_0_PIN         -1
#else
  #define HEATER_0_PIN          2   // EXTRUDER 1
  #if TEMP_SENSOR_0 == -1
    #define TEMP_0_PIN          6   // ANALOG NUMBERING - connector *K1* on RUMBA thermocouple ADD ON is used
  #elif TEMP_SENSOR_0 == 20           // E3D PT100
    #define TEMP_0_PIN          15  // ANALOG NUMBERING
  #else
    #define TEMP_0_PIN         15   // ANALOG NUMBERING - default connector for thermistor *T0* on rumba board is used
  #endif
#endif

#if TEMP_SENSOR_1 == 0
  #define TEMP_1_PIN           -1
  #define HEATER_1_PIN         -1
#else
  #define HEATER_1_PIN          3   // EXTRUDER 2
  #if TEMP_SENSOR_1 == -1
    #define TEMP_1_PIN          5   // ANALOG NUMBERING - connector *K2* on RUMBA thermocouple ADD ON is used
  #elif TEMP_SENSOR_1 == 20           // E3D PT100
    #define TEMP_1_PIN          14   // ANALOG NUMBERING
  #else
    #define TEMP_1_PIN         14   // ANALOG NUMBERING - default connector for thermistor *T1* on rumba board is used
  #endif
#endif

#if TEMP_SENSOR_2 == 0
  #define TEMP_2_PIN          -1
  #define HEATER_2_PIN        -1
#else
  #define HEATER_2_PIN         6    // EXTRUDER 3
  #if TEMP_SENSOR_2 == -1
    #define TEMP_2_PIN         7    // ANALOG NUMBERING - connector *K3* on RUMBA thermocouple ADD ON is used <-- this can not be used when TEMP_SENSOR_BED is defined as thermocouple
  #else
    #define TEMP_2_PIN         13   // ANALOG NUMBERING - default connector for thermistor *T2* on rumba board is used
  #endif
#endif

//optional for extruder 4 or chamber: #define TEMP_X_PIN         12   // ANALOG NUMBERING - default connector for thermistor *T3* on rumba board is used
//optional FAN1 can be used as 4th heater output: #define HEATER_3_PIN       8    // EXTRUDER 4

#if TEMP_SENSOR_BED == 0
  #define TEMP_BED_PIN        -1
  #define HEATER_BED_PIN      -1
#else
  #define HEATER_BED_PIN       9    // BED
  #if TEMP_SENSOR_BED == -1
    #define TEMP_BED_PIN       7    // ANALOG NUMBERING - connector *K3* on RUMBA thermocouple ADD ON is used <-- this can not be used when TEMP_SENSOR_2 is defined as thermocouple
  #else
    #define TEMP_BED_PIN      11    // ANALOG NUMBERING - default connector for thermistor *THB* on rumba board is used
  #endif
#endif

#define SDPOWER            -1
#define SDSS               53
#define SD_DETECT_PIN      49
#define BEEPER_PIN         44
#define LCD_PINS_RS        19
#define LCD_PINS_ENABLE    42
#define LCD_PINS_D4        18
#define LCD_PINS_D5        38
#define LCD_PINS_D6        41
#define LCD_PINS_D7        40
#define BTN_EN1            11
#define BTN_EN2            12
#define BTN_ENC            43

#define SERVO0_PIN         5
