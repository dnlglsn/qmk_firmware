#pragma once

#include "config_common.h"

// Information for USB device
#define VENDOR_ID       0xDEAD
#define PRODUCT_ID      0xBEEF
#define DEVICE_VER      0x0001
#define MANUFACTURER    /u/dnlglsn
#define PRODUCT         Void*
#define DESCRIPTION     Split 60 to 90 percent keyboard with customizable controller daughter board

// A good debouncing delay
#define DEBOUNCING_DELAY 5

// Matrix sizes - rows are doubled-up due to split keyboard
#define MATRIX_ROWS 10
#define MATRIX_COLS 11

// Pins for rows and columns
#define MATRIX_ROW_PINS { F7, F6, F5, F4, F1 }
#define MATRIX_COL_PINS { F0, B1, B2, B3, D2, D3, C7, D6, B7, B6, B5 }

// Split keyboard configuration
#define USE_I2C	// SCL = D0, SDA = D1
#define MASTER_LEFT
