//
// Created by apple on 2019/7/30.
//

#ifndef C_LEARNING_EVENSEQUENCE_H
#define C_LEARNING_EVENSEQUENCE_H


#include <initializer_list>
#include <vector>

class EvenSequence {
public:
    EvenSequence(std::initializer_list<double> args);
    void dump() const ;

private:
    std::vector<double> mSequence;
};


#endif //C_LEARNING_EVENSEQUENCE_H
