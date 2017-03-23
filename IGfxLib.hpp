// v1.0.4

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

      // Sprites
      // An easy way to now if your lib is graphical or not like ncurses
      virtual bool                      doesSupportGraphic() const = 0;
      // @param std::vector<std::string> const & to pass the path of your sprites to give your lib
      //        the way to search your assets
      // @return std::vector<int> to know the id list if you chose to not put them from 0 to n
      virtual std::vector<int> const    &loadSprites(std::vector<std::string> const &sprites) = 0;

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
