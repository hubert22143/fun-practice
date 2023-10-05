#include <iostream>

void HappyBirthday(std::string name,int age);

int main(){
    std::string name;
    int age;
    std::cout << " Write your name " << '\n';
    std::cin >> name;
    std::cout<< "Write your age" << '\n';
    std::cin >> age;
    HappyBirthday(name,age);


    return 0;
}
void HappyBirthday(std::string name,int age)
{
    std::cout << "Happy Birthday to " << name << "and you'r age is " << age << '\n';

}