//Version 1.0

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
    enum TileTypeEvolution
    {
        EMPTY = 0,
        BLOCK,
        OBSTACLE, // FOR CENTIPEDE
        ENEMY,
        SHOT_ENEMY,
        SHOT_PLAYER,
        POWERUP,
        PLAYER,
        FOOD, // FOR PACMAN
    };

    enum TypeComponent
    {
        TEXT = 0,
        BUTTON,
        SLIDER
    };
}
#endif // !GAMESTATE_HPP_
