//
// Created by houyi on 2019/7/29.
//

#include "SpreadsheetCell.h"
#include <iostream>
#include <sstream>

using std::string;
using std::cout;

void printCell(const SpreadsheetCell &inCell) {
    cout << inCell.getString() << std::endl;
}

SpreadsheetCell::SpreadsheetCell() : mValue(0) {
}

SpreadsheetCell::SpreadsheetCell(double initialValue) {
    set(initialValue);
}

void SpreadsheetCell::set(double inValue) {
    this->mValue = inValue;
    mString = doubleToString(inValue);
    printCell(*this);
}

inline double SpreadsheetCell::getValue() const {
    mNumAccesses++;
    return mValue;
}

void SpreadsheetCell::set(const string &inString) {
    mString = inString;
    mValue = stringToDouble(inString);
}

inline const string &SpreadsheetCell::getString() const {
    mNumAccesses++;
    return mString;
}

double SpreadsheetCell::stringToDouble(const string &inString) const {
    double temp;
    std::istringstream istr(inString);
    istr >> temp;
    if (istr.fail() || !istr.eof()) {
        return 0;
    }
    return temp;
}

string SpreadsheetCell::doubleToString(double inValue) const {
    std::ostringstream ostr;
    ostr << inValue;
    return ostr.str();
}

SpreadsheetCell &SpreadsheetCell::operator=(const SpreadsheetCell &rhs) {
    if (this == &rhs) {
        return *this;
    }
    mValue = rhs.mValue;
    mString = rhs.mString;
    return *this;
}

SpreadsheetCell SpreadsheetCell::operator+(const SpreadsheetCell &cell) const {
    SpreadsheetCell newCell;
    newCell.set(mValue + cell.mValue);
    return newCell;
}

