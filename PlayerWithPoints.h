#include "Player.h"
class PlayerWithPoints
{
private:
    Player              player;
    vector<int>    roundPoints;
    PointStruct         TotalScore;
public:
                PlayerWithPoints    (void);
    void        CountX              (void);
    void        CountPoints         (void);
    void        inputPlayer         (Player input)  { player = input;};
    void        AddPoint            (int point)     {roundPoints.emplace_back(point);};
    void        Changename          (string input)  {player.inputName(input);};
    string      Getname             (void)          {return player.getname();};
    void        Changeid            (size_t input)  {player.inputId(input);};
    size_t      Getid               (void)          {return player.getid();}; 
    PointStruct GetPoints(void)                     {return TotalScore;};
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
        TotalScore.totalPoints = count;
}
    

void PlayerWithPoints::CountX(void){
int count =0;
    for(int point : roundPoints){
        if (point == 11)
        {
            count++;
        }
        
    }
    TotalScore.total_x = count;
}