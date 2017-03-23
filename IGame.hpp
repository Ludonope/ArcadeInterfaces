// v1.0.3

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

    // Process
    virtual void process() = 0;

      // Sound
      virtual std::vector<std::string> getSoundsToLoad() const = 0;
      virtual std::vector<int>         getSoundsToPlay() = 0;

      // Sprites
      // @return std::vector<std::string> path of assets that need to be loaded by lib
      virtual std::vector<std::string> const    &getSpritesToLoad() const = 0;
      // @param takes the return vector from the IGfxLib::loadSprites() method to set ids of assets if you
      // don't chose to set from 0 to n
      virtual void                              setSpritesId(std::vector<int> spritesIds) = 0;


    // Map
    virtual IMap const &getCurrentMap() const = 0;

    // GUI
    virtual IGUI const &getGUI() const = 0;
  };
}

#endif // !IGAME_HPP_
