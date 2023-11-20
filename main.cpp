#include "Headers.h"
using namespace std;

int main(void){
    int ArrowCount;
    int Rounds;
    cout << "Welcome to the ASB." << endl;

    cout << "How many arrows per round? " << endl << ": ";
    cin >> ArrowCount;
    cout << "How many Rounds? " << endl << ": ";
    cin >> Rounds;
    system("cls");

    game Mygame(ArrowCount,Rounds);

    Player * Jeff = new Player("test");
    Mygame.addPlayer(Jeff);

    ScoreManager test(ArrowCount,Rounds);

    for (int i = 0; i < Rounds; i++)
    {    
        for (int i = 0; i < ArrowCount; i++)
        {
            int addscore = 0;
            cout << "Add score: ";
            cin >> addscore;
            test.Addpoint(addscore);
            system("cls");
        }
    }
    cout << "total points: " << test.CountPoints();

    ScoreManager(1,2);


    
    return 0;
}