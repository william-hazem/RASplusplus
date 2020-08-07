#include <iostream>
#include <iomanip>

int main() {
    const double pi = 3.14159;
    double r;
    std::cin >> r;
    std::cout
        << std::fixed
        << std::setprecision(3)
        << "VOLUME = "
        << double( 4.0/3.0 * pi * r * r * r )
        << std::endl;

    return 0;
}