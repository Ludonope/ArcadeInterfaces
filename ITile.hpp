// v1.0.0

#ifndef ITILE_HPP_
#define ITILE_HPP_

#include <cstddef>
#include "Protocol.hpp"
#include "Color.hpp"
#include "GameState.hpp"

namespace arcade
{
	///
	/// \class ITile
	/// \brief Interface representing a tile
	///
	/// A tile is a "block" of the map. It can be a wall, a empty block,
	/// a player, etc. It can be described with a type, a color and/or
	/// a sprite.
	///
  class ITile
  {
  public:
	  ///
	  /// \fn virtual ~ITile()
	  /// \brief Virtual destructor of the interface
	  ///
    virtual ~ITile(){};

	///
	/// \fn virtual Color getColor() const = 0
	/// \brief Get the color of the tile
	///
    virtual Color getColor() const = 0;
	///
	/// \fn virtual bool hasSprite() const = 0
	/// \brief Returns if the Tile has a sprite affected, if not, use getColor()
	///
    virtual bool hasSprite() const = 0;
	///
	/// \fn virtual size_t getSpriteId() const = 0
	/// \brief Get the sprite ID (0 if none)
	///
    virtual size_t getSpriteId() const = 0;
	///
	/// \fn virtual size_t getSpritePos() const = 0
	/// \brief Get the sprite position in it's animation
	///
    virtual size_t getSpritePos() const = 0;
	///
	/// \fn virtual double getShiftX() const = 0
	/// \brief Get the tile position shift on x
	///
    virtual double getShiftX() const = 0;
    	///
	/// \fn virtual size_t getShiftY() const = 0
	/// \brief Get the tile position shift on y
	///
    virtual double getShiftY() const = 0;
  };
}

#endif // !ITILE_HPP_
