#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

class ScoreManager
{
private:
    int roundcount, arrowcount; 
public:
    ScoreManager(int arrows, int rounds);
    
};

ScoreManager::ScoreManager(int arrows, int rounds)
{
    roundcount = rounds;
    arrowcount = arrows;

}






#endif