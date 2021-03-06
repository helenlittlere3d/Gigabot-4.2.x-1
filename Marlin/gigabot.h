// gigabot.h
//
// This include file is intended to isolate configuration settings for Marlin by 
// separating them into sections
//

#if SYSTEM_SECTION == INFO
  #undef  STRING_CONFIG_H_AUTHOR
//  #define STRING_CONFIG_H_AUTHOR "(GB3 V4.x.x - Marlin 1.1.8)"
  
  #define STRING_CONFIG_H_AUTHOR "(GB3, V4.x.x)" // Who made the changes.
  #define SHOW_BOOTSCREEN

//#define STRING_SPLASH_LINE1 SHORT_BUILD_VERSION // will be shown during bootup in line 1
//#define STRING_SPLASH_LINE2 WEBSITE_URL         // will be shown during bootup in line 2
  #define SHOW_CUSTOM_BOOTSCREEN
#endif

  #define VIKI2
  
#if SYSTEM_SECTION == SUBSECTION(MACHINE, 1)
  #undef  MOTHERBOARD
  #define MOTHERBOARD BOARD_AZTEEG_X3_PRO
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 3)
  #undef  TEMP_HYSTERESIS

  #define TEMP_HYSTERESIS 4       // (degC) range of +/- temperatures considered "close" to the target one
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 1)
  #undef  EXTRUDERS
  #define EXTRUDERS 2
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 1)
  #undef  TEMP_SENSOR_0
  #undef  TEMP_SENSOR_1
  #undef  TEMP_SENSOR_2
  #undef  TEMP_SENSOR_3
  #undef  TEMP_SENSOR_4
  #undef  TEMP_SENSOR_BED

  #define TEMP_SENSOR_0   -1
  #define TEMP_SENSOR_1   -1
  #define TEMP_SENSOR_2    0
  #define TEMP_SENSOR_3    0
  #define TEMP_SENSOR_4    0
  #define TEMP_SENSOR_BED -4

  #undef  TEMP_RESIDENCY_TIME
  #define TEMP_RESIDENCY_TIME 5   // (seconds)

  #undef  BED_MINTEMP
  #define BED_MINTEMP      5

  #undef  HEATER_0_MAXTEMP
  #undef  HEATER_1_MAXTEMP
  #undef  HEATER_2_MAXTEMP
  #undef  HEATER_3_MAXTEMP
  #undef  HEATER_4_MAXTEMP
  #undef  BED_MAXTEMP

  #define HEATER_0_MAXTEMP 400
  #define HEATER_1_MAXTEMP 400
  #define HEATER_2_MAXTEMP 255
  #define HEATER_3_MAXTEMP 255
  #define HEATER_4_MAXTEMP 255
  #define BED_MAXTEMP      150

  #if ENABLED(PIDTEMP)
    #undef  DEFAULT_Kp
    #undef  DEFAULT_Ki
    #undef  DEFAULT_Kd

    // Gigabot 3 (24 volts) 
    #define DEFAULT_Kp 32.0
    #define DEFAULT_Ki  4.0
    #define DEFAULT_Kd 74.0
  #endif
//#define PIDTEMPBED
  #if ENABLED(PIDTEMPBED)
    #undef  DEFAULT_bedKp
    #undef  DEFAULT_bedKi
    #undef  DEFAULT_bedKd

    #define DEFAULT_bedKp 10.00
    #define DEFAULT_bedKi 0.023
    #define DEFAULT_bedKd 304.50
  #endif
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 1)
  #undef  USE_XMIN_PLUG
  #undef  USE_YMIN_PLUG
  #undef  USE_ZMIN_PLUG
  #undef  USE_XMAX_PLUG
  #undef  USE_YMAX_PLUG
  #undef  USE_ZMAX_PLUG

  #define USE_XMIN_PLUG true
  #define USE_YMIN_PLUG true
  #define USE_ZMIN_PLUG true
  #define USE_XMAX_PLUG false
  #define USE_YMAX_PLUG true
  #define USE_ZMAX_PLUG false

  #undef  X_MIN_ENDSTOP_INVERTING
  #undef  Y_MIN_ENDSTOP_INVERTING
  #undef  Z_MIN_ENDSTOP_INVERTING
  #undef  X_MAX_ENDSTOP_INVERTING
  #undef  Y_MAX_ENDSTOP_INVERTING
  #undef  Z_MAX_ENDSTOP_INVERTING
  #undef  Z_MIN_ENDSTOP_INVERTING

  #define X_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Y_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Z_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define X_MAX_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Y_MAX_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Z_MAX_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Z_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 2)
  #define Y_HOME_DIR -1
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 3)
  #define MANUAL_X_HOME_POS 0
  #define MANUAL_Y_HOME_POS 0
  #define MANUAL_Z_HOME_POS 0
