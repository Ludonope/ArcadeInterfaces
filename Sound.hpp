//
// Created by Pierre Bougon on 30/03/17.
//

#ifndef SOUND_HPP_
#define SOUND_HPP_

namespace arcade
{

    ///
    /// \enum SoundMode
    /// \brief Used to control the way sound is played
    ///
    enum SoundAction
    {
        UNIQUE, /// Sound played once
        REPEAT, /// Sound played indefinitly (common for musics)
        PAUSE, /// Pause a sound
        RESUME, /// Resume a sound
        STOP /// Stop completly a sound
    };

    ///
    /// \enum SoundType
    /// \brief Used to differenciate the sound type
    ///
    /// It might be very usefull with some sound libraries which need to know
    /// this type of differences
    ///
    enum SoundType
    {
        MUSIC, /// The sound is a music
        SOUND /// The sound is an normal sound
    };

    ///
    /// \struct SoundMode
    /// \brief Contain informations on the sound to play and the way of playing it
    ///
    struct Sound
    {
        ///
        /// \fn Sound(unsigned int id, SoundMode mode = UNIQUE, SoundType type = SOUND, float volume = 50.0f);
        /// \brief Constructor of a sound
        /// \param id Id du son à controller
        /// \param mode Mode du son
        /// \param type Type de son
        /// \param volume Volume du son
        Sound(unsigned int id, SoundAction mode = UNIQUE, SoundType type = SOUND, float volume = 50.0f);

        unsigned int	id; /// Id of the sound
        SoundAction	mode; /// Mode of the sound (control)
        SoundType       type; /// Type of the sound
        float           volume; /// Volume
    };

}

#endif // !SOUND_HPP_
