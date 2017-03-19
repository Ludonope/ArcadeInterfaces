#include "Color.hpp"

namespace arcade
{
  Color::Color(uint32_t c)
  {
  	full = c;
  }

  Color::Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
  {
  	rgba[0] = r;
  	rgba[1] = g;
  	rgba[2] = b;
  	rgba[3] = a;
  }

  Color::Color()
  {
	  full = color::Black.full;
  }
}
