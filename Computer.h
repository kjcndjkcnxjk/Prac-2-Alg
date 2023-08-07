#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <iostream>
#include <string>


class Computer : public Player
{
public:
    Computer();
    Computer(std::string name);
    Move *makeMove();

private:
};

#endif