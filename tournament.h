#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "game.h"
#include "BaseGameclass.h"
using namespace std;


class Tournament
{
private:
    vector<game *>          gamelist;
    bool                    TourEnd = 0;
public:
                            Tournament      ();
    virtual vector<game *>  getgameList     (){return gamelist;};
    virtual int             InitializeTour  ();
    virtual int             DoTour          ();
    virtual int             Addplayer       (string name);
    void                    SortGames       (vector<game *>& input);
    int                     ScoreCompare    (PlayerWithPoints & inputA, PlayerWithPoints & inputB);
    int                     PointCompare    (uint16_t a, uint16_t b);
    int                     addPoints       (std::vector<game *> Games);
    int                     countPoints     (std::vector<game *> Games);
    int                     sortGames       (std::vector<game *> Games);
    int                     createGames     (std::vector<game *> Games);
    int                     eliminatePlayers(std::vector<game *> Games);

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












class RankingTour: public Tournament
{
private:
    
public:
    int     InitializeTour  ();
    int     DoTour ();
    int     Addplayer       (string name);
};

int RankingTour::DoTour(){
    //* Insert code here to create the list for pre-tournament rankings`
    vector<game *> GameList;
    addPoints( GameList);
    countPoints(GameList);
    sortGames(GameList);

    
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
    int DoTour();
};

int BracketingTour::DoTour(){
    //* Insert code here to create the list for bracketing rankings
    // check for buy.
    
}
int BracketingTour::InitializeTour(){
    //* Insert code here to initialize bracketing rankings
}

#endif
