#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"
class Pirate : public Move
{
public:
    Pirate();
    void compare(Move *move);
};


#endif