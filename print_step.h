#include <iostream>
#include <vector>

extern void printStep(std::vector<int> input) {
    for (int num : input) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}