#include "Referee.h"
#include "Player.h"
#include "Move.h"

Referee::Referee(){}

Player *Referee::refGame(Player *player1, Player *player2)
{

    Move *move1 = player1->makeMove();
    Move *move2 = player2->makeMove();

    move1->compare(move2);

    if(move1->getFlag()==1){
        return player1;
    }
    else if(move1->getFlag()==2)return nullptr;
    else return player2;
}
