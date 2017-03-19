#ifndef COLOR_HPP_
#define COLOR_HPP_

#include <cstdint>

namespace arcade
{
  union Color
  {
    Color();
    Color(uint32_t c);
    Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255);
    Color(Color const &c);

	// Basic constant colors
	static const Color Black;
	static const Color White;
	static const Color Red;
	static const Color Green;
	static const Color Blue;
	static const Color Yellow;
	static const Color Magenta;
	static const Color Cyan;
	static const Color Transparent;
	
	uint32_t full;
    uint8_t  rgba[4];
  };
}

#endif // !COLOR_HPP_
