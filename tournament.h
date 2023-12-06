#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "game.h"
#include "BaseGameclass.h"



class Tournament
{
private:
    std::vector<game *>         gamelist;
    bool                        TourEnd = 0;
public:
                                Tournament      ();
    virtual std::vector<game *> getgameList     (){return gamelist;};
    virtual int                 InitializeTour  ();
    virtual int                 CreateGameLists ();
    virtual int                 Addplayer       (string name);
    void                        SortGames       (vector<game *>& input);
    int                         ScoreCompare    (PlayerWithPoints & inputA, PlayerWithPoints & inputB);
    int                         PointCompare    (uint16_t a, uint16_t b);

};


void Tournament::SortGames(vector<game *>& input){
    game * GameToSort = input[0];

    int i, j, min_index;
    for(i= 0; i < GameToSort->players.size()-1; i++){
        min_index = i;
        for(j =i+1; j < GameToSort->players.size();j++){
            if(ScoreCompare(GameToSort->players[min_index], GameToSort->players[j]) == 1)//GameToSort->players[j] < GameToSort->players[min_index]
            min_index = j;
            
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


int Tournament::PointCompare(uint16_t a, uint16_t b){
    if (a > b){
        return 1;
    }else if (a = b){
        return 0;
    }else if (a < b){
        return -1;
    }
    return 0;
}

class RankingTour: public Tournament
{
private:
    
public:
    int     InitializeTour  ();
    int     CreateGameLists ();
    int     Addplayer       (string name);
};

int RankingTour::CreateGameLists(){
    //* Insert code here to create the list for pre-tournament rankings
    
}
int RankingTour::InitializeTour(){
    //* Insert code here to initialize pre-tournament rankings

}

int RankingTour::Addplayer(string name){
    getgameList()[0]->addPlayerName(name);
}







class BracketingTour: public Tournament
{
    private:

    public:
    int InitializeTour();
    int CreateGameLists();
};

int BracketingTour::CreateGameLists(){
    //* Insert code here to create the list for bracketing rankings
    // check for buy.
    
}
int BracketingTour::InitializeTour(){
    //* Insert code here to initialize bracketing rankings
}

#endif
