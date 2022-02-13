#include <iostream>
#include <iomanip>
const float menu[]
    {4, 4.5, 5, 2, 1.5};
int main() 
{
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    short codigo, qt;
    std::cin >> codigo >> qt;

    std::cout
        << "Total: R$ "
        << (float)*(menu+codigo-1)*qt
        << std::endl;
    return 0;
}