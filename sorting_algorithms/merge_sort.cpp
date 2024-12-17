#include <vector>
//#include "../print_step.h"

void mergeSort(std::vector<int>& input) {
    if (input.size() == 1) {
        return;
    }

    int middle = input.size() / 2;

    std::vector<int> left(input.begin(), input.begin() + middle);
    std::vector<int> right(input.begin() + middle, input.end());

    mergeSort(left);
    mergeSort(right);

    std::vector<int> output;

    int pointL = 0;
    int pointR = 0;
    int i = 0;

    while (pointL < left.size() && pointR < right.size()) {
        if (left.at(pointL) < right.at(pointR)) {
            input.at(i) = left.at(pointL);
            i++;
            pointL++;
        } else {
            input.at(i) = right.at(pointR);
            i++;
            pointR++;
        }
    }

    while (pointL < left.size()) {
        input.at(i) = left.at(pointL);
        i++;
        pointL++;
    }

    while (pointR < right.size()) {
        input.at(i) = right.at(pointR);
        i++;
        pointR++;
    }
}