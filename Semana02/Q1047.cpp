#include <iostream>
 
int main() {
    int hi, mi, hf, mf, m, h;
    std::cin >> hi >> mi >> hf >> mf;

    if(hf <= hi && mf <= mi)
        hf += 24;
    if(mf < mi)
    {
        mf += 60;
        hf--;
    }
    std::cout
        << "O JOGO DUROU "
        << hf - hi
        << " HORA(S) E "
        << mf - mi
        << " MINUTO(S)"
        << std::endl;

    return 0;
}