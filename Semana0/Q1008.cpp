#include <iostream>
#include <iomanip>

int main() {
    int nf, hrt;
    float sl;
    std::cin >> nf >> hrt >> sl;
    std::cout
        << std::fixed
        << std::setprecision(2)
        << "NUMBER = "
        << nf
        << std::endl
        << "SALARY = U$ "
        << hrt * sl
        << std::endl;

}