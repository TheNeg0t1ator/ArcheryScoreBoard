#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector>
#include "Player.h"


class game
{
private:
    
	int     roundCount;
    int     arrowCount;
    bool    gameDone;
    int     roundCounter;
    std::vector<Player *> players;
 
public:
            game(int Arrows, int );
    int     getrounds(){return roundCount;};
    int     getarrow(){return arrowCount;};
    void    addPlayer(Player * newplayer){players.push_back(newplayer);};
};

game::game(int Arrows, int rounds)
{
    roundCount = rounds;
    arrowCount = Arrows;
}


#endif