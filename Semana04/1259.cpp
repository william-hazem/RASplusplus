#include <iostream>
#include <algorithm>
#include <vector>
struct Numero
{
    std::vector<uint32_t> par, impar;
    void adicionar(uint32_t n)
    {
        if (n % 2)
        {
            impar.push_back(n);
        }
        else
        {
            par.push_back(n);
        }
    }
    void size(int & p, int & i)
    {
        p = par.size();
        i = impar.size();
    }
};

int main()
{
    Numero num;
    int teste, n;
    std::cin >> teste;
    while(teste != 0)
    {
        std::cin >> n;
        num.adicionar(n);
        teste--;
    }
    std::sort(num.par.begin(), num.par.end(), [](uint32_t a, uint32_t b) {return a > b;});

    std::sort(num.impar.begin(), num.impar.end());
    
    int i, j;
    num.size(i, j);
    std::cerr << i << ' ' << j << std::endl;
    while (i > 0)
    {
        std::cout << num.par[i - 1] << std::endl;
        i--;
    }
    while (j > 0)
    {
        std::cout << num.impar[j - 1] << std::endl;
        j--;
    }


    return 0;
}