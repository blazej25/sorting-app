#include <iostream>
#include <vector>
#include <random>
#include <time.h>
#include "../functions/print_step.h"
#include "sorting_algorithms.h"

void help(std::vector<int>& input, int low, int high) {
    if (low >= high) return;

    int pivot = input.at(high);
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (input.at(j) < pivot) {
            i++;
            swap(input, i, j);
        }
    }

    swap(input, i + 1, high);

    help(input, 0, i);
    help(input, i + 2, high);
}

void quickSort(std::vector<int>& input) {
    srand(time(0));
    help(input, 0, input.size() - 1);
}