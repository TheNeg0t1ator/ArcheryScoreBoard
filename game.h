#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector>
#include "Player.h"
#include "BaseGameclass.h"

class game : public basegameclass
{
public:
    void    addPlayer(Player * newplayer){players.push_back(newplayer);};    
    game(RoundStruct input): basegameclass(input){}
private:
    bool    gameDone;
    int     roundCounter;
    std::vector<Player *> players;
};




#endif