#ifndef COLOR_HPP_
#define COLOR_HPP_

#include <cstdint>

#define IS_LITTLE_ENDIAN (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)

namespace arcade
{
	///
	/// \union Color
	/// \brief Union to store RGBa color
	///
	union Color
	{
		///
		/// \fn Color(uint32_t c = Black.full)
		/// \brief Constructor to create color from a 4 bytes integer
		/// \param[in] c 4 bytes integer value containing a color
		///
		Color(uint32_t c = Black.full);

		///
		/// \fn Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255)
		/// \brief Constructor to create color from a 4 color component
		/// \param[in] r Red color component value
		/// \param[in] g Green color component value
		/// \param[in] b Blue color component value
		/// \param[in] a Alpha (opacity) color component value
		///
		Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255);

		///
		/// \fn Color(Color const &c)
		/// \brief Constructor to copy a Color
		/// \param[in] c Color to be copied
		///
		Color(Color const &c);

		static const Color Black; /// Black color
		static const Color White; /// White color
		static const Color Red; /// Red color
		static const Color Green; /// Green color
		static const Color Blue; /// Blue color
		static const Color Yellow; /// Yellow color
		static const Color Magenta; /// Magenta color
		static const Color Cyan; /// Cyan color
		static const Color Transparent; /// Transparent color

		uint32_t full; /// 4 bytes integer value of the color
		uint8_t  rgba[4]; /// array of the 4 color component
#if IS_LITTLE_ENDIAN
		struct
		{
			uint8_t r;
			uint8_t g;
			uint8_t b;
			uint8_t a;
		};
#else
		struct
		{
			uint8_t a;
			uint8_t b;
			uint8_t g;
		 	uint8_t r;
		};
#endif
	};
}

#endif // !COLOR_HPP_
