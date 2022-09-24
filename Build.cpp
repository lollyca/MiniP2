#pragma once
#include <iostream>
#include <string>
#include "Build.h"


using namespace std;

void Build::legalMoves() {

    int row = 0;
    int col = 0;
    
    cout << "\n";
    cout << "For this position legal moves are:\n";

    // to move up
    row = currentRow - 2;
    col = currentCol + 1;
    printMovePosition(row, col, "1");

    row = currentRow - 1;
    col = currentCol + 2;
    printMovePosition(row, col, "2");
    
    // to move right
    row = currentRow + 1;
    col = currentCol + 2;
    printMovePosition(row, col, "3");

    row = currentRow + 2;
    col = currentCol + 1;
    printMovePosition(row, col, "4");

    // to move down
    row = currentRow + 2;
    col = currentCol - 1;
    printMovePosition(row, col, "5");

    row = currentRow + 1;
    col = currentCol - 2;
    printMovePosition(row, col, "6");

    // to move left
    row = currentRow - 1;
    col = currentCol - 2;
    printMovePosition(row, col, "7");

    row = currentRow - 2;
    col = currentCol - 1;
    printMovePosition(row, col, "8");

    // Show the board with all legal moves from the current position
    // Legal moves will be indicated as numbers
    cout << "\n";
    displayBoard();


    if (withinBounds(currentRow,currentCol))
    {
        cout << "Your current position on the board is [" << currentRow << "][" << currentCol << "]\n";
    }
}

void Build::restart() {
    showInitialPosition();
}

bool Build::withinBounds(int row, int col)
{
    return row >= 0 && row < 8 && col >= 0 && col < 8;
}

void Build::printMovePosition(int row, int col, string option)
{
    if (withinBounds(row,col))
    {
        cout << option << " -- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[" + option + "]";
    }
}

void Build::displayBoard() {
    cout << "  0  1  2  3  4  5  6  7\n";
    for (int r = 0; r < ROWS; r++)
    {
        cout << r;
        for (int c = 0; c < COLS; c++)
        {
                cout << arr[r][c];
        }
        cout << endl;
    }
    
}

void Build::createBoard() {
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            arr[r][c] = "[ ]";
        }
    }
    arr[row][col] = "[X]";
}

void Build::showInitialPosition() {
    createBoard();

    cout << "Your current position on the board is [" << row << "][" << col << "] \n";

    //Show the current position on the board
    displayBoard();
}

void Build::continueGame() {
    //GETTING USER CHOICE:
    const int MOVE1 = 1, MOVE2 = 2, MOVE3 = 3, MOVE4 = 4, MOVE5 = 5, MOVE6 = 6, MOVE7 = 7, MOVE8 = 8;
    int choice;

    cout << "\n";
    cout << "What is your next move? ---> ";
    cin >> choice;
    cout << "\n";

    switch (choice)
    {
    case MOVE1:

        currentRow -= 2;
        currentCol += 1;

        break;

    case MOVE2:
        currentRow -= 1;
        currentCol += 2;
        break;

    case MOVE3:
        currentRow += 1;
        currentCol += 2;
        break;

    case MOVE4:
        currentRow += 2;
        currentCol += 1;
        break;

    case MOVE5:
        currentRow += 2;
        currentCol -= 1;
        break;

    case MOVE6:
        currentRow += 1;
        currentCol -= 2;
        break;

    case MOVE7:
        currentRow -= 1;
        currentCol -= 2;
        break;

    case MOVE8:
        currentRow -= 2;
        currentCol -= 1;
        break;

    }
}