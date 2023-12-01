#ifndef PLAYER_H
#define PLAYER_H

#include <string>
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


class PlayerWithPoints
{
private:
    Player              player;
    std::vector<int>    roundPoints;
    uint16_t            totalPoints;
    uint16_t            total_x;
public:
            PlayerWithPoints    (void);
    void    CountX              (void);
    void    CountPoints         (void);
    void    inputPlayer         (Player input)  { player = input;};
    void    AddPoint            (int point)     {roundPoints.emplace_back(point);};
    void    Changename          (string input)  {player.inputName(input);};
    string  Getname             (void)          {return player.getname();};
    void    Changeid            (size_t input)  {player.inputId(input);};
    size_t  Getid               (void)          {return player.getid();}; 

};





PlayerWithPoints::PlayerWithPoints (void){

}

void PlayerWithPoints::CountPoints(void){
int count =0;
    for(int point : roundPoints){
        if (point == 11)
        {
            count += 10;
        }else
            count += point;
        }
        totalPoints = count;
}
    

void PlayerWithPoints::CountX(void){
int count =0;
    for(int point : roundPoints){
        if (point == 11)
        {
            count++;
        }
        
    }
    total_x = count;
}









#endif //PLAYER_H