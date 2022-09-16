#pragma once

#include <iostream>
#include <string>
#include "Build.h"

using namespace std;

void Build::legalMoves(string arr[][COLS], int currentRow, int currentCol) {
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            arr[r][c] = "[ ]";
        }
    }
    cout << "Your current position on the board is [" << currentRow << "][" << currentCol << "] \n";
    arr[currentRow][currentCol] = "[X]";

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
    cout << "For this position legal moves are:\n";

    row = currentRow - 2;
    col = currentCol + 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }
    row = currentRow - 1;
    col = currentCol + 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }

    row = currentRow + 1;
    col = currentCol + 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }
    row = currentRow + 2;
    col = currentCol + 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }

    row = currentRow + 2;
    col = currentCol - 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }
    row = currentRow + 1;
    col = currentCol - 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }

    row = currentRow - 1;
    col = currentCol - 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }
    row = currentRow - 2;
    col = currentCol - 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row << "][" << col << "] or \n";
        arr[row][col] = "[L]";
    }

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
