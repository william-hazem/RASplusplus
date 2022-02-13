#include <iostream>

float soma(float*, int, int);
float media(float*, int, int);

int main()
{
    std::cout.setf(std::ios::fixed);
    std::cout.precision(1);

    char op;
    int linha;
    float mat[12][12], lixo;
    std::cin >> linha >> op;
    for(short i = 0; i < 12; i++)
    {
        for(short j = 0; j < 12; j++)
        {
            std::cin >> mat[i][j];
        }
    }
    if(op == 'S')
        std::cout << soma(mat[linha], 0, 12) << std::endl;
    else
        std::cout << media(mat[linha], 0, 12) << std::endl;
}

float soma(float* linha, int i, int f)
{
    float soma = 0;
    while(linha+i != linha+f)
    {
        soma += *(linha+i);
        i++;
    }
    return soma;
}

float media(float* linha, int i, int f)
{
    return soma(linha, i, f) / (f-i);
}