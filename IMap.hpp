// v1.0.3

#ifndef IMAP_HPP_
#define IMAP_HPP_

#include <cstddef>
#include "ILayer.hpp"

namespace arcade
{
	///
	/// \class IMap
	/// \brief Interface representing a Map
	///
	/// A map is composed of layers, which contain tiles.
	/// If you want to access to the tile x:3 y:8 of the layer 2
	/// you just have to do map[2][8][3]
	///
  class IMap
  {
  public:
	  ///
	  /// \fn virtual ~IMap()
	  /// \brief Virtual destructor of the interface
	  ///
    virtual ~IMap(){};

	///
	/// \fn virtual const ILayer &operator[](size_t n) const = 0
	/// \brief Get a specific layer of the map
	///
    virtual ITile const &at(size_t layer, size_t x, size_t y) const = 0;
	///
	/// \fn virtual size_t getLayerNb() const = 0
	/// \brief Get the number of layers
	///
    virtual size_t getLayerNb() const = 0;
	///
	/// \fn virtual size_t getWidth() const = 0
	/// \brief Get the width of the map
	///
    virtual size_t getWidth() const = 0;
	///
	/// \fn virtual size_t getHeight() const = 0
	/// \brief Get the height of the map
	///
    virtual size_t getHeight() const = 0;
  };
}

#endif // !IMAP_HPP_
