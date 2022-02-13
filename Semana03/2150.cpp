#include <iostream>
#include <string>
#include <cstring>

int conta_vogais(std::string, std::string);

int main()
{
    int contador;
    std::string vogais, frase;
    while(std::cin >> vogais)
    {
        std::cin.ignore();
        std::cerr << "v: " << vogais << std::endl;
        std::getline(std::cin, frase);
        std::cerr << "f: " << frase << std::endl;
        contador = conta_vogais(vogais, frase);
        std::cout << contador << std::endl;
    }
    return 0;
}


int conta_vogais(std::string vogais, std::string frase)
{
    int contador = 0;
    for(char v : vogais)
    {
        for(char f : frase)
        {
            if(v == f) contador ++;
        }
    }
    return contador;
}