//#define MANUAL_Y_HOME_POS Y_MAX_POS
#endif

#if SYSTEM_SECTION == SUBSECTION(HOMING, 4)
  #define HOMING_BUMP_DIVISOR { 5, 5, 5 }  // Re-Bump Speed Divisor (Divides the Homing Feedrate)
#endif

#if SYSTEM_SECTION == SUBSECTION(MOTION, 1)
  #undef  DEFAULT_AXIS_STEPS_PER_UNIT
  #undef  DEFAULT_MAX_FEEDRATE
  #undef  DEFAULT_MAX_ACCELERATION
  #undef  DEFAULT_ACCELERATION
  #undef  DEFAULT_RETRACT_ACCELERATION
  #undef  DEFAULT_XJERK
  #undef  DEFAULT_YJERK

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 118.52, 118.52, 4031.5, 1000 }
  #define DEFAULT_MAX_FEEDRATE          { 150, 150, 4, 60 }
  #define DEFAULT_MAX_ACCELERATION      { 3000, 3000, 100, 1000 }
  #define DEFAULT_ACCELERATION          2000    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1500  
  #define DEFAULT_XJERK                 15.0
  #define DEFAULT_YJERK                 15.0
#endif

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 4)
  #undef  INVERT_X_DIR
  #undef  INVERT_Y_DIR

  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
#endif

#define ADVANCED_PAUSE_FEATURE
#define NOZZLE_PARK_FEATURE

#if SYSTEM_SECTION == SUBSECTION(MACHINE, 5)
  #undef  X_BED_SIZE
  #undef  Y_BED_SIZE
  #undef  Z_MAX_POS

  #define X_BED_SIZE   590
  #define Y_BED_SIZE   610
  #define Z_MAX_POS    609

  #define ADVANCED_PAUSE_FEATURE
  #define NOZZLE_PARK_FEATURE
  #define FILAMENT_RUNOUT_SENSOR
  
  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    #define FIL_RUNOUT_INVERTING      true  // set to true to invert the logic of the sensor.
    #define FIL_RUNOUT_PULLUP               // Uncomment to use internal pullup for filament runout pins if the sensor is defined.
    #define FILAMENT_RUNOUT_SCRIPT    "M600"
  #endif
#endif

#undef  FIL_RUNOUT_PIN
#define FIL_RUNOUT_PIN 47

#undef  FIL_RUNOUT2_PIN
#define FIL_RUNOUT2_PIN 12

#undef  NUM_RUNOUT_SENSORS
#define NUM_RUNOUT_SENSORS  2

//#define PINS_DEBUGGING

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 1)
  #undef  EEPROM_SETTINGS
 
  #define EEPROM_SETTINGS
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 2)
  #undef  TEMP_STAT_LEDS
 
  #define TEMP_STAT_LEDS
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 2)
  #undef  PREHEAT_1_TEMP_HOTEND
  #undef  PREHEAT_1_TEMP_BED
  #undef  PREHEAT_2_TEMP_HOTEND
  #undef  PREHEAT_2_TEMP_BED

  #define PREHEAT_1_TEMP_HOTEND 160
  #define PREHEAT_1_TEMP_BED     60
  #define PREHEAT_2_TEMP_HOTEND 220
  #define PREHEAT_2_TEMP_BED     95
