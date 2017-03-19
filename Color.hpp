#ifndef COLOR_HPP_
#define COLOR_HPP_

#include <cstdint>

namespace arcade
{
  // Define basic constant colors
  namespace color
  {
    const Color Black(0, 0, 0);
    const Color White(255, 255, 255);
    const Color Red(255, 0, 0);
    const Color Green(0, 255, 0);
    const Color Blue(0, 0, 255);
    const Color Yellow(255, 255, 0);
    const Color Magenta(255, 0, 255);
    const Color Cyan(0, 255, 255);
    const Color Transparent(0, 0, 0, 0);
  }

  union Color
  {
    Color();
    Color(uint32_t c);
    Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255);

    uint32_t full;
    uint8_t  rgba[4];
  };
}

#endif // !COLOR_HPP_
