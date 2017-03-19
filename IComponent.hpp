//
// Created by duhieu_b on 17/03/17.
//

#ifndef CPP_ARCADE_ICOMPONENT_HPP
#define CPP_ARCADE_ICOMPONENT_HPP

#include <string>
#include "GameState.hpp"

namespace arcade
{
    class IComponent
    {
    public:
        virtual ~IComponent(){};
        virtual const std::string &getValue() const = 0;
        virtual void setValue(const std::string &value) = 0;
        virtual const std::string &getFont() const = 0;
        virtual arcade::TypeComponent getType() const = 0;
        virtual void setFont(const std::string &font) = 0;
        virtual const std::string &getSprites() const = 0;
        virtual void setSprites(const std::string &sprites) = 0;
        virtual const std::pair<int, int> &getPos() const = 0;
        virtual void setPos(const std::pair<int, int> &pos) = 0;
        virtual size_t getScale() const = 0;
        virtual void setScale(size_t scale) = 0;
    };
}

#endif //CPP_ARCADE_ICOMPONENT_HPP
