#ifndef IMENU_HPP_
#define IMENU_HPP_

class IMenu
{
public:
  virtual ~IMenu(){};

  virtual size_t size() = 0;
  virtual IMenuItem &operator[](size_t i) = 0;
  virtual void addItem(IMenuItem &item) = 0;
  virtual void insertItem(size_t position, IMenuItem &item) = 0;
  virtual void removeItem(size_t position) = 0;
};

#endif // !IMENU_HPP_