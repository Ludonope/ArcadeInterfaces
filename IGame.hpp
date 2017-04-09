// v1.0.3

#ifndef IGAME_HPP_
#define IGAME_HPP_

#include <vector>
#include <string>
#include <memory>
#include "GameState.hpp"
#include "Event.hpp"
#include "NetworkPacket.hpp"
#include "IStat.hpp"
#include "IMap.hpp"
#include "IGUI.hpp"
#include "ISprite.hpp"
#include "Sound.hpp"

namespace arcade
{
  ///
  /// \class IGame
  /// \brief Interface of a game for the Core program
  ///
  /// This interface will be used by the Core program to manipulate
  /// a game without knowing any detail about it
  /// The Core will always do "request" to the game, to get
  /// information or ask for processing a game loop, for example.
  /// The IGame will never have a reference to the Core, or
  /// communicate directly with it. Never. Ever.
  ///
  class IGame
  {
  public:
    ///
    /// \fn virtual ~IGame()
    /// \brief Virtual destructor of the interface
    ///
    virtual ~IGame(){};

    // Game state
    ///
    /// \fn virtual GameState getGameState() const = 0
    /// \brief Ask the current game state to the game
    ///
    virtual GameState getGameState() const = 0;

    // Events
    ///
    /// \fn virtual void notifyEvent(std::vector<Event> &&events) = 0
    /// \brief Send events (keyboard, mouse, etc) to the game
    ///
    virtual void notifyEvent(std::vector<Event> &&events) = 0;

    // Network
    ///
    /// \fn virtual void notifyNetwork(std::vector<NetworkPacket> &&events) = 0
    /// \brief Send network packets to the game
    ///
    virtual void notifyNetwork(std::vector<NetworkPacket> &&events) = 0;
    ///
    /// \fn virtual std::vector<NetworkPacket> &&getNetworkToSend() = 0
    /// \brief Get the network packet to send from the game to the server
    ///

    virtual std::vector<NetworkPacket> getNetworkToSend() = 0;
    ///
    /// \fn virtual bool hasNetwork() const = 0
    /// \brief Does this game support network ?
    ///
    virtual bool hasNetwork() const = 0;

    // Process
    ///
    /// \fn virtual void process() = 0
    /// \brief Make the game process a game loop
    ///
    virtual void process() = 0;

    // Sprites
  	///
	  /// \fn virtual std::vector<std::string> getSpritesToLoad() const = 0
	  /// \brief get the list of sprites to load for this game
	  ///
    virtual std::vector<std::unique_ptr<ISprite>> getSpritesToLoad() const = 0;

    // Sound
    ///
    /// \fn virtual std::vector<std::string> getSoundsToLoad() const = 0
    /// \brief get the list of sound files to load for this game
    ///
    virtual std::vector<std::pair<std::string, SoundType>> getSoundsToLoad() const = 0;

    ///
    /// \fn     virtual std::vector<Sound> getSoundsToPlay() = 0
    /// \brief Get the sounds to play
    ///  You should return by std::move to not copy your vector and to clear it at the same time
    ///
    virtual std::vector<Sound>			getSoundsToPlay() = 0;

    // Map
    ///
    /// \fn virtual IMap const &getCurrentMap() const = 0
    /// \brief Get the current version of the map
    ///
    virtual IMap const &getCurrentMap() const = 0;

    // GUI
    ///
    /// \fn virtual IGUI &getGUI() = 0
    /// \brief Get the current version of the GUI to display
    ///
    virtual IGUI &getGUI() = 0;
  };
}

#endif // !IGAME_HPP_
