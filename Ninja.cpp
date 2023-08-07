#include "Ninja.h"

Ninja::Ninja():Move("Ninja"){}

void Ninja::compare(Move* move){
    if(move->getName()=="Zombie"||move->getName()=="Pirate"){
        flag=1;
    }
}