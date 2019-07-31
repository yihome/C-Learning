//
// Created by houyi on 2019/7/30.
//

#ifndef C__LEARNING_SPREADSHEET_H
#define C__LEARNING_SPREADSHEET_H

#include "SpreadsheetCell.h"

class Spreadsheet {
public:
    Spreadsheet(int inWidth, int inHeight);

    ~Spreadsheet();

    Spreadsheet(const Spreadsheet &src);

    Spreadsheet &operator=(const Spreadsheet &rhs);

    void setCellAt(int x, int y, const SpreadsheetCell &cell);

    SpreadsheetCell &getCellAt(int x, int y);

private:
    static int sCounter;

    bool inRange(int val, int upper);
    void copyFrom(const Spreadsheet& src);

    int mWidth, mHeight;
    SpreadsheetCell **mCells;
};


#endif //C__LEARNING_SPREADSHEET_H
