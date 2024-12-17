#include <iostream>
#include <algorithm>
#include <chrono>
#include <vector>
#include"sorting_algorithms/insertion_sort.cpp"
#include"sorting_algorithms/selection_sort.cpp"
#include"sorting_algorithms/bubble_sort.cpp"
#include"sorting_algorithms/merge_sort.cpp"
#include"sorting_algorithms/quick_sort.cpp"
#include"sorting_algorithms/heap_sort.cpp"
#include"sorting_algorithms/counting_sort.cpp"

std::vector<int> evaluate(std::vector<int> input) {
    //auto start, stop, duration;
    std::vector<int> result;

    auto start = std::chrono::_V2::high_resolution_clock::now();
    quickSort(input);
    auto stop = std::chrono::_V2::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Time taken by selection sort: " << duration.count() << std::endl;

    return input;
}