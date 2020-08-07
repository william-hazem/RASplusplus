#include <iostream>
#include <iomanip>

int main() {
    const double pi = 3.14159;
    double a, b, c;
    std::cin >> a >> b >> c;

    std::cout
        << std::fixed
        << std::setprecision(3)
        << "TRIANGULO: "
        << a * c / 2.0
        << std::endl
        << "CIRCULO: "
        <<  pi * c * c
        << std::endl
        << "TRAPEZIO: "
        << (a + b) * c / 2.0
        << std::endl
        << "QUADRADO: "
        << b * b
        << std::endl
        << "RETANGULO: "
        << a * b
        << std::endl;
}