#include "tournament.h"

void Tournament::SortGames(vector<game *>& input){
    game * GameToSort = input[0];

    int i, j, min_index;
    for(i= 0; i < GameToSort->players.size()-1; i++){
        min_index = i;
        for(j =i+1; j < GameToSort->players.size();j++){
            if(ScoreCompare(GameToSort->players[min_index], GameToSort->players[j]) == 1);
            
        }
        if(min_index != i)
            swap(input[min_index], input[i]);
    }
}

int  Tournament::ScoreCompare(PlayerWithPoints & inputA, PlayerWithPoints & inputB){
    PointStruct pointA = inputA.GetPoints();
    PointStruct pointB = inputB.GetPoints();
    int compare = PointCompare(pointA.totalPoints, pointB.totalPoints);
    if(compare != 0){
        return compare;
    }else{
        return PointCompare(pointA.total_x, pointB.total_x);
    } 

    return 0;
}


int Tournament::PointCompare(uint16_t a = 0, uint16_t b = 0){
    if (a > b){
        return 1;
    }else if (a = b){
        return 0;
    }else if (a < b){
        return -1;
    }
    return 0;
}

int Tournament::addPoints(std::vector<game *> Games){
    size_t gamecount = Games.size();
    
    for (game *i: Games)
    {
        int roundcount = i->getrounds();
        for (int j = 0; j < roundcount; j++)
        {
            
            for (PlayerWithPoints k: i->players)
            {
                k.AddPoint(1);
            }
        }
    }
}


