//
// Created by apple on 2019/8/2.
//

#include "StringSpreadsheetCell.h"

void StringSpreadsheetCell::set(const std::string &inString) {
    mValue = inString;
}

std::string StringSpreadsheetCell::getString() const {
    return mValue;
}