#pragma once

#include <iostream>
#include <string>
#include "Build.h"

using namespace std;

void Build::legalMoves(string arr[][COLS], int currentRow, int currentCol) {
    
    const int MOVE1 = 1, MOVE2 = 2, MOVE3 = 3, MOVE4 = 4, MOVE5 = 5, MOVE6 = 6, MOVE7 = 7,MOVE8 = 8;
    int choice;

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
        cout << "1 -- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[1]";
    }
    row = currentRow - 1;
    col = currentCol + 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "2 -- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[2]";
    }

    // to move right
    row = currentRow + 1;
    col = currentCol + 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "3 -- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[3]";
    }
    row = currentRow + 2;
    col = currentCol + 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "4 -- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[4]";
    }

    // to move down
    row = currentRow + 2;
    col = currentCol - 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "5 -- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[5]";
    }
    row = currentRow + 1;
    col = currentCol - 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "6 -- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[6]";
    }

    // to move left
    row = currentRow - 1;
    col = currentCol - 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "7 -- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[7]";
    }
    row = currentRow - 2;
    col = currentCol - 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "8 -- board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[8]";
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

    //GETTING USER CHOICE:
    cout << "\n";
    cout << "What is your next move? ---> ";
    cin >> choice;
    cout << "\n";

    switch (choice)
    {
    case MOVE1:

        row = currentRow - 2;
        col = currentCol + 1;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "Your current position on the board is [" << row << "][" << col << "]\n";
            arr[row][col] = "[X]";
        }
        break;

    case MOVE2:
        row = currentRow - 1;
        col = currentCol + 2;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "Your current position on the board is [" << row << "][" << col << "]\n";
            arr[row][col] = "[X]";
        }
        break;

    case MOVE3:
        row = currentRow + 1;
        col = currentCol + 2;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "Your current position on the board is [" << row << "][" << col << "]\n";
            arr[row][col] = "[X]";
        }
        break;

    case MOVE4:
        row = currentRow + 2;
        col = currentCol + 1;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "Your current position on the board is [" << row << "][" << col << "]\n";
            arr[row][col] = "[X]";
        }
        break;

    case MOVE5:
        row = currentRow + 2;
        col = currentCol - 1;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "Your current position on the board is [" << row << "][" << col << "]\n";
            arr[row][col] = "[X]";
        }
        break;

    case MOVE6:
        row = currentRow + 1;
        col = currentCol - 2;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "Your current position on the board is [" << row << "][" << col << "]\n";
            arr[row][col] = "[X]";
        }
        break;

    case MOVE7:
        row = currentRow - 1;
        col = currentCol - 2;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "Your current position on the board is [" << row << "][" << col << "]\n";
            arr[row][col] = "[X]";
        }
        break;

    case MOVE8:
        row = currentRow - 2;
        col = currentCol - 1;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "Your current position on the board is [" << row << "][" << col << "]\n";
            arr[row][col] = "[X]";
        }
        break;

    }
}
