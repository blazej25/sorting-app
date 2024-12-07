#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <istream>
#include"insertion_sort.cpp"

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

    input = lineToVec(std::cin);

    std::vector<int> result = insertionSort(input);

    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}