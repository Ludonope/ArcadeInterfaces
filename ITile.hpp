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
	/// \fn virtual TileType getType() const = 0
	/// \brief Get the type of the tile (mostly used for moulinette)
	///
    virtual TileType getType() const = 0;
    virtual void setType(TileType type) = 0;
	///
	/// \fn virtual TileTypeEvolution getTypeEv() const = 0
	/// \brief Get the TypeEv of the tile
	///
    virtual TileTypeEvolution getTypeEv() const = 0;
    virtual void setTypeEv(TileTypeEvolution type) = 0;
	///
	/// \fn virtual Color getColor() const = 0
	/// \brief Get the color of the tile
	///
    virtual Color getColor() const = 0;
    virtual void setColor(union Color color) = 0;

	///
	/// \fn virtual size_t getSpriteId() const = 0
	/// \brief Get the sprite ID (0 if none)
	///
    virtual size_t getSpriteId() const = 0;
	///
	/// \fn virtual size_t getSpritePos() const = 0
	/// \brief Get the sprite position
	///
    virtual size_t getSpritePos() const = 0;

    virtual void   nextSprite() = 0;
    virtual void   prevSprite() = 0;
    virtual void setSpritePos(size_t pos) = 0;
    virtual void setSprite(size_t id) = 0;

    // TODO: animation
  };
}

#endif // !ITILE_HPP_
