#include QMK_KEYBOARD_H

// References
// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
// https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md#example-process_record_user-implementation
// https://github.com/qmk/qmk_firmware/blob/master/quantum/send_string_keycodes.h
// https://docs.qmk.fm/#/feature_macros?id=tap-down-and-up

// Layers
#define _MAIN 0
#define _GAME 1
#define _FN 2
#define _FG 3

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Keycode combo aliases
#define L_MAIN DF(_MAIN) // Change to the main layer
#define L_GAME DF(_GAME) // Change to the game layer
#define A_SPC LALT_T(KC_SPC) // Tap for space, hold for alt

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
	ZZ_CTRL = SAFE_RANGE,
	ZZ_UP,
	ZZ_DOWN,
};

// Layout template 
// The positions with XXXXXXX don't actually exist in the matrix on the PCB.
// _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, _______, _______,
// _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX,		_______, _______, _______, _______, _______, _______, XXXXXXX, _______, XXXXXXX, _______,
// _______, _______, _______, XXXXXXX, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// _______, _______, _______, _______, _______, _______, XXXXXXX, _______, XXXXXXX, XXXXXXX,		XXXXXXX, _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, _______, _______

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//                                                                          <-- Left Half	|	Right Half -->

[_MAIN] = LAYOUT( \
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,   		KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, XXXXXXX, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   		KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, XXXXXXX, KC_BSLS, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX,		KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, XXXXXXX, KC_ENT,  XXXXXXX, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   		KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, ZZ_UP,   KC_DEL,  XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, KC_LCTL, KC_LGUI, MO(_FN), XXXXXXX, A_SPC,   XXXXXXX, XXXXXXX,		XXXXXXX, KC_SPC,  XXXXXXX, MO(_FN), ZZ_CTRL, XXXXXXX, KC_LEFT, ZZ_DOWN, KC_RGHT, XXXXXXX 
),

// For games, disable GUI key and make the left spacebar normal so I can hold it down.
[_GAME] = LAYOUT( \
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, _______, _______,
_______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX,		_______, _______, _______, _______, _______, _______, XXXXXXX, _______, XXXXXXX, _______,
_______, _______, _______, XXXXXXX, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______, _______, _______, XXXXXXX, MO(_FG), XXXXXXX, KC_SPC,  XXXXXXX, XXXXXXX,		XXXXXXX, _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, _______, _______
),

[_FN] = LAYOUT( \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______, _______, KC_MUTE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,  		KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, _______,
_______, _______, _______, KC_VOLU, KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______, _______,		_______, _______, KC_PGUP, _______, KC_PSCR, _______, _______, XXXXXXX, KC_F5,   _______,
_______, _______, _______, KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, XXXXXXX,		_______, KC_HOME, KC_PGDN, KC_END,  _______, _______, XXXXXXX, L_GAME,  XXXXXXX, _______,
_______, _______, _______, XXXXXXX, _______, _______, _______, KC_CAPS, _______, _______,		_______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, _______,
_______, _______, _______, _______, KC_APP,  _______, _______, KC_DEL,  XXXXXXX, XXXXXXX,		XXXXXXX, KC_BSPC, XXXXXXX, _______, _______, _______, KC_HOME, KC_PGDN, KC_END,  _______ 
),

[_FG] = LAYOUT( \
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, XXXXXXX, _______, _______,
_______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX,		_______, _______, _______, _______, _______, _______, XXXXXXX, L_MAIN,  XXXXXXX, _______,
_______, _______, _______, XXXXXXX, _______, _______, _______, _______, _______, _______,		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______, _______, _______, _______, _______, XXXXXXX, _______, XXXXXXX, XXXXXXX,		XXXXXXX, _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, _______, _______
),

};

// MACROS DOWN BELOW

bool isCtrlDown = false;
bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
	switch (keycode)
	{

		// So I can use RCTRL + Up/Down to cycle between tabs in Chrome.
		case ZZ_CTRL:
			if (record->event.pressed)
			{
				isCtrlDown = true;
				SEND_STRING(SS_DOWN(X_RCTRL));
			}
			else
			{
				isCtrlDown = false;
				SEND_STRING(SS_UP(X_RCTRL));
			}
		break;

		case ZZ_UP:
			if (record->event.pressed)
			{
				if (isCtrlDown)
					SEND_STRING(SS_DOWN(X_PGUP));
				else
					SEND_STRING(SS_DOWN(X_UP));
			}
			else
			{
				if (isCtrlDown)
					SEND_STRING(SS_UP(X_PGUP));
				else
					SEND_STRING(SS_UP(X_UP));
			}
		break;

		case ZZ_DOWN:
			if (record->event.pressed)
			{
				if (isCtrlDown)
					SEND_STRING(SS_DOWN(X_PGDOWN));
				else
					SEND_STRING(SS_DOWN(X_DOWN));
			}
			else
			{
				if (isCtrlDown)
					SEND_STRING(SS_UP(X_PGDOWN));
				else
					SEND_STRING(SS_UP(X_DOWN));
			}
		break;
	}
	return true;
}
