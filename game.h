#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector>
#include "Player.h"
#include "BaseGameclass.h"

typedef struct{
    Player player;
    std::vector<int> points;
}playerwithpoints;

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