#include <iostream>
#include <string>
#include "Build.H"

using namespace std;

int main()
{
    int userRow, userCol; //local variables

    Build player; //Define an instance of the Build Class

    cout << "Your current position on the board (input first row, then column): ";

    // 1. get input
    cin >> userRow >> userCol;
    

    // 2. show position on board
    player.showInitialPosition();

    // 3. show legal moves
    player.legalMoves(userRow, userCol);

    // 4. ask for next position
    int menuChoice;
    do {
        cout << "Enter 1 to keep playing this game" << endl;
        cout << "Enter 2 to start new game" << endl;
        cout << "Enter 3 to exit" << endl;
        cin >> menuChoice;

        switch (menuChoice)
        {
        case 1:
            player.continueGame();
            break;

        case 2:
            player.restart();
            break;

        case 3:
            cout << "Thank you for playing!";
            break;
        }
    }
    while (menuChoice != 3)

    return 0;
}