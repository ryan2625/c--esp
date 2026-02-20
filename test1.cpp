#include <iostream>
#include <string>
namespace primary {
    int x = 1;
}

namespace secondary {
    int x = 5;
}

int demonstrate_nmspc(std::string name) {
    if (name == "primary") 
        return primary::x;
    else if (name == "secondary")  
        return secondary::x;
    else    
        return -1;
}

int main() {
    std::cout << "esp development in progress" << '\n';
    int a = 10;
    char ch = 'a';
    std::cout << "Logging various variable" << a << ch << '\n';
    int b = 2;
    std::cout << "Product: " << b * a << '\n';

    //Name Space Testing
    int x = 0;
    std::cout << x << '\n';
    std::cout << primary::x << '\n';
    std::cout << secondary::x << '\n';
    std::cout << "Testing custom function for namespaces" << '\n';
    std::cout << demonstrate_nmspc("primary") << '\n';
    std::cout << demonstrate_nmspc("secondary") << '\n';
    return 0;
}