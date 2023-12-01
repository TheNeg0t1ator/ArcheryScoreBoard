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

void game::addPlayer(Player newplayer)
{
        PlayerWithPoints newclass;
        newclass.inputPlayer(newplayer);
        players.emplace_back(newclass);
}

void game::addPlayerName(string input)
{
        PlayerWithPoints newclass;
        hash<string> hasher;
        newclass.Changename(input);
        newclass.Changeid(hasher(input));
        players.emplace_back(newclass);
}


#endif