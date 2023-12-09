#ifndef RANKINGTOUR_H
#define RANKINGTOUR_H
#include "tournament.h"

class RankingTour: public Tournament
{
private:
    
public:
    int     InitializeTour  ();
    int     DoTour ();
    int     Addplayer       (string name);
};

#endif