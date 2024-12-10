#include <iostream>
#include <vector>
#include <random>
#include <time.h>
//#include "../print_step.h"

void help(std::vector<int>& input, int low, int high) {
    if (low >= high) return;

    int pivot = input.at(low);
    int j;
    int left = low;
    int right = high;

    std::cout << std::endl;

    while (true) {
        while (input.at(left) < pivot) {
            left++;
        }

        while (input.at(right) > pivot) {
            right--;
        }

        if (left >= right) {
            j = right;
            break;
        } 

        int hold = input.at(left);
        input.at(left) = input.at(right);
        input.at(right) = hold;

//        printStep(input);
    }

    help(input, 0, j);
    help(input, j + 1, high);
}

std::vector<int> quickSort(std::vector<int> input) {
    srand(time(0));
    std::vector<int> output = input;
    help(output, 0, output.size() - 1);

    return output;    
}