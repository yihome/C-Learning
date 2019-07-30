#include <iostream>
#include "EvenSequence.h"

int main() {
    EvenSequence p1 = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    p1.dump();
    try {
        EvenSequence p2 = {1.0,2.0};
    } catch (const std::invalid_argument &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}