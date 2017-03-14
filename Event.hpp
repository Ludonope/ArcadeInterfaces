#ifndef EVENT_HPP_
#define EVENT_HPP_

namespace arcade
{
  enum EventType
  {
    ET_NONE = -1,
    ET_KEYBOARD,
    ET_MOUSE,
    ET_BUTTON,
    ET_JOYSTICK,
    NB_EVENT_TYPE
  };

  enum ActionType
  {
    AT_NONE = -1,
    AT_PRESSED,
    AT_RELEASED,
    AT_MOVED,
    NB_ACTION_TYPE
  };

  enum KeyboardKey
  {
    KB_NONE = -1,
    KB_A,
    KB_B,
    KB_C,
    KB_D,
    KB_E,
    KB_F,
    KB_G,
    KB_H,
    KB_I,
    KB_J,
    KB_K,
    KB_L,
    KB_M,
    KB_N,
    KB_O,
    KB_P,
    KB_Q,
    KB_R,
    KB_S,
    KB_T,
    KB_U,
    KB_V,
    KB_W,
    KB_X,
    KB_Y,
    KB_Z,
    KB_0,
    KB_1,
    KB_2,
    KB_3,
    KB_4,
    KB_5,
    KB_6,
    KB_7,
    KB_8,
    KB_9,
    KB_ARROW_LEFT,
    KB_ARROW_RIGHT,
    KB_ARROW_UP,
    KB_ARROW_DOWN,
    KB_SPACE,
    KB_ENTER,
    KB_BACKSPACE,
    KB_LCTRL,
    KB_RCTRL,
    KB_LALT,
    KB_RALT,
    KB_LSHIFT,
    KB_RSHIFT,
    KB_CAPSLOCK,
    KB_TAB,
    KB_ESCAPE,
    KB_PAGEUP,
    KB_PAGEDOWN,
    KB_HOME,
    KB_END,
    KB_FN1,
    KB_FN2,
    KB_FN3,
    KB_FN4,
    KB_FN5,
    KB_FN6,
    KB_FN7,
    KB_FN8,
    KB_FN9,
    KB_FN10,
    KB_FN11,
    KB_FN12,
    KB_COMMA,
    KB_DOT,
    KB_SLASH,
    KB_INFERIOR,
    KB_SUPERIOR,
    KB_QUESTION,
    KB_SEMICOLON,
    KB_COLON,
    KB_SIMPLEQUOTE,
    KB_DOUBLEQUOTE,
    KB_LEFTBRACE,
    KB_RIGHTBRACE,
    KB_LEFTBRACKET,
    KB_RIGHTBRACKET,
    KB_LEFTPAREN,
    KB_RIGHTPAREN,
    KB_ANTISLASH,
    KB_VERTICALBAR,
    KB_EXCLAMATION,
    KB_ATSYMBOL,
    KB_HASHTAG,
    KB_DOLLAR,
    KB_PERCENT,
    KB_CIRCUMFLEX,
    KB_AMPERSAND,
    KB_ASTERISK,
    KB_UNDERSCORE,
    KB_MINUS,
    KB_PLUS,
    KB_EQUAL,
    KB_DELETE,
    NB_KEYBOARD_KEY
  };

  enum MouseKey
  {
    M_NONE = -1,
    M_LEFT_CLICK,
    M_RIGHT_CLICK,
    M_MIDDLE_CLICK,
    M_SCROLL_UP,
    M_SCROLL_DOWN,
    M_BT0,
    M_BT1,
    M_BT2,
    M_BT3,
    M_BT4,
    M_BT5,
    M_BT6,
    M_BT7,
    M_BT8,
    M_BT9,
    NB_MOUSE_KEY
  };

  enum ControllerKey
  {
    C_NONE = -1,
    // TODO: map the controller keys
    NB_CONTROLLER_KEY
  };

  //
  // Structure used to get the user input event
  //
  struct Event
  {
    EventType     type;
    ActionType    action;
    KeyboardKey   kb_key;
    MouseKey      m_key;
    ControllerKey c_key;
  };
}

#endif // !EVENT_HPP_