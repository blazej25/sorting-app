#include <vector>
//#include "../print_step.h"

std::vector<int> mergeSort(std::vector<int> input) {
    if (input.size() == 1) {
        return input;
    }

    int middle = input.size() / 2;

    std::vector<int> left(input.begin(), input.begin() + middle);
    std::vector<int> right(input.begin() + middle, input.end());

    left = mergeSort(left);
    right = mergeSort(right);

    std::vector<int> output;

    int pointL = 0;
    int pointR = 0;

    while (pointL < left.size() && pointR < right.size()) {
        if (left.at(pointL) < right.at(pointR)) {
            output.push_back(left.at(pointL));
            pointL++;
        } else {
            output.push_back(right.at(pointR));
            pointR++;
        }
    }

    while (pointL < left.size()) {
        output.push_back(left.at(pointL));
        pointL++;
    }

    while (pointR < right.size()) {
        output.push_back(right.at(pointR));
        pointR++;
    }

    //printStep(output);

    return output;
}