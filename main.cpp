#include "Headers.h"
#include "game.h"
using namespace std;




int main(void){
    cout << "Welcome to the ASB." << endl;
    system("cls");
    RoundStruct GameRounds = Askrounds();
    game Mygame(GameRounds);

    Player Jeff;
    Mygame.addPlayer(Jeff);


    
    return 0;
}