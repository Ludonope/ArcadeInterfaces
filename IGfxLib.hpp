#ifndef IGFXLIB_HPP_
#define IGFXLIB_HPP_

#include <vector>
#include <string>
#include "Event.hpp"
#include "IMap.hpp"
#include "IMenu.hpp"
#include "IGUI.hpp"

namespace arcade
{
  class IGfxLib
  {
  public:
    virtual ~IGfxLib(){};

    // Events
    virtual bool pollEvent(Event &e) = 0;

    // Sound
    virtual bool doesSupportSound() const = 0;
    virtual void loadSounds(std::vector<std::string> const &sounds) = 0;
    virtual void playSound(int soundId) = 0;

    // Map
    virtual void displayMap(IMap const &map) = 0;

    // Menu
    virtual void displayMenu(IMenu const &menu) = 0;

    // GUI
    virtual void displayGUI(IGUI const &gui) = 0;
  };
}

#endif // !IGFXLIB_HPP_