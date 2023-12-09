#include "rankingTour.h"

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