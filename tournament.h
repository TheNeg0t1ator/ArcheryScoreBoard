#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "game.h"

class Tournament
{
private:
    std::vector<game *> gamelist;
public:
    Tournament();
};

Tournament::Tournament()
{
}

#endif
