//
// Created by duhieu_b on 17/03/17.
//

#ifndef CPP_ARCADE_ICOMPONENT_HPP
#define CPP_ARCADE_ICOMPONENT_HPP

#include <string>
#include "GameState.hpp"
#include "Color.hpp"

namespace arcade
{
    class IComponent
    {
    public:
        virtual ~IComponent(){};

		// X and Y between 0.0 and 1.0 (percentage)
		virtual double getX() const = 0;
		virtual double getY() const = 0;

		virtual double getWidth() const = 0;
		virtual double getHeight() const = 0;

		virtual std::size_t getBackgroundId() const = 0;
		virtual Color getBackgroundColor() const = 0;
		virtual std::string const &getText() const = 0;
    };
}

#endif //CPP_ARCADE_ICOMPONENT_HPP
