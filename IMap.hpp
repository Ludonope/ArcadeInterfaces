// v1.0.2

#ifndef IMAP_HPP_
#define IMAP_HPP_

#include <cstddef>
#include "ILayer.hpp"

namespace arcade
{
  class IMap
  {
  public:
    virtual ~IMap() = 0;

    virtual ILayer &operator[](size_t n) = 0;
    virtual const ILayer &operator[](size_t n) const = 0;
    virtual size_t getLayerNb() const = 0;
    virtual size_t getWidth() const = 0;
    virtual size_t getHeight() const = 0;
    virtual bool isWalkable(size_t layer_idx, size_t x, size_t y) const = 0;
  };
}

#endif // !IMAP_HPP_
