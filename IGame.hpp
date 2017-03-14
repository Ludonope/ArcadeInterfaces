#ifndef IGAME_HPP_
#define IGAME_HPP_

#include <vector>
#include <string>
#include "GameState.hpp"
#include "Event.hpp"
#include "NetworkPacket.hpp"
#include "IStat.hpp"
#include "IMap.hpp"
#include "IMenu.hpp"
#include "ILevel.hpp"

class IGame
{
public:
  virtual ~IGame(){};

  // Game state
  virtual GameState getGameState() const = 0;

  // Events
  virtual void notifyEvent(std::vector<Event> const &events) = 0;

  // Network
  virtual void notifyNetwork(std::vector<NetworkPacket> const &events) = 0;
  virtual std::vector<NetworkPacket> getNetworkToSend() const = 0;

  // Sound
  virtual std::vector<std::string> getSoundsToLoad() const = 0;
  virtual std::vector<int>         getSoundToPlay() const = 0;

  // Map
  virtual IMap const &getCurrentMap() const = 0;

  // Menu
  virtual IMenu const &getMenu() const = 0;

  // GUI
  virtual IGUI const &getGUI() const = 0;
};

#endif // !IGAME_HPP_