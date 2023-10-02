#include <iostream>

int main(){
    int month;
    std::cout << "Enter the month (1-12)" << "\n";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "The chosen month is January";
        break;
    case 2:
        std::cout << "The chosen month is February";
        break;
    case 3:
        std::cout << "The chosen month is March";
        break;
    case 4:
        std::cout << "The chosen month is April";
        break;
        case 5:
        std::cout << "The chosen month is May";
        break;
    case 6:
        std::cout << "The chosen month is June";
        break;
    case 7:
        std::cout << "The chosen month is July";
        break;
    case 8:
        std::cout << "The chosen month is August";
        break; 
        case 9:
        std::cout << "The chosen month is September";
        break;
    case 10:
        std::cout << "The chosen month is October";
        break;
    case 11:
        std::cout << "The chosen month is November";
        break;
    case 12:
        std::cout << "The chosen month is December";
        break;                 
    default:
        std::cout << "You have not prompted properly number, or the number is not in the range, why is that?";
        break;
    }

}