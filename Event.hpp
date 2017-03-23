#ifndef EVENT_HPP_
#define EVENT_HPP_

namespace arcade
{
	///
	/// \struct MousePos
	/// \brief Mouse position (on the scale map)
	///
	/// The position is not in pixel, but in "Tile"
	///
  struct MousePos
  {
    double	x; /// Position on x axis (horizontal)
    double	y; /// Position on y axis (vertical)
  };

  ///
  /// \enum EventType
  /// \brief General event type
  ///
  /// Indicate the device of the current event
  /// or quit signal
  ///
  enum EventType
  {
    ET_NONE = -1, /// Unknown event
    ET_KEYBOARD, /// Keyboard event
    ET_MOUSE, /// Mouse event
    ET_BUTTON, /// Controller button event
    ET_JOYSTICK, /// Controller joystick event
    ET_QUIT, /// The lib "ask" to quit
    NB_EVENT_TYPE /// Number of event types
  };

  ///
  /// \enum ActionType
  /// \brief General action type
  ///
  /// Indicate the action that was done
  ///
  enum ActionType
  {
    AT_NONE = -1, /// Unknown action
    AT_PRESSED, /// Button/Key pressed
    AT_RELEASED, /// Button/Key pressed
    AT_MOVED, /// Mouse/Joystick moved
    AT_CONNECTED, /// Device connected
    AT_DISCONNECTED, /// Device disconnected
    NB_ACTION_TYPE /// Number of action types
  };

