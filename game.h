#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector>
#include "Player.h"
#include "BaseGameclass.h"
using namespace std;



class game : public basegameclass
{
public:
    void    addPlayer   (Player newplayer);  
    //void    Addpoint    (int point)             {roundPoints.emplace_back(point);};  
    game(RoundStruct input): basegameclass(input){}
    
private:
    bool                    gameDone;
    int                     roundCounter;
    std::vector<PlayerWithPoints>   players;
    int                     CountX      (void);
    int                     CountPoints (void);
};

void game::addPlayer(Player newplayer)
{
        PlayerWithPoints newclass;
        newclass.inputPlayer(newplayer);
        players.emplace_back(newclass);
}



#endif