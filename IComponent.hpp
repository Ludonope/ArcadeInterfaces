//
// Created by duhieu_b on 17/03/17.
//

#ifndef CPP_ARCADE_ICOMPONENT_HPP
#define CPP_ARCADE_ICOMPONENT_HPP

#include <string>
#include "GameState.hpp"
#include "Color.hpp"

namespace arcade
{
  ///
  /// \class IComponent
  /// \brief Interface used to manage GUI components
  ///
    class IComponent
    {
    public:
      ///
      /// \fn virtual ~IComponent()
      /// \brief Virtual destructor of the interface
      ///
        virtual ~IComponent(){};

      ///
      /// \fn virtual double getX() const = 0
      /// \brief Get the X position (between 0.0 and 1.0)
      ///
      virtual double getX() const = 0;
      ///
      /// \fn virtual double getY() const = 0
      /// \brief Get the Y position (between 0.0 and 1.0)
      ///
      virtual double getY() const = 0;

      ///
      /// \fn virtual double getWidht() const = 0
      /// \brief Get the component's width (between 0.0 and 1.0)
      ///
      virtual double getWidth() const = 0;
      ///
      /// \fn virtual double getHeight() const = 0
      /// \brief Get the component's height (between 0.0 and 1.0)
      ///
      virtual double getHeight() const = 0;

      ///
      /// \fn virtual size_t getBackgroundId() const = 0
      /// \brief Get the id of the background sprite
      ///
      virtual size_t getBackgroundId() const = 0;
      ///
      /// \fn virtual Color getBackgroundColor() const = 0
      /// \brief Get the color of the background
      ///
      virtual Color getBackgroundColor() const = 0;
      ///
      /// \fn virtual std::string const &getText() const = 0
      /// \brief Get the text value
      ///
      virtual std::string const &getText() const = 0;

      ///
      /// \fn virtual void setClicked() = 0
      /// \brief Way of the lib to tell a component it was clicked
      ///
      virtual void setClicked() = 0;
    };
}

#endif //CPP_ARCADE_ICOMPONENT_HPP
