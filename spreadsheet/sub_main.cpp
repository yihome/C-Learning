#include <iostream>
#include <memory>
#include "Spreadsheet.h"


using namespace std;

void printSpreadsheet(Spreadsheet s) {

}

int main() {
    auto uniquePtr = std::unique_ptr<SpreadsheetApplication>(new SpreadsheetApplication());
    Spreadsheet s1(*uniquePtr);
    std::string s("11");
    printSpreadsheet(s1);
    SpreadsheetCell cell(4);
    SpreadsheetCell cell1 = cell + cell;
    SpreadsheetCell cell2 = cell1 + 4.5;
    return 0;
}