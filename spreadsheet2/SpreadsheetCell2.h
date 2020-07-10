//
// Created by apple on 2019/8/2.
//

#ifndef C_LEARNING_SPREADSHEETCELL2_H
#define C_LEARNING_SPREADSHEETCELL2_H


#include <string>

class SpreadsheetCell2 {
public:
    SpreadsheetCell2();

    virtual ~SpreadsheetCell2();

    virtual void set(const std::string &inString) = 0;

    virtual std::string getString() const = 0;

private:
    static std::string doubleToString(double inValue);

    static double stringToDouble(const std::string &inString);

};


#endif //C_LEARNING_SPREADSHEETCELL2_H
