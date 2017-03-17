#ifndef IGUI_HPP_
#define IGUI_HPP_

class IGUI
{
public:
  virtual ~IGUI() = 0;
  virtual size_t getScore() const = 0;
  virtual size_t getHp() const = 0;
};

#endif // !IGUI_HPP_