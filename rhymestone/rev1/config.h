/*
Copyright 2020 marksard

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { F4, F5, F6, F7 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D2  // or D1, D2, D3, E6

// #define BACKLIGHT_PIN B7
// #define BACKLIGHT_BREATHING
// #define BACKLIGHT_LEVELS 3

#define RGB_DI_PIN D3

#ifdef RGBLIGHT_ENABLE
// #ifdef RGB_DI_PIN
  #define RGBLED_NUM 40
  #define RGBLED_SPLIT {20, 20}
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_LIMIT_VAL 150 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
  #define RGBLIGHT_MODE_STATIC_LIGHT
  #define RGBLIGHT_MODE_STATIC_GRADIENT
  #undef RGBLIGHT_ANIMATIONS
  #undef RGBLIGHT_EFFECT_BREATHING
  #undef RGBLIGHT_EFFECT_RAINBOW_MOOD
  #undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
  #undef RGBLIGHT_EFFECT_SNAKE
  #undef RGBLIGHT_EFFECT_KNIGHT
  #undef RGBLIGHT_EFFECT_CHRISTMAS
  #undef RGBLIGHT_EFFECT_RGB_TEST
  #undef RGBLIGHT_EFFECT_ALTERNATING
  #undef RGBLIGHT_EFFECT_TWINKLE
/*== all animations enable ==*/
//   #define RGBLIGHT_ANIMATIONS
/*== or choose animations ==*/
/*== customize breathing effect ==*/
  /*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
//  #define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
//  /*==== use exp() and sin() ====*/
//  #define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
//  #define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