#endif

#if SYSTEM_SECTION == SUBSECTION(LCD, 1)
  #undef  SDSUPPORT
  #undef  SPI_SPEED
  #undef  SD_CHECK_AND_RETRY
  #undef  VIKI2

  #define SDSUPPORT
  #define SPI_SPEED SPI_QUARTER_SPEED
  #define SD_CHECK_AND_RETRY
  #define VIKI2
#endif

#define ULTRA_LCD  //general LCD support, also 16x2
    #define DOGLCD  // Support for SPI LCD 128x64 (Controller ST7565R graphic Display Family)
    #define ULTIMAKERCONTROLLER 
      #define LCD_CONTRAST_MIN       0
      #define LCD_CONTRAST_MAX     75//255
      #define DEFAULT_LCD_CONTRAST 35//140

#if SYSTEM_SECTION == SUBSECTION(LCD, 2)
  #if ENABLED(ULTIPANEL)
 //   #undef  MANUAL_FEEDRATE
 //   #define MANUAL_FEEDRATE {10*60, 10*60, 4*60, 60} // Feedrates for manual moves along X, Y, Z, E from panel
  
    #define ULTIPANEL_FEEDMULTIPLY  // Comment to disable setting feedrate multiplier via encoder
  #endif
#endif

#if SYSTEM_SECTION == AZTEEG_X3_PRO
  #undef  HEATER_BED_PIN
  #undef  TEMP_BED_PIN
  #undef  FAN_PIN

  #undef  TEMP_0_PIN
  #undef  TEMP_1_PIN

  #define HEATER_BED_PIN      8
  #define FAN_PIN             17 // Part Cooling System

  #define TEMP_0_PIN          4   // Analog Input
  #define TEMP_1_PIN          5   // Analog Input
  #define TEMP_BED_PIN        3   // Analog Input

/*
#define VIKI2 true 

#if ENABLED(VIKI2) || ENABLED(miniVIKI)
  #undef SD_DETECT_PIN
  #define SD_DETECT_PIN    49   // For easy adapter board
  #undef BEEPER_PIN
  #define  BEEPER_PIN      12   // 33 isn't physically available to the LCD display
#else
  #define STAT_LED_RED_PIN 32
  #define STAT_LED_BLUE_PIN 35
#endif
*/
#endif

#if SYSTEM_SECTION == SUBSECTION(TEMPERATURE, 4)
  #if ENABLED(THERMAL_PROTECTION_HOTENDS)
    #undef THERMAL_PROTECTION_PERIOD
    #undef THERMAL_PROTECTION_HYSTERESIS
    
    #define THERMAL_PROTECTION_PERIOD 60          // Seconds
    #define THERMAL_PROTECTION_HYSTERESIS 15      // Degrees Celsius
  #endif

  #if ENABLED(THERMAL_PROTECTION_BED)
    #undef THERMAL_PROTECTION_BED_PERIOD
    #undef THERMAL_PROTECTION_BED_HYSTERESIS
    
    #define THERMAL_PROTECTION_BED_PERIOD 60      // Seconds
    #define THERMAL_PROTECTION_BED_HYSTERESIS 15  // Degrees Celsius
  #endif
  
  #undef  TEMP_SENSOR_AD595_GAIN
  #define TEMP_SENSOR_AD595_GAIN 2.0

  #define TEMP_SENSOR_AD8495_OFFSET -250

  #undef  TEMP_SENSOR_AD8495_GAIN 
  #define TEMP_SENSOR_AD8495_GAIN 2.0 

  #define AD8495_FORMULA (5.0 * 100.0) / 1024.0 / (OVERSAMPLENR) * (TEMP_SENSOR_AD8495_GAIN) + TEMP_SENSOR_AD8495_OFFSET
#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRUDER, 5)
  #undef  E0_AUTO_FAN_PIN 
  #undef  E1_AUTO_FAN_PIN 
  #define E0_AUTO_FAN_PIN 16
  #define E1_AUTO_FAN_PIN 16
#endif

