// v1.0.2

#ifndef ILAYER_HPP_
# define ILAYER_HPP_

# include <vector>
# include <cstddef>
# include <memory>
# include "ITile.hpp"

namespace arcade
{
  class ILayer
  {
  public:
    virtual ~ILayer(){};
    virtual std::vector<std::unique_ptr<ITile>> &operator[](int n) = 0;
    virtual const std::vector<std::unique_ptr<ITile>> &operator[](int n) const = 0;
    virtual size_t getWidth() const = 0;
    virtual size_t getHeight() const = 0;
  };
}

#endif // !ILAYER_HPP_
