#ifndef IGUI_HPP_
#define IGUI_HPP_

#include <string>
#include <vector>
#include "IComponent.hpp"

namespace arcade
{
  class IGUI
  {
  public:
	  virtual ~IGUI() {};

	  // Number of IComponent
	  virtual std::size_t size() const = 0;
	  virtual IComponent const &operator[](std::size_t n) const = 0;

	  // To allow for ranged loop on it's components
	  virtual std::vector<IComponent *>::const_iterator begin() const = 0;
	  virtual std::vector<IComponent *>::const_iterator end() const = 0;
  };
}

#endif // !IGUI_HPP_
