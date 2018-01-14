/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#ifndef REV1_CONFIG_H
#define REV1_CONFIG_H

#include "../config.h"

// USB Device descriptor parameters
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x3060
#define DEVICE_VER      0x0001
#define MANUFACTURER    dnlglsn
#define PRODUCT         Skyline v1
#define DESCRIPTION     A 5x8 Lego-compatible ortho split keyboard

// Key matrix size - rows are doubled since it's split.
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

/*
                     __
                 +--|  |--+
                 |=       |
tx0              |o      o| raw
rx1              |o      o| gnd => slv
gnd => slv       |o      o| rst
gnd => slv       |o      o| vcc => rng2
d1 = sda => rng1 |o  /\  o| f4 = col0
d0 = scl => tip  |o /  \ o| f5 = col2
d4 = col3        |o \  / o| f6 = col1
c6 = col4        |o  \/  o| f7 = row4
d7 = col5        |o      o| b1 = row3
e6 = col6        |o      o| b3 = row2
b4 = col7        |o      o| b2 = row1
b5 = PWM         |o      o| b6 = row0
                 +--------+
*/

// The diode direction
#define DIODE_DIRECTION ROW2COL

// Wiring of each half - Rows are reverse order due to diode direction
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { F4, F6, F5, D4, C6, D7, E6, B4 }

// Not sure what this does
#define CATERINA_BOOTLOADER

// Set 0 if debouncing isn't needed
#define DEBOUNCING_DELAY 5

// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
#define LOCKING_SUPPORT_ENABLE

// Locking resynchronize hack - Not sure what this does either
#define LOCKING_RESYNC_ENABLE

// Key combination for command
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

// ws2812 RGB LED - save for later
/*
#define RGB_DI_PIN B5
#define RGBLIGHT_TIMER
#define RGBLED_NUM 12    // Number of LEDs
#define ws2812_PORTREG  PORTB
#define ws2812_DDRREG   DDRB
*/

#endif
