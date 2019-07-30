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
    setValue(initialValue);
}

void SpreadsheetCell::setValue(double inValue) {
    this->mValue = inValue;
    mString = doubleToString(inValue);
    printCell(*this);
}

double SpreadsheetCell::getValue() const {
    return mValue;
}

void SpreadsheetCell::setString(const string &inString) {
    mString = inString;
    mValue = stringToDouble(inString);
}

const string &SpreadsheetCell::getString() const {
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
        return this;
    }
    mValue = rhs.mValue;
    mString = rhs.mString;
    return *this;
}

