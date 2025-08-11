#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#include "keymap_steno.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    LT(6,KC_ESCAPE),MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_LSFT, KC_J),MT(MOD_LCTL, KC_K),MT(MOD_LALT, KC_L),MT(MOD_LGUI, KC_SCLN),LT(9,KC_QUOTE), 
    LT(3,KC_GRAVE), LT(3,KC_Z),     MT(MOD_RALT, KC_X),KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       MT(MOD_RALT, KC_DOT),LT(3,KC_SLASH), CW_TOGG,        
                                                    LT(4,KC_SPACE), LT(5,KC_TAB),                                   LT(8,KC_ENTER), LT(7,KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_J,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_M,           MT(MOD_LSFT, KC_N),MT(MOD_LCTL, KC_E),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_K,           KC_H,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    TO(0),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_GRAVE,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_LEFT_SHIFT,  
                                                    KC_SPACE,       KC_TAB,                                         KC_ENTER,       KC_BSPC
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_MS_BTN3,     KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    LCTL(KC_Y),                                     LCTL(KC_Y),     KC_PC_PASTE,    KC_PC_COPY,     KC_PC_CUT,      KC_PC_UNDO,     KC_MS_BTN3,     
    KC_MS_BTN3,     KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_MS_BTN3,     
    KC_PC_UNDO,     KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    LCTL(KC_Y),                                     LCTL(KC_Y),     KC_PC_PASTE,    KC_PC_COPY,     KC_PC_CUT,      KC_PC_UNDO,     KC_PC_UNDO,     
                                                    KC_MS_BTN1,     KC_MS_BTN2,                                     KC_MS_BTN2,     KC_MS_BTN1
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          TO(2),          TO(1),          TO(0),          KC_NO,                                          LCTL(KC_Y),     KC_PC_PASTE,    KC_PC_COPY,     KC_PC_CUT,      KC_PC_UNDO,     KC_DELETE,      
    KC_NO,          KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_DELETE,      
    KC_NO,          KC_NO,          KC_RIGHT_ALT,   TO(7),          QK_LLCK,        KC_NO,                                          KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_INSERT,      KC_CAPS,        
                                                    KC_NO,          KC_NO,                                          KC_ENTER,       KC_BSPC
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          TO(2),          TO(1),          TO(0),          KC_NO,                                          LCTL(KC_Y),     KC_PC_PASTE,    KC_PC_COPY,     KC_PC_CUT,      KC_PC_UNDO,     KC_MS_BTN3,     
    KC_NO,          KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_NO,          KC_MS_BTN3,     
    KC_NO,          KC_NO,          KC_RIGHT_ALT,   TO(8),          QK_LLCK,        KC_NO,                                          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_NO,          KC_MS_BTN3,     
                                                    KC_NO,          KC_NO,                                          KC_MS_BTN2,     KC_MS_BTN1
  ),
  [6] = LAYOUT_voyager(
    QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          RGB_SLD,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          TO(2),          TO(1),          TO(0),          KC_NO,                                          RGB_TOG,        RGB_MODE_FORWARD,RGB_VAI,        RGB_HUI,        RGB_SAI,        KC_AUDIO_MUTE,  
    KC_NO,          KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,KC_NO,          KC_AUDIO_MUTE,  
    KC_NO,          KC_NO,          KC_RIGHT_ALT,   TO(9),          QK_LLCK,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE
  ),
  [7] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_DOT,         KC_LBRC,        KC_7,           KC_8,           KC_9,           KC_RBRC,                                        KC_NO,          TO(0),          TO(1),          TO(2),          KC_NO,          KC_NO,          
    KC_DOT,         KC_SCLN,        KC_4,           KC_5,           KC_6,           KC_EQUAL,                                       KC_NO,          KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_NO,          
    KC_GRAVE,       KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_BSLS,                                        KC_NO,          QK_LLCK,        TO(4),          KC_RIGHT_ALT,   KC_NO,          KC_NO,          
                                                    KC_0,           KC_MINUS,                                       KC_NO,          KC_NO
  ),
  [8] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LABK,        KC_LCBR,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RCBR,                                        KC_NO,          TO(0),          TO(1),          TO(2),          KC_NO,          KC_NO,          
    KC_RABK,        KC_COLN,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_PLUS,                                        KC_NO,          KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_NO,          
    KC_GRAVE,       KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_PIPE,                                        KC_NO,          QK_LLCK,        TO(5),          KC_RIGHT_ALT,   KC_NO,          KC_NO,          
                                                    KC_RPRN,        KC_UNDS,                                        KC_NO,          KC_NO
  ),
  [9] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          TO(10),         KC_NO,          KC_NO,          
    KC_APPLICATION, KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,                                        KC_NO,          TO(0),          TO(1),          TO(2),          KC_NO,          KC_NO,          
    KC_APPLICATION, KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_SCRL,                                        KC_NO,          KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_NO,          
    KC_NO,          KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_PAUSE,                                       KC_NO,          QK_LLCK,        TO(6),          KC_RIGHT_ALT,   KC_NO,          KC_NO,          
                                                    KC_SPACE,       KC_TAB,                                         KC_NO,          KC_NO
  ),
  [10] = LAYOUT_voyager(
    STN_N1,         STN_N2,         STN_N3,         STN_N4,         STN_N5,         STN_N6,                                         STN_N7,         STN_N8,         STN_N9,         STN_NA,         STN_NB,         STN_NC,         
    STN_FN,         STN_S1,         STN_TL,         STN_PL,         STN_HL,         STN_ST1,                                        STN_ST3,        STN_FR,         STN_PR,         STN_LR,         STN_TR,         STN_DR,         
    MAGIC_TOGGLE_NKRO,STN_S2,         STN_KL,         STN_WL,         STN_RL,         STN_ST2,                                        STN_ST4,        STN_RR,         STN_BR,         STN_GR,         STN_SR,         STN_ZR,         
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    STN_A,          STN_O,                                          STN_E,          STN_U
  ),
};

const uint16_t PROGMEM combo0[] = { KC_NO, KC_NO, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_NO, KC_NO, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_NO, KC_NO, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_F5),
    COMBO(combo1, KC_F9),
    COMBO(combo2, KC_F8),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_A):
            return TAPPING_TERM + 50;
        case MT(MOD_LGUI, KC_SCLN):
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [2] = { {0,245,245}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {131,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {131,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {131,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {131,255,255}, {131,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {131,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {131,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {131,255,255}, {131,255,255}, {152,255,255}, {152,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255} },

    [6] = { {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {131,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {131,255,255}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {131,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



