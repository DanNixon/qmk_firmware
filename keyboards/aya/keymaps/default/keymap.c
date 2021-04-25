/* Copyright 2021 Dan Nixon
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

#define _LG_ESC LGUI_T(KC_ESC)
#define _RC_SPC RCTL_T(KC_SPC)
#define _RS_BSP RSFT_T(KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ,-----------------------------------------.                           .-----------------------------------------.
     * |     |  `  |  1  |  2  |  3  |  4  |  5  |                           |  6  |  7  |  8  |  9  |  0  |  -  |  =  |
     * |-----+-----+-----+-----+-----+-----+-----|                           |-----+-----+-----+-----+-----+-----+-----|
     * |     | RMB |  Q  |  W  |  E  |  R  |  T  |                           |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |
     * |-----+-----+-----+-----+-----+-----+-----+-----.               .-----+-----+-----+-----+-----+-----+-----+-----|
     * |     | LMB |  A  |  S  |  D  |  F  |  G  |     |               |     |  H  |  J  |  K  |  L  |  ;  |  '  |  #  |
     * |-----+-----+-----+-----+-----+-----+-----+-----+-----.   .-----+-----+-----+-----+-----+-----+-----+-----+-----|
     * |     |  \  |  Z  |  X  |  C  |  V  |  B  | Alt |     |   |     | Del |  N  |  M  |  ,  |  .  |  /  |     |     |
     * '-----------------------------+-----+-----+-----+-----|   +-----+-----+-----+-----+-----------------------------'
     *                               |Shift| Esc | Tab |Layer|   |     |Enter|Space|Bspce|   (tap)
     *                               |Shift| GUI | Tab |Layer|   |     |Enter| Ctrl|Shift|   (hold)
     *                               '-----------------------'   '-----------------------'
     */
    [0] = LAYOUT(
        _______, KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5,                                           KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL,
        _______, KC_BTN2, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T,                                           KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC,
        _______, KC_BTN1, KC_A   , KC_S   , KC_D   , KC_F   , KC_G,    _______,                      _______, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_NUHS,
        _______, KC_NUBS, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B,    KC_LALT, _______,    _______, KC_DEL , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, _______, _______,
                                                     KC_LSFT, _LG_ESC, KC_TAB , MO(1)  ,    _______, KC_ENT, _RC_SPC, _RS_BSP
    ),

    /*
     * ,-----------------------------------------.                           .-----------------------------------------.
     * |     |     | F1  | F2  | F3  | F4  | F5  |                           | F6  | F7  | F8  | F9  | F10 | F11 | F12 |
     * |-----+-----+-----+-----+-----+-----+-----|                           |-----+-----+-----+-----+-----+-----+-----|
     * |     |     |     |     |     |     |     |                           | Home|Pg Dn|Pg Up| End |     |     |     |
     * |-----+-----+-----+-----+-----+-----+-----+-----.               .-----+-----+-----+-----+-----+-----+-----+-----|
     * |     |     |     |     |     |     |     |     |               |     | Left| Down| Up  |Right|     |     |     |
     * |-----+-----+-----+-----+-----+-----+-----+-----+-----.   .-----+-----+-----+-----+-----+-----+-----+-----+-----|
     * |     |     |     |     |     |     |     |     |     |   |     |     |     |     |     |     |     |     |     |
     * '-----------------------------+-----+-----+-----+-----|   +-----+-----+-----+-----+-----------------------------'
     *                               |     |     |     |     |   |     |     |     |     |
     *                               '-----------------------'   '-----------------------'
     */
    [1] = LAYOUT(
        _______, _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                                        KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
        _______, _______, _______, _______, _______, _______, _______,                                        KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,                      _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______,    _______, _______, _______, _______
    ),
};
