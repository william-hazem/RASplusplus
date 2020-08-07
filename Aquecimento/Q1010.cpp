#include <iostream>
#include <iomanip>

struct peca {
    int cod, num;
    float val; 
};

int main() {
    peca p1, p2;
    std::cin >> p1.cod >> p1.num >> p1.val;
    std::cin >> p2.cod >> p2.num >> p2.val;
    std::cout
        << std::fixed
        << std::setprecision(2)
        << "VALOR A PAGAR: R$ "
        << p1.num * p1.val + p2.num * p2.val
        << std::endl;
    return 0;
}