#include <iostream>
#include <iomanip>
int main()
{
    float in, soma = 0;
    int positivo = 0;
    for(int i = 0; i < 6; i++)
    {
        std::cin >> in;
        if(in > 0)
        {
            soma += in;
            positivo++;
        }
    }
    std::cout << std::fixed << std::setprecision(1)
        << positivo 
        << " valores positivos\n"
        << soma / positivo 
        << "\n";

    return 0;
}