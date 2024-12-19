#include <vector>
#include "sorting_algorithms.h"

void countingSort(std::vector<int>& input) {
    int max = input.at(0);

    for (int num : input) {
        if (max < num) max = num;
    }

    std::vector<int> count(max + 1, 0);
    
    for (int num : input) {
        count.at(num)++;
    }

    for (int i = 1; i < count.size(); i++) {
        count.at(i) += count.at(i - 1);
    }

    std::vector<int> output(input.size(), 0);

    for (int i = input.size() - 1; i >= 0; i--) {
        output.at(count.at(input.at(i)) - 1) = input.at(i);
        count.at(input.at(i))--;
    }

    input = output;
}