#include <iostream>
#include <algorithm>
#include <chrono>
#include <vector>
#include "evaluate.h"
//#include"sorting_algorithms/insertion_sort/insertion_sort.h"
//#include"sorting_algorithms/selection_sort/selection_sort.h"
//#include"sorting_algorithms/bubble_sort/bubble_sort.h"
//#include"sorting_algorithms/merge_sort/merge_sort.h"
//#include"sorting_algorithms/quick_sort/quick_sort.h"
//#include"sorting_algorithms/heap_sort/heap_sort.h"
//#include"sorting_algorithms/counting_sort/counting_sort.h"
#include "../sorting_algorithms/sorting_algorithms.h"


std::vector<int> evaluate(std::vector<int> input, void (*my_sort)(std::vector<int>& input)) {
    //auto start, stop, duration;
    std::vector<int> result = input;

    auto start = std::chrono::_V2::high_resolution_clock::now();
    my_sort(input);
    auto stop = std::chrono::_V2::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Time taken by your chosen sorting algorithm: " << duration.count() << std::endl;
    
    auto startRef = std::chrono::_V2::high_resolution_clock::now();
    sort(result.begin(), result.end());
    auto stopRef = std::chrono::_V2::high_resolution_clock::now();

    auto durationRef = std::chrono::duration_cast<std::chrono::microseconds>(stopRef - startRef);

    std::cout << "Time taken by sort() function: " << durationRef.count() << std::endl;

    return input;
}