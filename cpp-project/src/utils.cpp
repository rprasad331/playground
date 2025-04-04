#include <iostream>
#include "utils.h"

void displayResult(double result) {
    std::cout << "The result is: " << result << std::endl;
}

double readInput() {
    double input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    return input;
}