#ifndef ISTAT_HPP_
#define ISTAT_HPP_

namespace arcade
{
  class IStat
  {
  public:
    virtual ~IStat(){};

    virtual std::string const &getPseudo() const = 0;
    // We need to choose a time format, size_t, std::chrono, etc..
    // virtual size_t getTime() const = 0;
    virtual long getScore() const = 0;
  };
}

#endif // !ISTAT_HPP_