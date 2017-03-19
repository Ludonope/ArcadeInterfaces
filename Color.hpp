#ifndef COLOR_HPP_
#define COLOR_HPP_

#include <cstdint>

namespace arcade
{
  union Color
  {
    uint32_t full;
    uint8_t  rgba[4];
  };

  Color make_color(uint32_t c);
  Color make_color(uint8_t r, uint8_t g, uint8_t b, uint8_t a);
}

#endif // !COLOR_HPP_