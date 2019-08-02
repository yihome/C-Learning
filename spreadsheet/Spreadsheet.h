//
// Created by houyi on 2019/7/30.
//

#ifndef C__LEARNING_SPREADSHEET_H
#define C__LEARNING_SPREADSHEET_H

#include "SpreadsheetCell.h"

class SpreadsheetApplication {
};

class Spreadsheet {
public:
    explicit Spreadsheet(const SpreadsheetApplication &theApp, int inWidth = kMaxWidth, int inHeight = kMaxHeight);

    ~Spreadsheet();

    Spreadsheet(const Spreadsheet &src);

    Spreadsheet &operator=(const Spreadsheet &rhs);

    void setCellAt(int x, int y, const SpreadsheetCell &cell);

    SpreadsheetCell &getCellAt(int x, int y);

    int getId() const;

    static const int kMaxHeight = 100;
    static const int kMaxWidth = 100;

private:
    static int sCounter;

    bool inRange(int val, int upper);

    void copyFrom(const Spreadsheet &src);

    int mWidth, mHeight;
    SpreadsheetCell **mCells;
    int mId;
    const SpreadsheetApplication &mTheApp;

};


#endif //C__LEARNING_SPREADSHEET_H
