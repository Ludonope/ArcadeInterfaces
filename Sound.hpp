//
// Created by Pierre Bougon on 30/03/17.
//

#ifndef SOUND_HPP_
#define SOUND_HPP_

namespace arcade
{
    //TODO : DOC

    enum SoundMode
    {
        UNIQUE,
        REPEAT,
        PAUSE,
        RESUME
    };

    enum SoundType
    {
        MUSIC,
        SOUND
    };

    ///
    /// \fn SoundMode
    /// \brief Contain the id of the sound and the mode (unique or infinite)
    ///
    struct Sound
    {
        unsigned int	id;
        SoundMode		mode;
        SoundType       type;
        float           volume;

        Sound(unsigned int id, SoundMode mode = UNIQUE, SoundType type = SOUND, float volume = 50.0f);
    };

}

#endif // !SOUND_HPP_
