//
// Created by apple on 2019/8/2.
//

#ifndef C_LEARNING_SPREADSHEETCELL_H
#define C_LEARNING_SPREADSHEETCELL_H


class SpreadsheetCell {
public:
    SpreadsheetCell();

    virtual ~SpreadsheetCell();

    virtual void set(const std::string &inString) = 0;

    virtual std::string getString() const = 0;

private:
    static std::string doubleToString(double inValue);

    static double stringToDouble(const std::string &inString);

};


#endif //C_LEARNING_SPREADSHEETCELL_H
