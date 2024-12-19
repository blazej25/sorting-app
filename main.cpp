#include <iostream>
#include <algorithm>
#include <random>
#include <ctime>
#include <vector>
#include <string>
#include <sstream>
#include <istream>
#include <chrono>
//#include"sorting_algorithms/insertion_sort/insertion_sort.h"
//#include"sorting_algorithms/selection_sort/selection_sort.h"
//#include"sorting_algorithms/bubble_sort/bubble_sort.h"
//#include"sorting_algorithms/merge_sort/merge_sort.h"
//#include"sorting_algorithms/quick_sort/quick_sort.h"
//#include"sorting_algorithms/heap_sort/heap_sort.h"
//#include"sorting_algorithms/counting_sort/counting_sort.h"
#include"functions/evaluate.h"
#include"functions/print_step.h"
#include "sorting_algorithms/sorting_algorithms.h"

std::vector<int> generate(int length, int max) {
    std::vector<int> output(length);
    static std::random_device rd;                               
    static std::mt19937 generator(rd());                       
    static std::uniform_int_distribution<int> distribution(1, max); 

    for (int i = 0; i < length; i++) {
        output.at(i) = distribution(generator);
    }

    return output;
}

void test() {
    std::vector<int> input;
    for (int i = 0; i < 10; i++) {
        input = generate(20, 100);
        std::vector proper = input;
        printStep(input);
        sort(proper.begin(), proper.end());
        quickSort(input);

        for (int j = 0; j < 20; j++) {
            if (proper.at(j) != input.at(j)) {
                std::cout << "Failed!!!\nExpected output: ";
                std::cout << "Actual output: ";
                return;
            }
        }
    }
}

std::vector<int> lineToVec(std::istream& stream) {
    std::vector<int> input;
    std::string num;
    std::string line;
    getline(stream, line);
    std::stringstream ss(line);

    while (ss >> num) {
        input.push_back(stoi(num));
    }

    return input;
}

int main() {
    std::vector<int> input;
    std::string in;

    //input = lineToVec(std::cin);

    input = {5432, 3, 1, 2, 90, 100, 111, 50, 60, 2};

    /*
    std::vector<int> result = evaluate(input);

    for (int num : result) {
        std::cout << num << " ";
    }
    */
   test();
    
    return 0;
}