#pragma once

#ifndef HEADER_H
#define HEADER_H

#include <string>
using namespace std;

class Build
{
public:
    static const int ROWS = 8;
    static const int COLS = 8;
    int currentRow, currentCol;

    void run(string arr[][COLS], int, int);
    void restart(string arr[][COLS], int currentRow, int currentCol);
    bool withinBounds(int row, int col);
    void printMovePosition(int row, int col, string option, string arr[][COLS]);
    void displayBoard(string arr[][COLS], int row, int col);
    void createBoard(string arr[][COLS]);
    void gettingUserNextMove(int currentRow, int currentCol, string arr[][COLS]);
    void legalMoves(string arr[][COLS], int currentRow, int currentCol);

    void setRow(int testR);
    void setCol(int testC);
    int getRow();
    int getCol();
};

#endif

