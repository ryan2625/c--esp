#include <iostream>
#include <string>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string txt_t;
using num_t = int;

int main () {
    //Typedef and using
    pairlist_t pairs;
    txt_t  myString = "asd";
    num_t myNum = 2;
    int students = 50;
    std::cout << "Hi" << '\n';
    std::cout << myString << '\n';
    std::cout << myNum << '\n';
    std::cout << students + 1 - 5 % 2 << '\n';

    // Type conversion
    int x = 3.14;
    std::cout << x << '\n';
    double x2 = 3.14;
    std::cout << x2 << '\n';
    char x3 = 100;
    //Casting to a char
    std::cout << x3 << '\n';
    return 0;
}