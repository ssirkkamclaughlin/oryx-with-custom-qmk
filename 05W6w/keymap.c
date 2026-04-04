#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
};

#define DUAL_FUNC_0 LT(1, KC_M)
#define DUAL_FUNC_1 LT(13, KC_F9)
#define DUAL_FUNC_2 LT(5, KC_F11)
#define DUAL_FUNC_3 LT(11, KC_I)
#define DUAL_FUNC_4 LT(5, KC_F22)
#define DUAL_FUNC_5 LT(12, KC_E)
#define DUAL_FUNC_6 LT(14, KC_F5)
#define DUAL_FUNC_7 LT(4, KC_F22)
#define DUAL_FUNC_8 LT(13, KC_4)
#define DUAL_FUNC_9 LT(10, KC_5)
#define DUAL_FUNC_10 LT(13, KC_F7)
#define DUAL_FUNC_11 LT(1, KC_F8)
#define DUAL_FUNC_12 LT(1, KC_K)
#define DUAL_FUNC_13 LT(6, KC_F3)
#define DUAL_FUNC_14 LT(11, KC_5)
#define DUAL_FUNC_15 LT(15, KC_L)
#define DUAL_FUNC_16 LT(1, KC_1)
#define DUAL_FUNC_17 LT(14, KC_E)
#define DUAL_FUNC_18 LT(8, KC_F13)
#define DUAL_FUNC_19 LT(4, KC_B)
#define DUAL_FUNC_20 LT(7, KC_F21)
#define DUAL_FUNC_21 LT(14, KC_F3)
#define DUAL_FUNC_22 LT(15, KC_Q)
#define DUAL_FUNC_23 LT(15, KC_F12)
#define DUAL_FUNC_24 LT(4, KC_F23)
#define DUAL_FUNC_25 LT(12, KC_F22)
#define DUAL_FUNC_26 LT(1, KC_F21)
#define DUAL_FUNC_27 LT(4, KC_7)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_NO,                                          KC_NO,          KC_J,           KC_L,           KC_U,           KC_Y,           KC_QUOTE,       KC_NO,          
    KC_NO,          MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,           KC_NO,                                                                          KC_NO,          KC_M,           MT(MOD_LSFT, KC_N),MT(MOD_LCTL, KC_E),MT(MOD_LALT, KC_I),MT(MOD_LGUI, KC_O),KC_NO,          
    KC_NO,          KC_Z,           KC_X,           KC_C,           MEH_T(KC_D),    KC_V,                                           KC_K,           MEH_T(KC_H),    KC_COMMA,       KC_DOT,         KC_SLASH,       KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          LT(2, KC_ESCAPE),KC_NO,                                                                                                          KC_NO,          LT(2, KC_DELETE),KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    LT(1, KC_BSPC), MT(MOD_LCTL, KC_TAB),KC_NO,                          KC_NO,          MT(MOD_LCTL, KC_ENTER),LT(1, KC_SPACE)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_7,           KC_8,           KC_9,           KC_RBRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_SCRL,        KC_CAPS,        KC_INSERT,      KC_PSCR,        KC_PAUSE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_SCLN),MT(MOD_LALT, KC_4),MT(MOD_LCTL, KC_5),MT(MOD_LSFT, KC_6),KC_LBRC,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_APPLICATION, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_DOT,         KC_1,           KC_2,           MEH_T(KC_3),    KC_BSLS,                                        TD(DANCE_0),    DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_RPRN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_0,           KC_MINUS,       KC_TRANSPARENT,                 KC_TRANSPARENT, CW_TOGG,        KC_LPRN
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_4,    DUAL_FUNC_5,    DUAL_FUNC_6,    DUAL_FUNC_7,    RGB_VAI,        KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_HUI,        KC_MEDIA_PLAY_PAUSE,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_UP,KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,   DUAL_FUNC_11,   RGB_VAD,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, RGB_HUD,        DUAL_FUNC_19,   DUAL_FUNC_20,   DUAL_FUNC_21,   KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_12,   DUAL_FUNC_13,   DUAL_FUNC_14,   DUAL_FUNC_15,   AS_TOGG,                                        QK_BOOT,        DUAL_FUNC_22,   DUAL_FUNC_23,   DUAL_FUNC_24,   KC_AUDIO_MUTE,  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_16,   KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, DUAL_FUNC_25,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    DUAL_FUNC_17,   DUAL_FUNC_18,   KC_TRANSPARENT,                 KC_TRANSPARENT, DUAL_FUNC_26,   DUAL_FUNC_27
  ),
};







typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_HOLD: register_code16(KC_SYSTEM_SLEEP); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case DOUBLE_HOLD: unregister_code16(KC_SYSTEM_SLEEP); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_HOME);
        } else {
          unregister_code16(KC_HOME);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_HOME));
        } else {
          unregister_code16(LSFT(KC_HOME));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PGDN);
        } else {
          unregister_code16(KC_PGDN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_PGDN));
        } else {
          unregister_code16(LSFT(KC_PGDN));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PAGE_UP);
        } else {
          unregister_code16(KC_PAGE_UP);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_PAGE_UP));
        } else {
          unregister_code16(LSFT(KC_PAGE_UP));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_END);
        } else {
          unregister_code16(KC_END);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_END));
        } else {
          unregister_code16(LSFT(KC_END));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F12);
        } else {
          unregister_code16(KC_F12);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F12));
        } else {
          unregister_code16(LSFT(KC_F12));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F7);
        } else {
          unregister_code16(KC_F7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F7));
        } else {
          unregister_code16(LSFT(KC_F7));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F8));
        } else {
          unregister_code16(LSFT(KC_F8));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F9));
        } else {
          unregister_code16(LSFT(KC_F9));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F11);
        } else {
          unregister_code16(KC_F11);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F11));
        } else {
          unregister_code16(LSFT(KC_F11));
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F4));
        } else {
          unregister_code16(LSFT(KC_F4));
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F5));
        } else {
          unregister_code16(LSFT(KC_F5));
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F6);
        } else {
          unregister_code16(KC_F6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F6));
        } else {
          unregister_code16(LSFT(KC_F6));
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F10));
        } else {
          unregister_code16(LSFT(KC_F10));
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F1);
        } else {
          unregister_code16(KC_F1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F1));
        } else {
          unregister_code16(LSFT(KC_F1));
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F2);
        } else {
          unregister_code16(KC_F2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F2));
        } else {
          unregister_code16(LSFT(KC_F2));
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F3));
        } else {
          unregister_code16(LSFT(KC_F3));
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F13);
        } else {
          unregister_code16(KC_F13);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F13));
        } else {
          unregister_code16(LSFT(KC_F13));
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F14);
        } else {
          unregister_code16(KC_F14);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F14));
        } else {
          unregister_code16(LSFT(KC_F14));
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F15);
        } else {
          unregister_code16(KC_F15);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F15));
        } else {
          unregister_code16(LSFT(KC_F15));
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F21);
        } else {
          unregister_code16(KC_F21);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F21));
        } else {
          unregister_code16(LSFT(KC_F21));
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F20);
        } else {
          unregister_code16(KC_F20);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F20));
        } else {
          unregister_code16(LSFT(KC_F20));
        }  
      }  
      return false;
    case DUAL_FUNC_21:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F19);
        } else {
          unregister_code16(KC_F19);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F19));
        } else {
          unregister_code16(LSFT(KC_F19));
        }  
      }  
      return false;
    case DUAL_FUNC_22:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F18);
        } else {
          unregister_code16(KC_F18);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F18));
        } else {
          unregister_code16(LSFT(KC_F18));
        }  
      }  
      return false;
    case DUAL_FUNC_23:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F17);
        } else {
          unregister_code16(KC_F17);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F17));
        } else {
          unregister_code16(LSFT(KC_F17));
        }  
      }  
      return false;
    case DUAL_FUNC_24:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F16);
        } else {
          unregister_code16(KC_F16);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F16));
        } else {
          unregister_code16(LSFT(KC_F16));
        }  
      }  
      return false;
    case DUAL_FUNC_25:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F22);
        } else {
          unregister_code16(KC_F22);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F22));
        } else {
          unregister_code16(LSFT(KC_F22));
        }  
      }  
      return false;
    case DUAL_FUNC_26:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F24);
        } else {
          unregister_code16(KC_F24);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F24));
        } else {
          unregister_code16(LSFT(KC_F24));
        }  
      }  
      return false;
    case DUAL_FUNC_27:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F23);
        } else {
          unregister_code16(KC_F23);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F23));
        } else {
          unregister_code16(LSFT(KC_F23));
        }  
      }  
      return false;
    case RGB_SLD:
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

