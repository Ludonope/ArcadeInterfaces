#ifndef ISTAT_HPP_
#define ISTAT_HPP_

class IStat
{
public:
  virtual IStat(std::string const &pseudo) = 0;
  virtual ~IStat(){};

  virtual std::string const &getPseudo() const = 0;
  virtual
};

#endif // !ISTAT_HPP_