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
    
    return 0;
}