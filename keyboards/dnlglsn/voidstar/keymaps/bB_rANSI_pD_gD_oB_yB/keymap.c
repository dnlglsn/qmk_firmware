#include QMK_KEYBOARD_H

#define _FULL 0
#define _MIN 1
#define _FN 2

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Keycode combo aliases
#define CTRL_F4 C(KC_F4)
#define ALT_F4  A(KC_F4)
#define ALT_TAB A(KC_TAB)
#define L_MIN DF(_MIN)
#define L_FULL DF(_FULL)

// Layout template - don't forget the backslashes at the end of each line! (They can't be in comments so I had to take them out.)
// The positions with XXXXXXX don't actually exist in the matrix on the PCB.
// _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, _______, _______,
// _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX,		_______, _______, _______, _______, _______, _______, XXXXXXX, _______, XXXXXXX, _______,
// _______, _______, _______, XXXXXXX, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX,		XXXXXXX, _______, XXXXXXX, _______, _______, _______, _______, _______, _______, _______

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//                                                                          <-- Left Half	|	Right Half -->

[_FULL] = LAYOUT( \
KC_A,    KC_B,    KC_C,    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,  		KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SLCK, KC_PAUS, \
KC_D,    KC_E,    KC_F,    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,   		KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  KC_HOME, \
KC_G,    KC_H,    KC_I,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   		KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, XXXXXXX, KC_BSLS, KC_PGUP, \
KC_J,    KC_K,    KC_L,    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX,		KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, XXXXXXX, KC_ENT,  XXXXXXX, KC_PGDN, \
KC_M,    KC_N,    KC_O,    XXXXXXX, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   		KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,  KC_END,  \
L_MIN,   KC_Q,    KC_R,    KC_LCTL, KC_LGUI, KC_LALT, MO(_FN), KC_SPC,  XXXXXXX, XXXXXXX,		XXXXXXX, KC_SPC,  XXXXXXX, MO(_FN), KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_APP   \
),

[_FN] = LAYOUT( \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
_______, _______, _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,  		KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, _______, \
_______, _______, _______, ALT_TAB, ALT_F4,  KC_UP,   _______, _______, _______, _______,		_______, _______, KC_PGUP, _______, KC_PSCR, CTRL_F4, ALT_F4,  XXXXXXX, KC_F5,   _______, \
_______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, XXXXXXX,		_______, KC_HOME, KC_PGDN, KC_END,  _______, _______, XXXXXXX, _______, XXXXXXX, _______, \
_______, _______, _______, XXXXXXX, _______, _______, _______, KC_CAPS, _______, _______,		_______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX,		XXXXXXX, _______, XXXXXXX, _______, _______, _______, KC_HOME, KC_PGDN, KC_END,  _______  \
),

[_MIN] = LAYOUT( \
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
XXXXXXX, XXXXXXX, KC_MUTE, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,   		KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  XXXXXXX, \
XXXXXXX, XXXXXXX, KC_VOLU, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   		KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, XXXXXXX, KC_BSLS, XXXXXXX, \
XXXXXXX, XXXXXXX, KC_VOLD, KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX,		KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, XXXXXXX, KC_ENT,  XXXXXXX, XXXXXXX, \
XXXXXXX, XXXXXXX, KC_MPLY, XXXXXXX, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   		KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,  XXXXXXX,  \
L_FULL,  XXXXXXX, KC_APP,  KC_LCTL, KC_LGUI, KC_LALT, MO(_FN), KC_SPC,  XXXXXXX, XXXXXXX,		XXXXXXX, KC_SPC,  XXXXXXX, MO(_FN), KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX   \
),

};
