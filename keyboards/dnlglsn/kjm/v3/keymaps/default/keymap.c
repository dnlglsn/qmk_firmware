#include QMK_KEYBOARD_H

// References
// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
// https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md#example-process_record_user-implementation
// https://github.com/qmk/qmk_firmware/blob/master/quantum/send_string_keycodes.h
// https://docs.qmk.fm/#/feature_macros?id=tap-down-and-up

// Layers
#define _MAIN 0
#define _FN 1

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// The positions with XXXXXXX don't actually exist in the matrix on the PCB.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//                                                                                  <-- Left Half   |   Right Half -->

[_MAIN] = LAYOUT( \
KC_F1,   KC_F2,   KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    XXXXXXX, XXXXXXX,		KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,  KC_HOME, XXXXXXX, XXXXXXX,
KC_F3,   KC_F4,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    XXXXXXX, XXXXXXX, XXXXXXX,		KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, KC_END,  XXXXXXX, XXXXXXX,
KC_F5,   KC_F6,   KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX, XXXXXXX, XXXXXXX,		KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, XXXXXXX, KC_ENT,  KC_PGUP, XXXXXXX, XXXXXXX,
KC_F7,   KC_F8,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, XXXXXXX,		KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN, XXXXXXX, XXXXXXX,
KC_F9,   KC_F10,  KC_LCTL, KC_LGUI, MO(_FN), XXXXXXX, KC_SPC,  KC_LALT, XXXXXXX, XXXXXXX, XXXXXXX,		XXXXXXX, KC_SPC,  XXXXXXX, MO(_FN), KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX
),

[_FN] = LAYOUT( \
KC_VOLD, KC_VOLU, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX,		_______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX,
KC_MUTE, KC_MUTE, _______, KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______, XXXXXXX, XXXXXXX, XXXXXXX,		_______, _______, _______, _______, KC_PSCR, _______, _______, _______, _______, XXXXXXX, XXXXXXX,
_______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, XXXXXXX, XXXXXXX, XXXXXXX,		_______, _______, _______, _______, _______, _______, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX,
_______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX,		_______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, XXXXXXX, XXXXXXX,
_______, _______, _______, _______, MO(_FN), XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX,		XXXXXXX, _______, XXXXXXX, MO(_FN), _______, _______, KC_HOME, KC_PGDN, KC_END,  XXXXXXX, XXXXXXX
),

};
