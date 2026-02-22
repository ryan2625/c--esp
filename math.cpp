#include <iostream>
#include <string>
#include <cmath>

int main() {
    double x = 2;
    double y = 5;
    double max;

    max = std::max(x, y);
    std::cout << "Max: " << max << '\n';

    double calcPowers = pow(x, y);
    std::cout << "Powers of numbers" << calcPowers << '\n';

    std::cout << "Here is the square root of 9: " << sqrt(9) << '\n';
    std::cout << "Here is the abs value of -9: " << abs(-9) << '\n';
    // More operations include:
    // z = round(x);
    // z = ceil(x); rounds up
    // z = floor(x);
    // Check out cplusplus.com/reference/math if I really want to see more

    return 0;
}