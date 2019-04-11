#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _FN 1

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_DEFAULT] = LAYOUT( \
KC_A,    KC_B,    KC_C,    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,  		KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SLCK, KC_PAUS, \
KC_D,    KC_E,    KC_F,    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,   		KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  KC_HOME, \
KC_G,    KC_H,    KC_I,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   		KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, XXXXXXX, KC_BSLS, KC_PGUP, \
KC_J,    KC_K,    KC_L,    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX,		KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, XXXXXXX, KC_ENT,  XXXXXXX, KC_PGDN, \
KC_M,    KC_N,    KC_O,    XXXXXXX, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   		KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,  KC_END,  \
KC_P,    KC_Q,    KC_R,    KC_LCTL, KC_LGUI, KC_LALT, MO(_FN), KC_SPC,  XXXXXXX, XXXXXXX,		XXXXXXX, KC_SPC,  XXXXXXX, MO(_FN), KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_APP   \
),

[_FN] = LAYOUT( \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX,		_______, _______, _______, _______, _______, _______, XXXXXXX, _______, XXXXXXX, _______, \
_______, _______, _______, XXXXXXX, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX,		XXXXXXX, _______, XXXXXXX, _______, _______, _______, _______, _______, _______, _______  \
),
};
