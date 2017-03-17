#ifndef ITILE_HPP_
#define ITILE_HPP_

#include "Protocol.hpp"
#include "Color.hpp"

namespace arcade
{
  class ITile
  {
  public:
    virtual ~ITile(){};

  virtual arcade::TileType getType() const = 0;
  virtual void setType(TileType type) = 0;
  virtual TileTypeEvolution getTypeEv() const = 0;
  virtual void setTypeEv(TileTypeEvolution type) = 0;
  virtual union Color getColor() const = 0;
  virtual void setColor(union Color color) = 0;

    virtual size_t getSpriteId() const = 0;
    virtual size_t getSpritePos() const = 0;
    virtual void   nextSprite() = 0;
    virtual void   prevSprite() = 0;
    virtual void setSpritePos(size_t pos) = 0;
    virtual void setSprite(size_t id) = 0;

    // TODO: animation
  };
}

#endif // !ITILE_HPP_
