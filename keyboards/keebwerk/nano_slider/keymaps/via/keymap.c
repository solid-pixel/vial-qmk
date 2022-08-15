<<<<<<< HEAD
/* Copyright 2020 Duckle
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
=======
>>>>>>> vial-pelly/vial
#include QMK_KEYBOARD_H
#include "analog.h"
#include "qmk_midi.h"

<<<<<<< HEAD
enum layer_names {
    _BASE,
    _FN,
    _MEDIA,
    _FN2
};

/* Defines the keycodes used by our macros in process_record_user */
enum custom_keycodes { /* In order to add more volume controls, add here a custom keycode, ex: VLC */
    DEFAULT= SAFE_RANGE,SPOTIFY,DISCORD,CHROME/*,VLC*/
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        TO(_FN),
        KC_1,    KC_2,    KC_3,
        KC_4,    KC_5,    KC_6,    KC_0
    ),
    [_FN] = LAYOUT(
        TO(_MEDIA),
        RGB_TOG, RGB_MOD, RGB_VAI,
        RGB_SAI, BL_BRTG, BL_STEP, KC_LSFT
    ),
    [_MEDIA] = LAYOUT(
        TO(_BASE),
        KC_VOLD, KC_VOLU, KC_F24,
        KC_MRWD, KC_MFFD, KC_F23, KC_MPLY
    ),
    [_FN2] = LAYOUT(
        _______,
        _______, _______, _______,
        _______, _______, _______, _______
    )
};

uint8_t divisor = 0;

void slider(void) {
    if (divisor++) { // only run the slider function 1/256 times it's called
        return;
    }

    midi_send_cc(&midi_device, 2, 0x3E, 0x7F - (analogReadPin(SLIDER_PIN) >> 3));
}

void matrix_scan_user(void) {
    slider();
}
=======
#define ____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        TO(1),
        KC_1,    KC_2,    KC_3,
        KC_4,    KC_5,    KC_6,    KC_0
    ),
    [1] = LAYOUT(
        TO(2),
        RGB_MOD, RGB_HUI,  RGB_VAI,
        RGB_RMOD,  RGB_HUD, RGB_VAD, RGB_TOG
    ),
    [2] = LAYOUT(
        TO(3),
        KC_VOLD, KC_VOLU, KC_F24,
        KC_MRWD, KC_MFFD, KC_F23, KC_MPLY
    ),
    [3] = LAYOUT(
        TO(0),
        ____,    ____,    ____,
        ____,    ____,    ____,    ____
    )
};
>>>>>>> vial-pelly/vial
