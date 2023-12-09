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
    void    addPlayer       (Player newplayer); 
    void    addPlayerName   (string newplayer);
    //void    Addpoint    (int point)             {roundPoints.emplace_back(point);};  
    game(RoundStruct input): basegameclass(input){}
    std::vector<PlayerWithPoints>   players;
    
private:
    bool                    gameDone;
    int                     roundCounter;
};

#endif