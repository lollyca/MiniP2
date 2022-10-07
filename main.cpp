#include <iostream>
#include <string>
#include "Build.H"

using namespace std;

int main()
{
    int rowMain, colMain, gameMenu;
    const int OP1 = 1, OP2 = 2;
    string board[8][8];

    cout << "Your current position on the board (input first row, then column): ";
    cin >> rowMain >> colMain;
    Build player; //Define an instance of the Build Class


    player.run(board, rowMain, colMain);

    do {
        cout << "\n";
        cout << "\t Menu" << endl;
        cout << "Press 1 to keep playing this game" << endl;
        cout << "Press 2 to restart the game" << endl;
        cout << "Press 3 to quit" << endl;
        cout << "---> ";
        cin >> gameMenu;

        switch (gameMenu)
        {
        case OP1:
            //GETTING USER NEXT MOVE:
            player.gettingUserNextMove(rowMain, colMain, board);

            break;

        case OP2:
            int rowRestart, colRestart;
            cout << "Your current position on the board (input first row, then column): ";
            cin >> rowRestart >> colRestart;
            player.createBoard(board);
            board[rowRestart][colRestart] = "[X]";
            player.displayBoard(board, rowRestart, colRestart);
            player.legalMoves(board, rowRestart, colRestart);
            break;
        }
    } while (gameMenu != 3);

    return 0;
}