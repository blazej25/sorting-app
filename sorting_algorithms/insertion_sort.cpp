#include<iostream>
#include<vector>
#include "sorting_algorithms.h"

void insertionSort(std::vector<int>& input) {
    for (int i = 1; i < input.size(); i++) {
        int hold = input.at(i);
        for (int j = i - 1; j >= 0; j--) {
            if (input.at(j) < hold) {
                input.at(j+1) = hold;
                break;
            } else {
                input.at(j+1) = input.at(j);
                if (j == 0) input.at(j) = hold;
            }
        }
    }
}