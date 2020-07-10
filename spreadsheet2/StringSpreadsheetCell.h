//
// Created by apple on 2019/8/2.
//

#ifndef C_LEARNING_STRINGSPREADSHEETCELL_H
#define C_LEARNING_STRINGSPREADSHEETCELL_H

#include "SpreadsheetCell2.h"

class StringSpreadsheetCell : SpreadsheetCell2 {

public:
    virtual void set(const std::string &inString) override;

    virtual std::string getString() const override;

private:
    std::string mValue;
};


#endif //C_LEARNING_STRINGSPREADSHEETCELL_H
