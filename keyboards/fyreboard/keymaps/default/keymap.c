/* Copyright 2019 fyrefawkes
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Base, SDVX/DJMAX */
      KC_ESC, MO(14), KC_ENTER, \
      KC_S, KC_D, KC_F, KC_J, KC_K, KC_L, \
      KC_PGUP, KC_F2, KC_C, KC_N, KC_TAB, KC_PGDN, \
      KC_LEFT, KC_RIGHT, KC_UP, KC_DOWN \
  ),
  [1] = LAYOUT( /* Osu!Standard/Mania */
      KC_TRNS, KC_TRNS, KC_TRNS, \
      KC_S, KC_D, KC_F, KC_J, KC_K, KC_L, \
      KC_R, KC_F2, KC_SPACE, KC_SPACE, KC_DOT, KC_SLASH, \
      KC_LEFT, KC_RIGHT, KC_UP, KC_DOWN \
  ),
  [2] = LAYOUT( /* Function Keys */
      KC_TRNS, KC_TRNS, KC_TRNS, \
      KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, \
      KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, \
      KC_LEFT, KC_RIGHT, KC_UP, KC_DOWN \
  ),
  [3] = LAYOUT( /* Programmer Mode */
      KC_TRNS, KC_TRNS, KC_TRNS, \
      KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, \
      KC_INS, KC_DEL, KC_HOME, KC_END, KC_PGUP, KC_PGDN, \
      KC_LEFT, KC_RIGHT, KC_UP, KC_DOWN \
  ),
  [14] = LAYOUT( /* Mode Switch */
      KC_NO, KC_TRNS,  KC_NO, \
      TO(0), TO(1), TO(2), TO(3), KC_NO, KC_NO, \
      MO(15), KC_MUTE, KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, \
      KC_NO, KC_NO, KC_VOLD, KC_VOLU \
  ),
  [15] = LAYOUT( /* Reset Layer */
      KC_NO, KC_TRNS,  KC_NO, \
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
      KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, \
      KC_NO, KC_NO, KC_NO, KC_NO \
  )
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(MS_LEFT, MS_RGHT), ENCODER_CCW_CW(MS_DOWN, MS_UP) },
    [1] = { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN) },
    [2] = { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN) },
    [3] = { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN) },
    [14] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [15] = { ENCODER_CCW_CW(KC_NO, KC_NO), ENCODER_CCW_CW(KC_NO, KC_NO) }
};
#endif // ENCODER_MAP_ENABLE