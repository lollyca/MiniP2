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

    void legalMoves(string arr[][COLS], int, int);
    void restart(string arr[][COLS], int currentRow, int currentCol);
    bool withinBounds(int row, int col);
    void printMovePosition(int row, int col, string option, string arr[][COLS]);
};

#endif

