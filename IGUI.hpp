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
	  virtual IComponent const &at(std::size_t n) const = 0;
  };
}

#endif // !IGUI_HPP_
