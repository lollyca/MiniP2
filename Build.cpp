#pragma once

#include <iostream>
#include <string>
#include "Build.h"

using namespace std;

void Build::run(string arr[][COLS], int currentRow, int currentCol) {
    
   /* 
   const int MOVE1 = 1, MOVE2 = 2, MOVE3 = 3, MOVE4 = 4, MOVE5 = 5, MOVE6 = 6, MOVE7 = 7, MOVE8 = 8;
   int choice;
   */

    //Initialize array with empty spaces
    createBoard(arr);
    cout << "Your current position on the board is [" << currentRow << "][" << currentCol << "] \n";

    //Show the current position on the board
    arr[currentRow][currentCol] = "[X]";
    displayBoard(arr, currentRow, currentCol);

    
    int row = 0;
    int col = 0;
    
    cout << "\n";
    cout << "For this position legal moves are:\n";

    // to move up
    row = currentRow - 2;
    col = currentCol + 1;
    printMovePosition(row, col, "1", arr);

    row = currentRow - 1;
    col = currentCol + 2;
    printMovePosition(row, col, "2", arr);
    
    // to move right
    row = currentRow + 1;
    col = currentCol + 2;
    printMovePosition(row, col, "3", arr);

    row = currentRow + 2;
    col = currentCol + 1;
    printMovePosition(row, col, "4", arr);

    // to move down
    row = currentRow + 2;
    col = currentCol - 1;
    printMovePosition(row, col, "5", arr);

    row = currentRow + 1;
    col = currentCol - 2;
    printMovePosition(row, col, "6", arr);

    // to move left
    row = currentRow - 1;
    col = currentCol - 2;
    printMovePosition(row, col, "7", arr);

    row = currentRow - 2;
    col = currentCol - 1;
    printMovePosition(row, col, "8", arr);

    // Show the board with all legal moves from the current position represented by numbers
    cout << "\n";
    displayBoard(arr, row, col);

    //GETTING USER NEXT MOVE:
    /*
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
    createBoard(arr);
    arr[currentRow][currentCol] = "[X]";
    displayBoard(arr, currentRow, currentCol);
    */
    gettingUserNextMove(currentRow, currentCol, arr);
    cout << "\n";
    cout << "For this position legal moves are:\n";


    //RECALCULATING
    /*
    // to move up
    currentRow -= 2;
    currentCol += 1;
    printMovePosition(row, col, "1", arr);

    currentRow -= 1;
    currentCol += 2;
    printMovePosition(row, col, "2", arr);

    // to move right
    currentRow += 1;
    currentCol += 2;
    printMovePosition(row, col, "3", arr);

    currentRow += 2;
    currentCol += 1;
    printMovePosition(row, col, "4", arr);

    // to move down
    currentRow += 2;
    currentCol -= 1;
    printMovePosition(row, col, "5", arr);

    currentRow += 1;
    currentCol -= 2;
    printMovePosition(row, col, "6", arr);

    // to move left
    currentRow -= 1;
    currentCol -= 2;
    printMovePosition(row, col, "7", arr);

    currentRow -= 2;
    currentCol -= 1;
    printMovePosition(row, col, "8", arr);


    // Show the board with all legal moves from the current position
    // Legal moves will be indicated as 'L'
    cout << "\n";
    displayBoard(arr, row, col);

    */
}





void Build::restart(string arr[][COLS], int currentRow, int currentCol) {
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            arr[r][c] = "[ ]";
        }
    }
    cout << "Your current position on the board is [" << currentRow << "][" << currentCol << "] \n";
    arr[currentRow][currentCol] = "[X]";

    //Show the current position on the board
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

bool Build::withinBounds(int row, int col)
{
    return row >= 0 && row < 8 && col >= 0 && col < 8;
}

void Build::printMovePosition(int row, int col, string option, string arr[][COLS])
{
    if (withinBounds(row,col))
    {
        cout << option << " -- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[" + option + "]";
    }
}

void Build::displayBoard(string arr[][COLS], int row, int col) {
    //arr[row][col] = "[X]";

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

void Build::createBoard(string arr[][COLS]) {
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            arr[r][c] = "[ ]";
        }
    }
}

void Build::gettingUserNextMove(int currentRow, int currentCol, string arr[][COLS]) {
    const int MOVE1 = 1, MOVE2 = 2, MOVE3 = 3, MOVE4 = 4, MOVE5 = 5, MOVE6 = 6, MOVE7 = 7,MOVE8 = 8;
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
    createBoard(arr);
    arr[currentRow][currentCol] = "[X]";
    displayBoard(arr, currentRow, currentCol);
}

/*
void Build::legalMoves(int currentRow, int currentCol, string arr[][COLS]) {

    cout << "\n";
    cout << "For this position legal moves are:\n";

    // to move up
    row = currentRow - 2;
    col = currentCol + 1;
    printMovePosition(row, col, "1", arr);

    row = currentRow - 1;
    col = currentCol + 2;
    printMovePosition(row, col, "2", arr);

    // to move right
    row = currentRow + 1;
    col = currentCol + 2;
    printMovePosition(row, col, "3", arr);

    row = currentRow + 2;
    col = currentCol + 1;
    printMovePosition(row, col, "4", arr);

    // to move down
    row = currentRow + 2;
    col = currentCol - 1;
    printMovePosition(row, col, "5", arr);

    row = currentRow + 1;
    col = currentCol - 2;
    printMovePosition(row, col, "6", arr);

    // to move left
    row = currentRow - 1;
    col = currentCol - 2;
    printMovePosition(row, col, "7", arr);

    row = currentRow - 2;
    col = currentCol - 1;
    printMovePosition(row, col, "8", arr);
}
*/