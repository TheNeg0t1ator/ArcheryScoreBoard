#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player
{
private:
    string name;
    int playerid;
public:
            Player(string InputName);
    string  getname();
};

Player::Player(string InputName){name = InputName;};

string Player::getname(){return name;};


#endif //PLAYER_H