#include QMK_KEYBOARD_H

// References
// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
// https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md#example-process_record_user-implementation
// https://github.com/qmk/qmk_firmware/blob/master/quantum/send_string_keycodes.h
// https://docs.qmk.fm/#/feature_macros?id=tap-down-and-up

// Layers
#define _QWERT 0
#define _GAME 1
#define _GF 2
#define _QF 3


// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Keycode combo aliases
#define L_QWERT DF(_QWERT) // Change to the qwerty layer
#define L_GAME DF(_GAME) // Change to the qwerty game layer

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
	ZZ_CTRL = SAFE_RANGE,
	ZZ_UP,
	ZZ_DOWN
};

// Layout template
// The positions with XXXXXXX don't actually exist in the matrix on the PCB.
//                                             LEFT SIDE                                                                                              RIGHT SIDE
//		  c11      c10      c9       c8       c7       c6       c5       c4       c3       c2       c1            c1       c2       c3       c4       c5       c6       c7       c8       c9       c10      c11
// r1	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// r2	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// r3	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// r4	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// r5	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, _______, _______, _______,      _______, _______, _______, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//                                                                                          <-- Left Half   |   Right Half -->

[_QWERT] = LAYOUT( \
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,		KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,		KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_PGUP,		KC_HOME, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_PGDN,		KC_END,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCTL, KC_UP,   KC_DOWN, XXXXXXX, KC_LALT, KC_SPC,  KC_LGUI,		MO(_QF), KC_SPC,  KC_ENT,  XXXXXXX, KC_LEFT, KC_RGHT, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

[_GAME] = LAYOUT( \
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, _______, _______, KC_KP_0,		MO(_GF), _______, _______, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

[_GF] = LAYOUT( \
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, _______, _______, L_QWERT,		MO(_GF), _______, _______, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

[_QF] = LAYOUT( \
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,		_______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, KC_HOME, _______, KC_END,  _______, _______,		_______, _______, _______, _______, _______, KC_PSCR, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, KC_LEFT, KC_UP,   KC_RGHT, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, KC_DOWN, _______, _______, _______,		_______, _______, KC_MUTE, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_VOLU, KC_VOLD, XXXXXXX, _______, KC_CAPS, L_GAME,		MO(_QF), _______, _______, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

};
