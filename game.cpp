#include "game.h"

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