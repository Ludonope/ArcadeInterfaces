// v1.0.4

#ifndef IGFXLIB_HPP_
#define IGFXLIB_HPP_

#include <vector>
#include <string>
#include <memory>
#include "Event.hpp"
#include "IMap.hpp"
#include "IGUI.hpp"
#include "ISprite.hpp"
#include "Sound.hpp"

namespace arcade
{
  ///
  /// \class IGfxLib
  /// \brief Interface of a graphic lib for the Core program
  ///
  /// This interface will be used by the Core program to manipulate
  /// a graphic lib without knowing any detail about it
  /// The Core will always do "request" to the lib, to get
  /// information or ask for displaying the map and GUI, for example.
  /// The IGfxLib will never have a reference to the Core, or
  /// communicate directly with it. Never. Ever.
  ///
  class IGfxLib
  {
  public:
    ///
    /// \fn virtual ~IGfxLib()
    /// \brief Virtual destructor of the interface
    ///
    virtual ~IGfxLib(){};

    // Events
    ///
    /// \fn virtual bool pollEvent(Event &e) = 0
    /// \brief Function to poll events from the graphic lib
    ///
    /// If there is an event to poll, e is filled and true is returned.
    /// If not, false is returned.
    ///
    virtual bool pollEvent(Event &e) = 0;

    // Sound
    ///
    /// \fn virtual bool doesSupportSound() const = 0
    /// \brief Ask if the library support sound
    ///
    virtual bool doesSupportSound() const = 0;
	  ///
	  /// \fn virtual void loadSounds(std::vector<std::pair<std::string, SoundType > > const &sounds) = 0
  	/// \brief Ask the lib to remove and load new sounds
	  ///
    virtual void loadSounds(std::vector<std::pair<std::string, SoundType > > const &sounds) = 0;
	  ///
	  /// \fn virtual void soundControl(const Sound &sound) = 0
	  /// \brief Ask the lib to play a sound
	  ///
    virtual void soundControl(const Sound &sound) = 0;

    // Sprites
    ///
    /// \fn virtual std::vector<int> const &loadSprites(std::vector<std::string> const &sprites) = 0
    /// \brief Load sprites in the lib from the paths given by the game
    /// \param sprites to pass the path of your sprites to give your lib
    ///        the way to search your assets
    virtual void loadSprites(std::vector<std::unique_ptr<ISprite>> &&sprites) = 0;

    // Map
    ///
    /// \fn virtual void updateMap(IMap const &map) = 0
    /// \brief Update the map displayed
    ///
    virtual void updateMap(IMap const &map) = 0;

    // GUI
  	///
	  /// \fn virtual void updateGUI(IGUI &gui) = 0
  	/// \brief Update the GUI displayed
	  ///
    virtual void updateGUI(IGUI &gui) = 0;

    // Display
    ///
    /// \fn virtual void display() = 0
    /// \brief Display the map and GUI
    ///
    virtual void display() = 0;

    // Clear
    ///
    /// \fn virtual void clear() = 0
    /// \brief Ask the lib to clear the screen
    ///
    virtual void clear() = 0;
  };
}

#endif // !IGFXLIB_HPP_
