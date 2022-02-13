#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string nome;
    double slf, mnt;
    std::cin >> nome >> slf >> mnt;
    std::cout
        << std::fixed
        << std::setprecision(2)
        << "TOTAL = R$ "
        << slf + mnt * 0.15
        << std::endl;
}