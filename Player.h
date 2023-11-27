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
//            Player(string InputName);
    string  getname();
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
            PlayerWithPoints (void);
    void    CountX          (void);
    void    CountPoints     (void);
    void    inputPlayer     (Player input)  { player = input;};

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