#include <iostream>

const char cobaia[][8]
    {"coelhos", "ratos", "sapos"};
int main()
{
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    unsigned int n, ncobaia[]{0,0,0}, qt, soma(0);
    unsigned char cb;
    std::cin >> n;
    while(n != 0)
    {
        std::cin >> qt >> cb;
        for(unsigned short i(0); i < 3; i++)
        {
            if(cobaia[i][0] == tolower(cb))
                ncobaia[i] += qt;
        }
        n--;
    }
    
    for(unsigned int i : ncobaia)
        soma += i;
    std::cout << "Total: " << soma << " cobaias" << std::endl;
    for(unsigned short i(0); i < 3; i++)
    {
        std::cout << "Total de " << cobaia[i] << ": " << ncobaia[i]
            << std::endl;
    }
    for(unsigned short i(0); i < 3; i++)
    {
        std::cout << "Percentual de " << cobaia[i] << ": " << 100.0 * ncobaia[i] / soma
            << " %" << std::endl;
    }


    return 0;
}