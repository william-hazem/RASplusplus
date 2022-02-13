#include <iostream>
#include <string>
#include <cmath>

const int LONGSIZE = 8;

int bits(const std::string& num);
int cbit2(std::string& num);

int main()
{
    std::string num;
    std::cin >> num;
    std::cout << cbit2(num) << std::endl;
    return 0;
}

int cbit(const std::string& snum)
{
    int contador = 0;
    long f = snum.size(), b = 0;
    long long numero;
    do
    {
        b = f - 18;
        if(b < 0) b = 0;
        numero = std::stoll(snum.substr(b, f));
        f = b;
        while(numero !=  1)
        {
            std::cerr << "-" << numero << std::endl;
            if(numero % 2 == 1)    
                contador++;
            if(numero / 2 == 1)
                contador++;
            numero = numero / 2;
            
        }
        
    } while(b != 0);
    return contador;
}



int cbit2(std::string& snum)
{
    int contador(0), f(0), b(0), i(0);
    long long* numeros = 0;
    int* expoente = 0;
    while(true)
    {
        i = 0;
        b = 0;
        f = snum.size();
        numeros = new long long[f / LONGSIZE + 1];
        expoente = new int[f / LONGSIZE + 1];
        expoente[0] = 0;
        do
        {
            b = f - LONGSIZE;
            if(b < 0) b = 0;
            numeros[i] = std::stoll(snum.substr(b, f));
            if(i > 0)
                expoente[i] = f - b + LONGSIZE * i;
            i++;
            f = b;
        } while(b != 0);
        std::cerr << "i: " << i << std::endl;
        for(int ci = 0; ci < i; ci++)
        {
            if(numeros[ci] / 2 == 1) contador++;
            if(numeros[ci] % 2 == 1) contador++;
            numeros[ci] = numeros[ci] / 2;
        }
        std::cerr << "contador: " << contador << std::endl;
        snum = std::to_string((long long)(numeros[i - 1] * pow(10, expoente[i - 1])) );
        
        for(int j = i - 2; j > 0; j++)
        {
            if(j < 0) std::cerr << "POS INVALIDA" << std::endl;
            snum += std::to_string(numeros[j] * pow(10, expoente[j]));
        }      
        std::cerr << snum << std::endl;
        if(snum == "1" || snum == "0" || snum[0] != '-') break;
        delete numeros;
        delete expoente;  
    }
    return contador;
}