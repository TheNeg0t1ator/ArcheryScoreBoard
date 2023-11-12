#include <iostream>
#include "game.h"
#include <string>
using namespace std;

int main(void){
    int arrowcount;
    int rounds;
    cout << "Welcome to the ASB." << endl;

    cout << "How many arrows per round? " << endl << ": ";
    cin >> arrowcount;
    cout << "How many rounds? " << endl << ": ";
    cin >> rounds;
    system("cls");

    game Mygame(arrowcount,rounds);

    


    return 0;
}