//
// Created by Pierre Bougon on 30/03/17.
//

#include "Sound.hpp"

arcade::Sound::Sound(unsigned int id, SoundAction mode, SoundType type, float volume)
        : id(id), mode(mode), type(type), volume(volume)
{}
