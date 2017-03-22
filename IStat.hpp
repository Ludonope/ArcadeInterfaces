#ifndef ISTAT_HPP_
#define ISTAT_HPP_

#include <string>

namespace arcade
{
	///
	/// \class IStat
	/// \brief Interface representing a player stat
	///
  class IStat
  {
  public:
	  ///
	  /// \fn virtual ~IStat()
	  /// \brief Virtual destructor of the interface
	  ///
    virtual ~IStat(){};

	///
	/// \fn virtual std::string const &getPseudo() const = 0
	/// \brief Get the pseudo of the player
	///
    virtual std::string const &getPseudo() const = 0;
    // We need to choose a time format, size_t, std::chrono, etc..
    // virtual size_t getTime() const = 0;
	///
	/// \fn virtual long getScore() const = 0
	/// \brief Get the player score
	///
    virtual long getScore() const = 0;
  };
}

#endif // !ISTAT_HPP_