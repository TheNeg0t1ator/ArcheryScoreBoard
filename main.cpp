#include "Headers.h"
using namespace std;



int main(void){
    cout << "Welcome to the ASB." << endl;
    system("cls");
    RoundStruct GameRounds = Askrounds();
    game Mygame();

    Player * Jeff = new Player("test");
    Mygame().addPlayer(Jeff);
    
    ScoreManager test();

    for (int i = 0; i < GameRounds.Rounds; i++)
    {    
        for (int i = 0; i < GameRounds.Arrows; i++)
        {
            int addscore = 0;
            cout << "Add score: ";
            cin >> addscore;
            test().Addpoint(addscore);
            system("cls");
        }
    }
    cout << "total points: " << test().CountPoints();

    
    return 0;
}