#include "Headers.h"
using namespace std;



int main(void){
    RoundStruct GameRounds;
    GameRounds = Askrounds();
    cout << "Welcome to the ASB." << endl;
    system("cls");

    game Mygame(GameRounds.Arrows,GameRounds.Rounds);

    Player * Jeff = new Player("test");
    Mygame.addPlayer(Jeff);
    
    ScoreManager test(GameRounds.Arrows,GameRounds.Rounds);

    for (int i = 0; i < GameRounds.Rounds; i++)
    {    
        for (int i = 0; i < GameRounds.Arrows; i++)
        {
            int addscore = 0;
            cout << "Add score: ";
            cin >> addscore;
            test.Addpoint(addscore);
            system("cls");
        }
    }
    cout << "total points: " << test.CountPoints();

    
    return 0;
}