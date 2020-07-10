#include <iostream>
#include <memory>
#include "Spreadsheet.h"
#include "../spreadsheet2/SpreadsheetCell2.h"


using namespace std;

void printSpreadsheet(Spreadsheet s) {

}

int main() {
    auto uniquePtr = std::unique_ptr<SpreadsheetApplication>(new SpreadsheetApplication());
    Spreadsheet s1(*uniquePtr);
    std::string s("11");
    printSpreadsheet(s1);
//    SpreadsheetCell2 cell(4);
//    SpreadsheetCell2 cell1 = cell + cell;
//    SpreadsheetCell2 cell2 = cell1 + 4.5;
    return 0;
}