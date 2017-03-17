#ifndef IGUI_HPP_
#define IGUI_HPP_

namespace arcade
{
  class IGUI
  {
  public:
    virtual ~IGUI() = 0;
    virtual void createComponent(std::string const& name, TypeComponent) = 0;
    // NOT DEFINED YET
  };
}

#endif // !IGUI_HPP_
