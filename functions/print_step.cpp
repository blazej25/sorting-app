#include <vector>
#include <iostream>
#include "print_step.h"

void printStep(std::vector<int> input) {
    for (int num : input) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}