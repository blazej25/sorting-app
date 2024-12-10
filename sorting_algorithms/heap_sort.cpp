#include <vector>
#include "../print_step.h"

void swap(std::vector<int>& input, int first, int second) {
    int hold = input.at(first);
    input.at(first) = input.at(second);
    input.at(second) = hold;
}

void heapify(std::vector<int>& input, int index) {
    int left = 0, right = 0;

    if (index * 2 < input.size()) left = index * 2;
    if (index * 2 + 1 < input.size()) right = index * 2 + 1;

    if (left != 0 && right != 0) {
        if (input.at(left) > input.at(index) || input.at(right) > input.at(index)) {
            if (input.at(right) > input.at(left)) {
                swap(input, index, right);
                heapify(input, right);
            } else {
                swap(input, index, left);
                heapify(input, left);
            }
        }  else {
            return;
        }
    } else if (right != 0){
        if (input.at(right) > input.at(index)) {
            swap(input, index, right);
            heapify(input, right);
        }
    } else if (left != 0) {
        if (input.at(left) > input.at(index)) {
            swap(input, index, left);
            heapify(input, left);
        }
    }

    if (index / 2 >= 0) {
        heapify(input, index / 2);
    }
}

std::vector<int> heapSort(std::vector<int> input) {
    heapify(input, input.size() - 1);
    return input;
}