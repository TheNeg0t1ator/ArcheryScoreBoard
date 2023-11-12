#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector>


class game
{
private:
    int     roundCount;
    int     arrowCount;
    bool    gameDone;
    int     roundCounter;
 
public:
            game(int Arrows, int );
    int     getrounds(){return roundCount;};
    int     getarrow(){return arrowCount;};
    
};

game::game(int Arrows, int rounds)
{
    roundCount = rounds;
    arrowCount = Arrows;
}


#endif