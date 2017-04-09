#ifndef NETWORKPACKET_HPP_
#define NETWORKPACKET_HPP_

#include <cstddef>
#include <cstdint>

namespace arcade
{
  enum NetworkGames
    {
      NO_GAME		= 0x0,
      SNAKE,
      CENTIPEDE,
      SOLAR_FOX,
      PACMAN,
      PONG
    };

  enum NetworkAction
    {
      HELLO_EVENT	= 0x0,
      PLAYER_EVENT,
      GAME_EVENT,
      ENTITY_EVENT
    };

  ///
  /// \struct NetworkPacketHeader
  /// \brief Network packet header
  ///
  struct NetworkPacketHeader
  {
    static constexpr uint32_t packetMagicNumber = 0x41C4D3;
    uint32_t		magicNumber;
    uint32_t		checksum;
    NetworkGames	game;
  };

  ///
  /// \struct NetworkPacket
  /// \brief Network packet
  ///
  struct NetworkPacket
  {
    NetworkPacketHeader	header;
    uint32_t		len;
    uint8_t		*data;
  };
}

#endif // !NETWORKPACKET_HPP_
