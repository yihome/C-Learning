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

    void setValue(double inValue);

    double getValue() const;

    void setString(const string &inString);

    const string &getString() const;

    SpreadsheetCell &operator= (const SpreadsheetCell& rhs);

private:
    string doubleToString(double inValue) const;

    double stringToDouble(const string &inString) const;

    double mValue;
    string mString;
};


#endif //STUDY_SPREADSHEETCELL_H
