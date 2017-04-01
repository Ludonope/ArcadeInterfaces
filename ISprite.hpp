//
// ISprite.hpp for arcade in /home/brout_m/rendu/cpp/ArcadeInterfaces
//
// Made by brout_m
// Login   <marc.brout@epitech.eu>
//
// Started on  Fri Mar 31 13:43:50 2017 brout_m
// Last update Sat Apr  1 19:59:58 2017 Ludovic Petrenko
//

#ifndef ISPRITE_HPP_
# define ISPRITE_HPP_

# include <string>

namespace arcade
{
  ///
  /// \class ISprite
  /// \brief Interface to use in order to generate the sprite loading list
  ///
  class ISprite
  {
  public:
    ///
    /// \fn virtual ~ISprite()
    /// \brief virtual destructor
    ///
    virtual ~ISprite() {};

    ///
    /// \fn virtual size_t spritesCount() const = 0
    /// \brief returns the numbers of sprites
    ///
    virtual size_t spritesCount() const = 0;

    ///
    /// \fn virtual std::string getGraphicPath(size_t id) const = 0
    /// \brief generates on-the-fly the path to the sprite at position pos to load
    ///
    virtual std::string getGraphicPath(size_t pos) const = 0;

    ///
    /// \fn virtual std::string const& getAscii() const = 0
    /// \brief returns the ascii character at position pos from the animation sequence
    ///
    virtual char getAscii(size_t pos) const = 0;
  };
}

#endif // !ISPRITE_HPP_
