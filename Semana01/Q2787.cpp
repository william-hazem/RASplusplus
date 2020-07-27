#include <iostream>

int main() {
    int c, l;
    std::cin >> c >> l;
    //Caso a soma das posições seja par, a casa é branca
    //Dado que c = 1 e l = 1 é uma casa branca
    if( (c + l) % 2 == 0)
        std::cout << 1;
    else
        std::cout << 0;
    std::cout << std::endl;

    return 0;
}