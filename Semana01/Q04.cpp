/*
    Questão: DDD
    URI - Problema: 1050
    Autor: William Henrique Azevedo Martins
*/

#include <iostream>

int main() {
    short int DDD = 0;
    std::cin >> DDD;
    switch (DDD)
    {
    case 61:
        std::cout << "Brasilia" << std::endl;
        break;
    case 71:
        std::cout << "Salvador" << std::endl;
        break;
    case 11:
        std::cout << "Sao Paulo" << std::endl;
        break;
    case 21:
        std::cout << "Rio de Janeiro" << std::endl;
        break;
    case 32:
        std::cout << "Juiz de Fora" << std::endl;
        break;
    case 19:
        std::cout << "Campinas" << std::endl;
        break;
    case 27:
        std::cout << "Vitoria" << std::endl;
        break;
    case 31:
        std::cout << "Belo Horizonte" << std::endl;
        break;
    default:
        std::cout << "DDD nao cadastrado" << std::endl;
        break;
    }

    return 0;
}