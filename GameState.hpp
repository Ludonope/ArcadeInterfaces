//Version 1.0

#ifndef GAMESTATE_HPP_
#define GAMESTATE_HPP_

namespace arcade
{
	///
	/// \enum GameState
	/// \brief Describe current game state
	///
    enum GameState
    {
        NONE = -1, /// Unknown game state
        INGAME, /// In game
        PAUSED, /// Game paused
        GAME_MENU, /// In in-game menu
        MENU, /// In menu
        QUIT, /// Quitting
        NB_GAME_STATE /// Number of game states
    };

	///
	/// \enum TileTypeEvolution
	/// \brief Type of map tile
	///
    enum TileTypeEvolution
    {
        EMPTY = 0, /// Empty tile
        BLOCK, /// Block tile
        OBSTACLE, /// Obstacle tile
        ENEMY, /// Enemy tile
        SHOT_ENEMY, /// Enemy shot tile
        SHOT_PLAYER, /// Player shot tile
        POWERUP, /// Powerup tile
        PLAYER, /// Player tile
        FOOD, /// Food tile
    };

    enum TypeComponent
    {
        TEXT = 0,
        BUTTON,
        SLIDER
    };
}
#endif // !GAMESTATE_HPP_
