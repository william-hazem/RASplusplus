#include <iostream>
#include <iomanip>
int main() {
    const double pi = 3.14159;
    double r = 0;
    std::cin >> r;
    std::cout
        << std::fixed
        << std::setprecision(4) 
        << "A="
        << pi * r * r
        << std::endl;
    return 0;
}