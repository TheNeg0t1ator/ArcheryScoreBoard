#include "Headers.h"
#include "game.h"
using namespace std;




int main(void){
    cout << "Welcome to the ASB." << endl;
    system("cls");
    RoundStruct GameRounds = Askrounds();
    game Mygame(GameRounds);

    
    Mygame.addPlayerName("Jeff");


    cout << Mygame.players[0].Getname() << endl;
    
    return 0;
}