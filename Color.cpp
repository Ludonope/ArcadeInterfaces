#include "Color.hpp"

namespace arcade
{
	Color make_color(uint32_t c)
	{
		Color color = { c };

		return (color);
	}

	Color make_color(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
	{
		Color color;

		color.rgba[0] = r;
		color.rgba[1] = g;
		color.rgba[2] = b;
		color.rgba[3] = a;
		return (color);
	}
}