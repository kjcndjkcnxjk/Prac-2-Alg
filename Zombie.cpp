#include "Zombie.h"

Zombie::Zombie():Move("Zombie"){}

void Zombie::compare(Move* move){
    if(move->getName()=="Pirate"||move->getName()=="Monkey"){
        flag=1;
    }
}