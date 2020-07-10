//
// Created by apple on 2019/9/5.
//

#ifndef C_LEARNING_REFENRECE_H
#define C_LEARNING_REFENRECE_H

#include <vector>
#include <iostream>

using namespace std;

class Reference {
private:
    int x;
public:
    void separateOddsAndEvents(const int arr[], int size, int *&odds, int &numOdds, int *&evens, int &numEvents);

    void separateOddsAndEvents(const vector<int> &arr, vector<int> &odds, vector<int> &evens);

    Reference(int x) : x(x) {
        cout << "using common constructor" << endl;
    }

    Reference(const Reference &r) : x(r.x) {
        cout << "using copy constructor" << endl;
    }

    Reference(Reference && r):x(r.x){
        
    }
};


#endif //C_LEARNING_REFENRECE_H
