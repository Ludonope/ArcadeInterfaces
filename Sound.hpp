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

        Sound(unsigned int _id, SoundMode _mode = UNIQUE, SoundType _type = MUSIC, float _volume = 50.0f);
    };

}

#endif // !SOUND_HPP_
