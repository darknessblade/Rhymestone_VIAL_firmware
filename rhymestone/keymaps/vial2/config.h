/* Copyright 2020 marksard
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
// keyboad_ID
#define VIAL_KEYBOARD_UID {0x80, 0x64, 0x88, 0xF7, 0x43, 0x1F, 0xC8, 0x7A}
// Secure Keys
#define VIAL_UNLOCK_COMBO_ROWS { 0, 3 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 4 }

// place overrides here
#define TAPPING_TERM 190
#define IGNORE_MOD_TAP_INTERRUPT

#define TAPPING_LAYER_TERM 140 // Custom LT Tapping term
//#define TAPPING_TERM_PER_KEY

#ifdef MOUSEKEY_ENABLE
//  #undef MOUSEKEY_INTERVAL
//  #define MOUSEKEY_INTERVAL 1

//  #undef MOUSEKEY_TIME_TO_MAX
//  #define MOUSEKEY_TIME_TO_MAX 150

//  #undef MOUSEKEY_MAX_SPEED
//  #define MOUSEKEY_MAX_SPEED 3

//  #undef MOUSEKEY_MOVE_DELTA
//  #define MOUSEKEY_MOVE_DELTA 4

//  #undef MOUSEKEY_DELAY
//  #define MOUSEKEY_DELAY 0
#endif

// place overrides here

// If you use the HashTwenty(alpha), please enable USE_HASHTWENTY
// #define USE_HASHTWENTY

// If you plug in the USB on the right side, please enable MASTER_RIGHT
// #define MASTER_RIGHT

#define OLED_FONT_H "keyboards/marksard/rhymestone/common/glcdfont.c"
