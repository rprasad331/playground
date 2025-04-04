#include <iostream>
#include "operations.h"
#include "utils.h"

int main() {
    int choice;
    double num1, num2;

    while (true) {
        std::cout << "Select operation:\n";
        std::cout << "1. Add\n";
        std::cout << "2. Subtract\n";
        std::cout << "3. Multiply\n";
        std::cout << "4. Divide\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        choice = readInput();

        if (choice == 5) {
            std::cout << "Exiting the program.\n";
            break;
        }

        std::cout << "Enter two numbers: ";
        num1 = readInput();
        num2 = readInput();

        double result;
        switch (choice) {
            case 1:
                result = add(num1, num2);
                displayResult("Addition", result);
                break;
            case 2:
                result = subtract(num1, num2);
                displayResult("Subtraction", result);
                break;
            case 3:
                result = multiply(num1, num2);
                displayResult("Multiplication", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = divide(num1, num2);
                    displayResult("Division", result);
                } else {
                    std::cout << "Error: Division by zero.\n";
                }
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}