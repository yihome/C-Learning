//
// Created by houyi on 2019/7/30.
//

#include "Spreadsheet.h"

int Spreadsheet::sCounter;

Spreadsheet::Spreadsheet(const Spreadsheet &src) : mTheApp(src.mTheApp) {
    copyFrom(src);
}

Spreadsheet &Spreadsheet::operator=(const Spreadsheet &rhs) {
    if (this == &rhs) {
        return *this;
    }
    for (int i = 0; i < mWidth; ++i) {
        delete[](mCells[i]);
    }
    delete[](mCells);
    mCells = nullptr;
    copyFrom(rhs);
    return *this;
}

void Spreadsheet::copyFrom(const Spreadsheet &src) {
    mWidth = src.mWidth;
    mHeight = src.mHeight;
    mCells = new SpreadsheetCell *[mWidth];
    for (int i = 0; i < mWidth; ++i) {
        mCells[i] = new SpreadsheetCell[mHeight];
    }
    for (int i = 0; i < mWidth; ++i) {
        for (int j = 0; j < mHeight; ++j) {
            mCells[i][j] = src.mCells[i][j];
        }
    }
}

Spreadsheet::Spreadsheet(const SpreadsheetApplication &theApp, int inWidth, int inHeight) :
        mWidth(inWidth < kMaxWidth ? inWidth : kMaxWidth),
        mHeight(inHeight < kMaxHeight ? inHeight : kMaxHeight),
        mTheApp(theApp) {
    mId = sCounter++;
    mCells = new SpreadsheetCell *[mWidth];
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

int Spreadsheet::getId() const {
    return mId;
}