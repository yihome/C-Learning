//
// Created by houyi on 2019/7/29.
//

#ifndef STUDY_SPREADSHEETCELL_H
#define STUDY_SPREADSHEETCELL_H

#include <string>

using std::string;

class SpreadsheetCell {
public:
    SpreadsheetCell();

    SpreadsheetCell(double initialValue);

    void set(double inValue);

    inline double getValue() const;

    void set(const string &inString);

    inline const string &getString() const;

    SpreadsheetCell &operator=(const SpreadsheetCell &rhs);

    SpreadsheetCell operator+(const SpreadsheetCell &cell) const;

private:
    string doubleToString(double inValue) const;

    double stringToDouble(const string &inString) const;

    double mValue;
    string mString;
    mutable int mNumAccesses = 0;
};


#endif //STUDY_SPREADSHEETCELL_H
