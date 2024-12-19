#include <vector>
#include "sorting_algorithms.h"

void selectionSort(std::vector<int>& input) {
    for (int i = 0; i < input.size() - 1; i++) {
        int smallest = i + 1;

        for (int j = i + 1; j < input.size(); j++) {
            if (input.at(smallest) > input.at(j)) smallest = j;
        }

        if (input.at(smallest) < input.at(i)) {
            int hold = input.at(i);
            input.at(i) = input.at(smallest);
            input.at(smallest) = hold;
        }
    }
}