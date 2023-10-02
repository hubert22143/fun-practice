#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 18) {
        std::cout << "You're not supposed to be here" << std::endl;
    } else if (age >= 18) {
        std::cout << "Have fun" << std::endl;
    }
    return 0;
}