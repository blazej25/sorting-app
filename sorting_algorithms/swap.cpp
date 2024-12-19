#include <vector>
#include "sorting_algorithms.h"

void swap(std::vector<int>& input, int first, int second) {
    int hold = input.at(first);
    input.at(first) = input.at(second);
    input.at(second) = hold;
}