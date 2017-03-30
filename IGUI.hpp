#ifndef IGUI_HPP_
#define IGUI_HPP_

#include <string>
#include <memory>
#include <vector>
#include "IComponent.hpp"

namespace arcade
{
  ///
  /// \class IGUI
  /// \brief Interface representing a GUI
  ///
  class IGUI
  {
  public:
    ///
    /// \fn virtual ~IGUI()
    /// \brief Virtual destructor of the interface
    ///
    virtual ~IGUI() {};

    // Number of IComponent
    ///
    /// \fn virtual std::size_t size() const = 0
    /// \brief Return the number of elements
    ///
    virtual std::size_t size() const = 0;
    ///
    /// \fn virtual IComponent &at(std::size_t n) = 0
    /// \brief Access to the n element
    ///
    virtual IComponent &at(std::size_t n) = 0;
  };
}

#endif // !IGUI_HPP_
