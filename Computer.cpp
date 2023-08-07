#include "Computer.h"
#include "Player.h" 
#include "Rock.h" 
#include <iostream>


Computer::Computer():Player("Computer"){}

Computer::Computer(std::string name):Player(name){}

Move *Computer::makeMove()
{
    Move *randomMove = new Rock(); 

    return randomMove;
}
