#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <istream>
//#include"sorting_algorithms/insertion_sort.cpp"
//#include"sorting_algorithms/selection_sort.cpp"
//#include"sorting_algorithms/bubble_sort.cpp"
//#include"sorting_algorithms/merge_sort.cpp"
//#include"sorting_algorithms/quick_sort.cpp"
//#include"sorting_algorithms/heap_sort.cpp"
//#include"sorting_algorithms/counting_sort.cpp"
#include"evaluate.cpp"

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

    std::vector<int> result = evaluate(input);

    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}