//#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 3)
  #undef  Y_DUAL_STEPPER_DRIVERS
  #undef  Z_DUAL_STEPPER_DRIVERS

  #define Y_DUAL_STEPPER_DRIVERS true
  #define Z_DUAL_STEPPER_DRIVERS true
  #define Y_DUAL_ENDSTOPS        true
  #define Y2_USE_ENDSTOP         true

  #define Y_DUAL_STEPPER_DRIVERS
  #if ENABLED(Y_DUAL_STEPPER_DRIVERS)
    #define INVERT_Y2_VS_Y_DIR true   // Set 'true' if Y motors should rotate in opposite directions
    #define Y_DUAL_ENDSTOPS
    #if ENABLED(Y_DUAL_ENDSTOPS)
      #define Y2_USE_ENDSTOP _YMAX_
      #define Y_DUAL_ENDSTOPS_ADJUSTMENT  0
    #endif
  #endif
//#endif

//#if SYSTEM_SECTION == PINS

  #define Y_STEP_PIN         60
  #define Y_DIR_PIN          61
  #define Y_ENABLE_PIN       56
  #define Y_CS_PIN           49

  #define Y2_STEP_PIN        46
  #define Y2_DIR_PIN         48
  #define Y2_ENABLE_PIN      62

  #undef  Z_STEP_PIN
  #undef  Z_DIR_PIN
  #undef  Z_ENABLE_PIN

  #define Z_STEP_PIN         26
  #define Z_DIR_PIN          28
  #define Z_ENABLE_PIN       24

  #undef  Z2_STEP_PIN
  #undef  Z2_DIR_PIN
  #undef  Z2_ENABLE_PIN

  #define Z2_STEP_PIN        36
  #define Z2_DIR_PIN         34
  #define Z2_ENABLE_PIN      30

  #undef  E0_STEP_PIN
  #undef  E0_DIR_PIN
  #undef  E0_ENABLE_PIN

  #define E0_STEP_PIN        23 
  #define E0_DIR_PIN         25
  #define E0_ENABLE_PIN      40

  #undef  E1_STEP_PIN
  #undef  E1_DIR_PIN
  #undef  E1_ENABLE_PIN

  #define E1_STEP_PIN        43
  #define E1_DIR_PIN         37
  #define E1_ENABLE_PIN      42


  #define X_MAX_PIN         -1
  #define Y_MAX_PIN         63

  #undef  BEEPER_PIN
  #define BEEPER_PIN        33         
  
  // Pins for DOGM SPI LCD Support
  #define DOGLCD_A0         44
  #define DOGLCD_CS         45
  #define LCD_SCREEN_ROT_180
        
  // The encoder and click button
  #define BTN_EN1           22
  #define BTN_EN2           7
  #define BTN_ENC           39  //the click switch

  #undef  SD_DETECT_PIN
  #define SD_DETECT_PIN     -1

  #undef  STAT_LED_RED_PIN
  #undef  STAT_LED_BLUE_PIN
  
  #define STAT_LED_RED_PIN  32
  #define STAT_LED_BLUE_PIN 35

//#endif

#if SYSTEM_SECTION == SUBSECTION(EXTRAS, 4)
  #undef  DIGIPOT_I2C_NUM_CHANNELS
  #define DIGIPOT_I2C_NUM_CHANNELS    7 // AZTEEG_X3_PRO: 8 (Not sure why this was set to 7 at some point)
  #undef  DIGIPOT_I2C_MOTOR_CURRENTS
  #define DIGIPOT_I2C_MOTOR_CURRENTS  { 2.0, 2.0, 2.0, 1.68, 1.68, 1.8, 1.8 }  //  AZTEEG_X3_PRO
#endif


#if SYSTEM_SECTION == SUBSECTION(HIDDEN, 1)
  #undef  BLOCK_BUFFER_SIZE
  #define BLOCK_BUFFER_SIZE 32
#endif


#if SYSTEM_SECTION == SUBSECTION(SERIA_BUFL, 1)
  #undef  BUFSIZE
  #define BUFSIZE 8
#endif