  ///
  /// \enum KeyboardKey
  /// \brief Common keyboard keys
  ///
enum KeyboardKey
{
  KB_NONE = -1, /// Unkwown key
  KB_A, /// A key
  KB_B, /// B key
  KB_C, /// C key
  KB_D, /// D key
  KB_E, /// E key
  KB_F, /// F key
  KB_G, /// G key
  KB_H, /// H key
  KB_I, /// I key
  KB_J, /// J key
  KB_K, /// K key
  KB_L, /// L key
  KB_M, /// M key
  KB_N, /// N key
  KB_O, /// O key
  KB_P, /// P key
  KB_Q, /// Q key
  KB_R, /// R key
  KB_S, /// S key
  KB_T, /// T key
  KB_U, /// U key
  KB_V, /// V key
  KB_W, /// W key
  KB_X, /// X key
  KB_Y, /// Y key
  KB_Z, /// Z key
  KB_0, /// 0 key
  KB_1, /// 1 key
  KB_2, /// 2 key
  KB_3, /// 3 key
  KB_4, /// 4 key
  KB_5, /// 5 key
  KB_6, /// 6 key
  KB_7, /// 7 key
  KB_8, /// 8 key
  KB_9, /// 9 key
  KB_ARROW_LEFT, /// Left arrow key
  KB_ARROW_RIGHT, /// Right arrow key
  KB_ARROW_UP, /// Up arrow key
  KB_ARROW_DOWN, /// Down arrow key
  KB_SPACE, /// Space key
  KB_ENTER, /// Enter/Carriage return key
  KB_BACKSPACE, /// Backspace key
  KB_LCTRL, /// Left Control key
  KB_RCTRL, /// Right Control key
  KB_LALT, /// Left Alt key
  KB_RALT, /// Right Alt key
  KB_LSHIFT, /// Left Shift key
  KB_RSHIFT, /// Right Shift key
  KB_CAPSLOCK, /// CapsLock key
  KB_TAB, /// Tabulation key
  KB_ESCAPE, /// Escape key
  KB_PAGEUP, /// Page up key
  KB_PAGEDOWN, /// Page down
  KB_HOME, /// Home key
  KB_END, /// End key
  KB_FN1, /// Function key 1 (F1)
  KB_FN2, /// Function key 2 (F2)
  KB_FN3, /// Function key 3 (F3)
  KB_FN4, /// Function key 4 (F4)
  KB_FN5, /// Function key 5 (F5)
  KB_FN6, /// Function key 6 (F6)
  KB_FN7, /// Function key 7 (F7)
  KB_FN8, /// Function key 8 (F8)
  KB_FN9, /// Function key 9 (F9)
  KB_FN10, /// Function key 10 (F10)
  KB_FN11, /// Function key 11 (F11)
  KB_FN12, /// Function key 12 (F12)
  KB_COMMA, /// Comma key (,)
  KB_DOT, /// Dot (period) key (.)
  KB_SLASH, /// Slash key (/)
  KB_INFERIOR, /// Inferior symbol key (<)
  KB_SUPERIOR, /// Superior symbol key (>)
  KB_QUESTION, /// Question mark key (?)
  KB_SEMICOLON, /// Semicolon key (;)
  KB_COLON, /// Colon key (:)
  KB_SIMPLEQUOTE, /// Simple quote key (')
  KB_DOUBLEQUOTE, /// Double quote key (")
  KB_LEFTBRACE, /// Left brace key ({)
  KB_RIGHTBRACE, /// Right brace key (})
  KB_LEFTBRACKET, /// Left bracket key ([)
  KB_RIGHTBRACKET, /// Right bracker key (])
  KB_LEFTPAREN, /// Left parenthesis key (()
  KB_RIGHTPAREN, /// Right parenthesis key ())
  KB_BACKSLASH, /// Backslash key (\)
  KB_VERTICALBAR, /// Vertical bar key (|)
  KB_EXCLAMATION, /// Exclamation mark key (!)
  KB_ATSYMBOL, /// At symbol key (@)
  KB_HASHTAG, /// Hash key (#)
  KB_DOLLAR, /// Dollar key ($)
  KB_PERCENT, /// Percent symbol key (%)
  KB_CIRCUMFLEX, /// Circumflex symbol key (^)
  KB_AMPERSAND, /// Ampersand key (&)
  KB_ASTERISK, /// Asterisk key (*)
  KB_UNDERSCORE, /// Underscore key (_)
  KB_MINUS, /// Minus symbol key (-)
  KB_PLUS, /// Plus symbol key (+)
  KB_EQUALS, /// Equals symbol key (=)
  KB_DELETE, /// Delete key (del)
  NB_KEYBOARD_KEY /// Number of keyboard keys
};

///
/// \enum MouseKey
/// \brief Common mouse keys
///
  enum MouseKey
  {
    M_NONE = -1, /// Unknown key
    M_LEFT_CLICK, /// Left button
    M_RIGHT_CLICK, /// Middle button
    M_MIDDLE_CLICK, /// Right button
    M_SCROLL_UP, /// Scroll up
    M_SCROLL_DOWN, /// Scroll down
    M_BT0, /// Button 0
    M_BT1, /// Button 1
    M_BT2, /// Button 2
    M_BT3, /// Button 3
    M_BT4, /// Button 4
    M_BT5, /// Button 5
    M_BT6, /// Button 6
    M_BT7, /// Button 7
    M_BT8, /// Button 8
    M_BT9, /// Button 9
    NB_MOUSE_KEY /// Number of mouse keys
  };

  ///
  /// \enum ControllerKey
  /// \brief Common controller keys
  ///
  enum ControllerKey
  {
    C_NONE = -1, /// Unknown key
    // TODO: map the controller keys
    NB_CONTROLLER_KEY /// Number of controller keys
  };

  ///
  /// \struct Event
  /// \brief Description of an event
  ///
  struct Event
  {
    EventType     type; /// Type of the event
    ActionType    action; /// Action of the event

	///
	/// \union key
	/// \brief Key used (Keyboard, Mouse or Controller)
	///
    union {
      KeyboardKey   kb_key; /// Keyboard key 
      MouseKey      m_key; /// Mouse key
      ControllerKey c_key; /// Controller key
    };
    MousePos	pos_rel; /// Relative position (since last event)
    MousePos	pos_abs; /// Absolute position
  };
}

#endif // !EVENT_HPP_
