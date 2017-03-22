// v1.0.2

#ifndef ILAYER_HPP_
# define ILAYER_HPP_

# include <vector>
# include <cstddef>
# include <memory>
# include "ITile.hpp"

namespace arcade
{
	///
	/// \class ILayer
	/// \brief Interface for a map tile layer
	
  class ILayer
  {
  public:
	  ///
	  /// \fn virtual ~ILayer()
	  /// \brief Virtual destructor of the interface
	  ///
    virtual ~ILayer(){};
	///
	/// \fn virtual std::vector<std::unique_ptr<ITile>> const &operator[](int n) const = 0
	/// \brief Operator to access to a line of the layer
	///
    virtual std::vector<std::unique_ptr<ITile>> const &operator[](int n) const = 0;
	///
	/// \fn virtual size_t getWidth() const = 0
	/// \brief Get the width of the layer
	///
    virtual size_t getWidth() const = 0;
	///
	/// \fn virtual size_t getHeight() const = 0
	/// \brief Get the height of the layer
	///
    virtual size_t getHeight() const = 0;
  };
}

#endif // !ILAYER_HPP_
