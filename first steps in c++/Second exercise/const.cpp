#include <iostream>



int main(){
    // Const works as everywhere, it's an constant variable which can not be changed, otherwise there is an error occuring in place of re-declaration.
    const int a = 6;
    double b = 2.5;
    int c = a * b;
    std::cout << c;

}