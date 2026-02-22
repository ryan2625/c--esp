#include <iostream>
#include <string>

int main() {
    std::string name;
    std::string reason;
    std::string cope;
    std::string fav;
    std::string thoughts;
    
    std::cout << "Whats your name? : ";
    std::cin >> name;

    std::cout << "Hello " << name << '\n';
    std::cout << "It's been a long time since you have gathered user input in the terminal... why is that?" << '\n';
    std::cin.ignore();
    std::getline(std::cin, reason);
    std::cout << reason << " huh... interesting. Welcome back." << '\n';
    std::cout << "So what's the real reason?"<< '\n';
    std::getline(std::cin, cope);
    std::cout << cope << "? Nice cope.";

    std::cout << "What is your favorite number?" << '\n';
    std::cin >> fav;
    std::cout << "Uhh cool. Any other thoughts for tonight?" << '\n';
    // If we use the std::ws, the white space/line break from std::cin
    // gets removed and the input can be captured as expected. If we don't
    // use std::ws, we have to use cin.ignore() after using a cin statement.
    // If not, we skip the next subsequent getline statement due to /n leftover.
    std::getline(std::cin >> std::ws, thoughts);
    std::cout << "Your response of " << thoughts << " was extremely lame.";
    return 0;
}