#include <vector>
#include "../print_step.h"

void swap(std::vector<int>& input, int first, int second) {
    int hold = input.at(first);
    input.at(first) = input.at(second);
    input.at(second) = hold;
}

void heapify(std::vector<int>& input, int index, int size) {
    int left = index * 2 + 1, right = index * 2 + 2;
    int max = index;

    if (size > right && input.at(right) > input.at(max)) {
        max = right;
    } 

    if (size > left && input.at(left) > input.at(max)) {
        max = left;
    } 

    if (index != max) {
        swap(input, index, max);
        heapify(input, max, size);
    }
    
}

void heapSort(std::vector<int>& input) {
    int size = input.size();

    for (int i = size / 2 + 1; i  <= size; i++) {
        heapify(input, input.size() - i, size);
    }

    for (int i = size - 1; i > 0; i--) {
        swap(input, 0, i);
        heapify(input, 0, i);
    }
}