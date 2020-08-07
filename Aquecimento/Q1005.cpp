#include <iostream>
#include <iomanip>
int main() {
    double a, b;
    std::cin >> a >> b;
    std::cout
        << std::fixed
        << std::setprecision(5)
        << "MEDIA = "
        << (a * 3.5 + b * 7.5) / 11
        << std::endl;
    return 0;
}