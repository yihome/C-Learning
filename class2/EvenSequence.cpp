//
// Created by apple on 2019/7/30.
//

#include <iostream>
#include "EvenSequence.h"

EvenSequence::EvenSequence(std::initializer_list<double> args) {
    if (args.size() % 2 != 0) {
        throw std::invalid_argument("initializer_list should contain even number of elements.");
    }

    mSequence.reserve(args.size());
    for (auto value:mSequence) {
        mSequence.push_back(value);
    }
}

void EvenSequence::dump() const {
    for (auto value:mSequence) {
        std::cout << value << ", ";
    }
    std::cout << std::endl;
}