#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}
int main (){
    using namespace first;
    using std::cout;
    cout << x << '\n';
    cout << first::x << '\n'; 
    cout << second::x << '\n';
    return 0;

}