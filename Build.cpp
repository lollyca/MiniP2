#pragma once

#include <iostream>
#include <string>
#include "Build.h"

using namespace std;

void Build::legalMoves(string arr[][COLS], int currentRow, int currentCol) {
    
    //Initialize array with empty spaces
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
    int row, col;
    
    cout << "\n";
    cout << "For this position legal moves are:\n";

    // to move up
    row = currentRow - 2;
    col = currentCol + 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "1 -- UP A ------ board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }
    row = currentRow - 1;
    col = currentCol + 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "2 -- UP B ------ board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }

    // to move right
    row = currentRow + 1;
    col = currentCol + 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "3 -- RIGHT A --- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }
    row = currentRow + 2;
    col = currentCol + 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "4 -- RIGHT B --- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }

    // to move down
    row = currentRow + 2;
    col = currentCol - 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "5 -- DOWN A ---- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }
    row = currentRow + 1;
    col = currentCol - 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "6 -- DOWN B ---- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }

    // to move left
    row = currentRow - 1;
    col = currentCol - 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "7 -- LEFT A ---- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }
    row = currentRow - 2;
    col = currentCol - 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "8 -- LEFT B ---- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }


    // Show the board with all legal moves from the current position
    // Legal moves will be indicated as 'L'
    cout << "\n";
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
