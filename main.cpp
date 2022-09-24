#include <iostream>
#include <string>
#include "Build.H"

using namespace std;

int main()
{
    string board[8][8]; //it creates 
    int rowMain, colMain; //local variables

    cout << "Your current position on the board (input first row, then column): ";
    cin >> rowMain >> colMain;

    Build player; //Define an instance of the Build Class

    player.run(board, rowMain, colMain);



    return 0;
}