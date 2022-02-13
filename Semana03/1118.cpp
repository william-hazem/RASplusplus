#include <iostream>

inline bool valido(float& n)
{
    return n >= 0 && n <=10;
}

int main()
{
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    float nota, soma;
    short sn(1);

    while(sn == 1)
    {
        soma = 0;
        for(short i(0); i < 2; )
        {
            std::cin >> nota;
            if(valido(nota))
            {
                soma += nota;
                i++;
            }
            else
            {
                std::cout << "nota invalida" << std::endl;
            }
        }
        std::cout << "media = " << soma / 2.00 << std::endl;
        
        do
        {
            std::cout << "novo calculo (1-sim 2-nao)" << std::endl;
            std::cin >> sn;
        } while (sn < 1 || sn > 2);
                
    }

    return 0;
}