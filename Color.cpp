#include "Color.hpp"

namespace arcade
{
	// Basic constant colors
	const Color Color::Black(0, 0, 0);
	const Color Color::White(255, 255, 255);
	const Color Color::Red(255, 0, 0);
	const Color Color::Green(0, 255, 0);
	const Color Color::Blue(0, 0, 255);
	const Color Color::Yellow(255, 255, 0);
	const Color Color::Magenta(255, 0, 255);
	const Color Color::Cyan(0, 255, 255);
	const Color Color::Transparent(0, 0, 0, 0);

	Color::Color(uint32_t c) :
		full(c)
	{}

	Color::Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a) :
	#if IS_LITTLE_ENDIAN
		r(r), g(g), b(b), a(a)
	#else
		a(a), b(b), g(g), r(r)
	#endif
	{}

	Color::Color(Color const &c) :
		full(c.full)
	{}
}
