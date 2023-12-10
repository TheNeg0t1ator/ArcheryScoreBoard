#ifndef PLAYER_H
#define PLAYER_H
#include "BaseGameclass.h"
#include <string>
#include <vector>
using namespace std;


class Player
{
private:
    string  name;
    size_t  playerid;
public:
//            Player(string InputName);
    string  getname     ();
    void    inputName   (string input)  {name = input;};  
    size_t  getid       (void)          {return playerid;};
    void    inputId     (size_t input)  {playerid = input;};
};

//Player::Player(string InputName){name = InputName;};

string Player::getname(){return name;};












#endif //PLAYER_H