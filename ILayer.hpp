#ifndef ILAYER_HPP_
#define ILAYER_HPP_

#include <vector>
#include "ITile.hpp"

namespace arcade
{
  class ILayer
  {
  public:
    virtual ~ILayer() = 0;

    virtual std::vector<ITile *> &operator[](int n);
    virtual size_t ǵetWidth() const = 0;
    virtual size_t ǵetHeight() const = 0;
  };
}

#endif // !ILAYER_HPP_