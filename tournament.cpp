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
    PointStruct pointA = inputA.GetPoints();//* getting the pointstructs
    PointStruct pointB = inputB.GetPoints();
    int compare = PointCompare(pointA.totalPoints, pointB.totalPoints);//* comparing for normal points
    if(compare != 0){//* if they aren't tied return
        return compare;
    }else{//* if they are tied check for the total x;
        return PointCompare(pointA.total_x, pointB.total_x);
    } 

    return 0;
}


int Tournament::PointCompare(uint16_t a = 0, uint16_t b = 0){
    if (a > b){
        return 1;//*  return if a is higher
    }else if (a = b){
        return 0;//*  return if a is equal
    }else if (a < b){
        return -1;//* return if a is lower
    }
    return 0;
}

int Tournament::addPoints(std::vector<game *> Games){
    size_t gamecount = Games.size();
    
    for (game *i: Games)//* checking every game in the gamelist
    {
        int roundcount = i->getrounds();
        for (int j = 0; j < roundcount; j++)//* looping every round
        {
            
            for (PlayerWithPoints k: i->players)//* do it for every player in playerlist
            {
                k.AddPoint(1);//* adding points (replace with actual input function)
            }
        }
    }
}


