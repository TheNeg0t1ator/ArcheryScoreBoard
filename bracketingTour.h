#ifndef BRACKETINGTOUR_H
#define BRACKETINGTOUR_H

#include "tournament.h"
class BracketingTour: public Tournament
{
    private:

    public:
    int     InitializeTour  ();
    int     DoTour          ();
};



#endif