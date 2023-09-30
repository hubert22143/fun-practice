#include <iostream>


int main(){
    int age;
    std::string name;

    std::cout << "What's your full name?" << '\n';
    std::getline(std::cin, name); // Read the entire line, including spaces

    std::cout << "What's your age?" << '\n';
    std::cin >> age;

     std::cout << "Your name is " << name << " and you're " << age << " years old." << '\n';
}