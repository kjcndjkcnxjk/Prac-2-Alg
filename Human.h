#ifndef HUMAN_H
#define HUMAN_H

#include "Move.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

class Human : public Player
{
public:
    Human();
    Human(string name);
    Move *makeMove();

private:
};

#endif