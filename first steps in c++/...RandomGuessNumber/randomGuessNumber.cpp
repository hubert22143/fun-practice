#include <iostream>
#include <ctime>
#include <cstdlib> 

int main(){
    int num;
    int tries;
    int guess;
    tries = 0;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    std::cout<< " Random Guessing Game ! " << '\n';
    std::cout << " Write your guessing number" << '\n';
    do{
        std::cin>>guess;
        tries++;
        std::cout<< " Your current tries in guessing the number:" << tries << '\n';
    } while (num != guess); 
    std::cout << "Congratulations! You've won!!" << '\n';
}
