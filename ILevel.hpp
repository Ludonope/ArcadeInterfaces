#ifndef ILEVEL_HPP_
#define ILEVEL_HPP_

#include <memory>

namespace arcade
{
    class ILevel
    {
    public:
        // TODO

        virtual                         ~ILevel(){};

        virtual std::unique_ptr<IMap>   getMap() const = 0;
        virtual unsigned int            getDifficulty() const = 0;

        virtual void                    setMap(const std::unique_ptr<IMap> levelMap) = 0;
        virtual void                    setDifficulty(unsigned int levelDifficulty) = 0;
    };
}

#endif // !ILEVEL_HPP_