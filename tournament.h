#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "game.h"

void selectionSort(vector<game *>& input){
    int i, j, min_index;
    for(i= 0; i < input.size()-1; i++){
        min_index = i;
        for(j =i+1; j < input.size();j++){
            if(input[j] < input[min_index] )
            min_index = j;
            
        }
        if(min_index != i)
            swap(input[min_index], input[i]);
    }
}


class Tournament
{
private:
    std::vector<game *>     gamelist;
public:
                            Tournament      ();
    std::vector<game *>     getgameList     (){return gamelist;};
    virtual int             InitializeTour  ();
    virtual int             CreateGameLists ();
};

Tournament::Tournament()
{
}

class RankingTour: public Tournament
{
    private:

    public:
    int     InitializeTour  ();
    int     CreateGameLists ();
};

int RankingTour::CreateGameLists(){
    //* Insert code here to create the list for pre-tournament rankings
}
int RankingTour::InitializeTour(){
    //* Insert code here to initialize pre-tournament rankings
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
}
int BracketingTour::InitializeTour(){
    //* Insert code here to initialize bracketing rankings
}

#endif
