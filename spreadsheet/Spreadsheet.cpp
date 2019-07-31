//
// Created by houyi on 2019/7/30.
//

#include "Spreadsheet.h"

Spreadsheet::Spreadsheet(int inWidth, int inHeight) {
    mCells = new SpreadsheetCell *[width];
    for (int i = 0; i < inWidth; ++i) {
        mCells[i] = new SpreadsheetCell[mHeight];
    }
}

void Spreadsheet::setCellAt(int x, int y, const SpreadsheetCell &cell) {
    if (!inRange(x, mWidth) || inRange(y, mHeight)) {
        throw std::out_of_range("params out of range");
    }
    mCells[x][y] = cell;

}

SpreadsheetCell &Spreadsheet::getCellAt(int x, int y) {
    if (!inRange(x, mWidth) || !inRange(y, mHeight)) {
        throw std::out_of_range("params out of range");
    }
    return mCells[x][y];
}

bool Spreadsheet::inRange(int val, int upper) {
    if (val < 0 || val >= upper) {
        return false;
    }
    return true;
}

Spreadsheet::~Spreadsheet() {
    for (int i = 0; i < mWidth; ++i) {
        delete[] mCells[i];
    }
    delete[] mCells;
    mCells = nullptr;
}

