#include <iostream>
#include <vector>
//#include"../print_step.h"

std::vector<int> bubbleSort(std::vector<int> input) {
    bool sorted = false;
    int i = 1;
    
    while (!sorted) {
        std::cout << i << std::endl;
        sorted = true;
        
        for (int i = 0; i < input.size() - 1; i++) {

            int hold = 0;
            if (input.at(i) > input.at(i + 1)) {
                sorted = false;
                int hold = input.at(i);
                input.at(i) = input.at(i + 1);
                input.at(i + 1) = hold;
            }

//            printStep(input);
        }

        i++;
    }

    return input;
}