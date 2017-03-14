#ifndef GAMESTATE_HPP_
#define GAMESTATE_HPP_

namespace arcade
{
  enum GameState
  {
    NONE = -1,
    INGAME,
    PAUSED,
    GAME_MENU,
    MENU,
    QUIT,
    NB_GAME_STATE
  };
}

#endif // !GAMESTATE_HPP_