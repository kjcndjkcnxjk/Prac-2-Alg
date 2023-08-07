#include "Player.h"
#include "Move.h" 
#include "Rock.h" 
#include "Scissors.h" 
#include "Paper.h" 
#include "Monkey.h" 
#include "Pirate.h" 
#include "Zombie.h" 
#include "Ninja.h" 
#include "Robot.h" 


Player::Player(string name):name(name){}

string Player::getName()
{
    return name;
}

Move *Player::returnMove(string moveName)
{
    if(moveName=="Rock"){
        return new Rock();
    }
    else if(moveName=="Paper"){
        return new Paper();
    }
    else if(moveName=="Scissors"){
        return new Scissors();
    }
    else if(moveName=="Robot"){
        return new Robot();
    }
    else if(moveName=="Monkey"){
        return new Monkey();
    }
    else if(moveName=="Pirate"){
        return new Pirate();
    }
    else if(moveName=="Ninja"){
        return new Ninja();
    }
    else if(moveName=="Zombie"){
        return new Zombie();
    }
    return nullptr;
}
