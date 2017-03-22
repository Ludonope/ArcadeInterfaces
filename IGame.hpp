// v1.0.2

#ifndef IGAME_HPP_
#define IGAME_HPP_

#include <vector>
#include <string>
#include "GameState.hpp"
#include "Event.hpp"
#include "NetworkPacket.hpp"
#include "IStat.hpp"
#include "IMap.hpp"
#include "ILevel.hpp"
#include "IGUI.hpp"

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
    virtual std::vector<NetworkPacket> &&getNetworkToSend() = 0;

    // Process
	///
	/// \fn virtual void process() = 0
	/// \brief Make the game process a game loop
	///
    virtual void process() = 0;

    // Sound
	///
	/// \fn virtual std::vector<std::string> getSoundsToLoad() const = 0
	/// \brief get the list of sound files to load for this game
	///
    virtual std::vector<std::string> getSoundsToLoad() const = 0;
	///
	/// \fn virtual std::vector<int>       &&getSoundsToPlay() = 0
	/// \brief Get the sounds to play
	///
    virtual std::vector<int>       &&getSoundsToPlay() = 0;

    // Map
	///
	/// \fn virtual IMap const &getCurrentMap() const = 0
	/// \brief Get the current version of the map
	///
    virtual IMap const &getCurrentMap() const = 0;

    // GUI
	///
	/// \fn virtual IGUI const &getGUI() const = 0
	/// \brief Get the current version of the GUI to display
	///
    virtual IGUI const &getGUI() const = 0;
  };
}

#endif // !IGAME_HPP_
