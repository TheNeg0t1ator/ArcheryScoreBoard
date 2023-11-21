#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

#include <iostream>
#include <vector>
using namespace std;
#include "BaseGameclass.h"

class ScoreManager : public basegameclass
{
private:

    int roundcount, arrowcount; 
    vector<int> roundPoints;
public:
    ScoreManager(RoundStruct input): basegameclass(input){setRoundInfo(input);};
    void Addpoint(int point){roundPoints.emplace_back(point);};
    int CountX(void);
    int CountPoints(void);
};




int ScoreManager::CountPoints(void){
int count =0;
    for(int point : roundPoints){
        if (point == 11)
        {
            count += 10;
        }else
            count += point;
        }
        return count;
}
    

int ScoreManager::CountX(void){
int count =0;
    for(int point : roundPoints){
        if (point == 11)
        {
            count++;
        }
        
    }
    return count;
}


#endif