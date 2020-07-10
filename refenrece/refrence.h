//
// Created by apple on 2019/9/5.
//

#ifndef C_LEARNING_REFENRECE_H
#define C_LEARNING_REFENRECE_H

#include <vector>

using namespace std;

class Refenrece {
private:
    int x;
public:
    void separateOddsAndEvents(const int arr[], int size, int *&odds, int &numOdds, int *&evens, int &numEvents);

    void separateOddsAndEvents(const vector<int> &arr, vector<int> &odds, vector<int> &evens);

    
};


#endif //C_LEARNING_REFENRECE_H
