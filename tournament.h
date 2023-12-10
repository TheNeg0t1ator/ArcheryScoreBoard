#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "game.h"
#include "BaseGameclass.h"
using namespace std;


class Tournament
{
private:
    vector<game *>  gamelist;
    bool            TourEnd = 0;
    int             addPoints       (vector<game *> Games); 
    int             countPoints     (vector<game *> Games); 
    int             sortGames       (vector<game *> Games); 
    int             createGames     (vector<game *> Games);
    int             eliminatePlayers(vector<game *> Games);
    int             ScoreCompare    (PlayerWithPoints & inputA, PlayerWithPoints & inputB);
    void            SortGames       (vector<game *>& input);
    int             PointCompare    (uint16_t a, uint16_t b);
public:
                    Tournament      (){};
                    ~Tournament     (){};
    vector<game *>  getgameList     (){return gamelist;};
    virtual int     InitializeTour  ();
    virtual int     DoTour          ();
    int             Addplayer       (string name);
};


#endif
