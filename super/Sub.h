//
// Created by houyi on 2019/8/1.
//

#ifndef C__LEARNING_SUB_H
#define C__LEARNING_SUB_H

#include "Super.h"

class Sub : public Super {
public:
    Sub();
    virtual void someMethod() override ;
    virtual void someOtherMethod();
};


#endif //C__LEARNING_SUB_H
