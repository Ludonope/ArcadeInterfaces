// v1.0.1

#ifndef ILAYER_HPP_ls
# define ILAYER_HPP_

# include <vector>
# include <cstddef>
# include "ITile.hpp"

namespace arcade
{
  class ILayer
  {
  public:
    virtual ~ILayer() = 0;
    virtual std::vector<ITile *> &operator[](int n) = 0;
    virtual const std::vector<ITile *> &operator[](int n) const = 0;
    virtual size_t getWidth() const = 0;
    virtual size_t getHeight() const = 0;
  };
}

#endif // !ILAYER_HPP_
