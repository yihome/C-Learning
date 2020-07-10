//
// Created by apple on 2019/9/5.
//

#include "refrence.h"

void Refenrece::separateOddsAndEvents(const int *arr, int size, int *&odds, int &numOdds, int *&evens,
                                      int &numEvents) {
    numOdds = numEvents = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            ++numOdds;
        } else {
            ++numEvents;
        }

    }
    odds = new int[numOdds];
    evens = new int[numEvents];
    int oddsPos = 0, eventsPos = 0;
    for (int j = 0; j < size; ++j) {
        if (arr[j] % 2 == 0) {
            odds[oddsPos++] = arr[j];
        } else {
            evens[eventsPos++] = arr[j];
        }
    }
}

void Refenrece::separateOddsAndEvents(const vector<int> &arr, vector<int> &odds, vector<int> &evens) {
    int numOdds = 0, numEvens = 0;
    for (auto &i :arr) {
        if (i % 2 == 1) {
            ++numOdds;
        } else {
            ++numEvens;
        }
        odds.reserve(numOdds);
        evens.reserve(numEvens);
        for (auto &i :arr) {
            if (i % 2 == 0) {
                odds.push_back(i);
            } else {
                evens.push_back(i);
            }
        }
    }
}
