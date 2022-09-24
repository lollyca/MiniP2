#pragma once

#ifndef HEADER_H
#define HEADER_H

#include <string>
using namespace std;

class Build
{
    static const int ROWS = 8;
    static const int COLS = 8;
    string arr[ROWS][COLS];
    int currentRow, currentCol;
public:

    void legalMoves();
    void restart();
    bool withinBounds(int row, int col);
    void printMovePosition(int row, int col, string option);
    void displayBoard();
    void createBoard();
    void showInitialPosition();
    void continueGame();
};

#endif

