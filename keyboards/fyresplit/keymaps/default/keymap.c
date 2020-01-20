/* Copyright 2019 albluu
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
#include QMK_KEYBOARD_H

// Defines the keycodes used by our macros in process_record_user
//enum custom_keycodes {
//};

// Layer Names
#define _BASE 0
#define _FN 15
#define _FEAT 14
#define _CADET 13
#define _SWAP 12
#define _SWAPK 11
#define _GAME 10


// Keynames
#define B_FN MO(_FN)
#define B_FEAT MO(_FEAT)
#define T_CDT TG(_CADET)
#define T_GAME TG(_GAME)
#define T_SWAP TG(_SWAP)
#define B_SSPC LT(_SWAPK, KC_SPC)
#define ALT_TAB LALT(KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_ortho( /* Base */
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,  \
    KC_PAUS, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, \
    ALT_TAB, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_UP,   KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_SCLN, KC_ENT,  KC_PGUP, \
    KC_DOWN, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN, \
    B_FEAT,  KC_LCTL, KC_LGUI, KC_LALT, B_FN,    KC_SPC,                    KC_SPC,  B_FN,    KC_HOME, KC_END,  KC_LEFT, KC_DOWN, KC_RGHT  \
  ),
  [_GAME] = LAYOUT_ortho( /* Game mode Layer */
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_PGUP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_PGDN, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_LALT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, KC_NO,   B_FN,    KC_LALT, _______,                   _______, _______, _______, _______, _______, _______, _______  \
  ),
  [_SWAP] = LAYOUT_ortho( /* Swap Hands Feature Toggle Layer */
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_RSPC, _______, _______, \
    _______, _______, _______, _______, _______, B_SSPC ,                   B_SSPC , _______, _______, _______, _______, _______, _______  \
  ),
  [_SWAPK] = LAYOUT_ortho( /* Swap Hands Feature Key Layer */
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, KC_BSPC, KC_0,    KC_9,    KC_8,    KC_7,    KC_6,    KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    _______, _______, _______, \
    _______, _______, KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,    KC_T,    KC_R,    KC_E,    KC_W,    KC_Q,    _______, _______, _______, \
    _______, KC_ENT,  KC_QUOT, KC_L,    KC_K,    KC_J,    KC_H,    KC_G,    KC_F,    KC_D,    KC_S,    KC_A,    _______, _______, _______, \
    _______, KC_RSFT, KC_SLSH, KC_DOT,  KC_COMM, KC_M,    KC_N,    KC_B,    KC_V,    KC_C,    KC_X,    KC_Z,    KC_LSFT, _______, _______, \
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______  \
  ),
  [_CADET] = LAYOUT_ortho( /* Space Cadet Feature Layer */
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, KC_LSPO, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_RSPC, _______, _______, \
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______  \
  ),
  [_FEAT] = LAYOUT_ortho( /* Feature Toggle Layer */
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, T_GAME,  T_CDT  , T_SWAP , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______  \
  ),
  [_FN] = LAYOUT_ortho( /* Function Layer */
    _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, KC_UP  , _______, _______, _______, _______, _______, KC_UP,   _______, _______, _______, _______, _______, \
    _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, KC_RCTL, KC_RGUI, KC_RALT, _______, _______,                   _______, _______, _______, _______, _______, _______, _______  \
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
