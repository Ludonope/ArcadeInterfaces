// Please, if you change the Interface, update the version
// v1.0.2

#ifndef IGFXLIB_HPP_
#define IGFXLIB_HPP_

#include <vector>
#include <string>
#include "Event.hpp"
#include "IMap.hpp"
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

    // Window
    virtual void setSize(size_t height, size_t width) = 0;
    virtual void setPosition(size_t y, size_t x) = 0;
    virtual void initializeWindow() = 0;

    // Map
    virtual void updateMap(IMap const &map) = 0;

    // GUI
    virtual void updateGUI(IGUI const &gui) = 0;

    // Display
    virtual void display() = 0;

    // Clear
    virtual void clear() = 0;

  };
}

#endif // !IGFXLIB_HPP_
