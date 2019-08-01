//
// Created by houyi on 2019/8/1.
//

#ifndef C__LEARNING_SUPER_H
#define C__LEARNING_SUPER_H


class Super {

public:
    Super();
    virtual void someMethod();

protected:
    int mProtectedInt;
private:
    int mPrivateInt;
};


#endif //C__LEARNING_SUPER_H
