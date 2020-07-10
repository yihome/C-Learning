//
// Created by apple on 2019/8/2.
//

#include <sstream>
#include <string>
#include "SpreadsheetCell2.h"

SpreadsheetCell2::SpreadsheetCell2() {
}

SpreadsheetCell2::~SpreadsheetCell2() {}

std::string SpreadsheetCell2::doubleToString(double inValue) {
    std::ostringstream ostr;
    ostr << inValue;
    return ostr.str();
}

double SpreadsheetCell2::stringToDouble(const std::string &inString) {
    double value;
    std::istringstream istr(inString);
    istr >> value;
    return value;
}