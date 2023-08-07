#ifndef ROCK_H
#define ROCK_H

#include "Move.h"
class Rock : public Move
{
public:
    Rock();
    void compare(Move *move);
};


#endif