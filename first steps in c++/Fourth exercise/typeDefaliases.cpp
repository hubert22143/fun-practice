#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text;
// typedef int number;
// typedef double float_pointNumber;

using text = std::string;
using number = int;
using float_pointNumber = double;
int main(){
    // Typedef are used for bigger readability, they allow us to write something really complicated as one alias, then we're able to
    // using are a bit shorter, and they are also more practical in templates, however we should only use Typedef and Using in case of benefit
    // invoke to those complicated data types;
    // pairlist_t pairlist;
    // text firstName = "Hubert";
    // std::cout<<firstName << '\n';
    // number deutschGrade = 5;
    // std::cout<<deutschGrade<<'\n';
    // float_pointNumber chipsPrice = 0.56;
    // std::cout<<chipsPrice<<'\n';
    text something = "Some Wise Word";
    number myGrade = 1;
    float_pointNumber chipsPrice = 1.59;

    std::cout << something << '\n';
    std::cout << myGrade << '\n';
    std::cout << chipsPrice << '\n';

    return 0;
}