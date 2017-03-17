#ifndef ILAYER_HPP_
#define ILAYER_HPP_

#include "ITile.hpp"

class ILayer
{
public:
  virtual ~ILayer() = 0;

  virtual std::vector<ITile *> &operator[](int n) = 0;
  virtual size_t ǵetWidth() const = 0;
  virtual size_t ǵetHeight() const = 0;
};

#endif // !ILAYER_HPP_