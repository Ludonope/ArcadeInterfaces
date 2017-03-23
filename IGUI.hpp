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
    /// \fn virtual IComponent const &at(std::size_t n) const = 0
    /// \brief Access to the n element
    ///
    virtual IComponent const &at(std::size_t n) const = 0;

    // To allow for ranged loop on it's components
    virtual std::vector<unique_ptr<IComponent>>::const_iterator begin() const = 0;
    virtual std::vector<IComponent *>::const_iterator end() const = 0;
  };
}

#endif // !IGUI_HPP_
