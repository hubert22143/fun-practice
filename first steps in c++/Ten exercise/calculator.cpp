#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "****Calculator****" << '\n';
    std::cout << "Enter your first number: ";
    std::cin >> num1;
    std::cout << "Enter your second number: ";
    std::cin >> num2;
    std::cout << "Enter the operator (+, -, *, /): ";
    std::cin >> op;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << "The result is: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "The result is: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "The result is: " << result << '\n';
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "The result is: " << result << '\n';
            } else {
                std::cout << "Error: Division by zero is not allowed." << '\n';
            }
            break;
        default:
            std::cout << "Invalid operator. Please use +, -, *, or /." << '\n';
            break;
    }

    return 0;
}