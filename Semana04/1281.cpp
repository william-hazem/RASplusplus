#include <iostream>

struct fruta{
    std::string nome;
};

struct loja : fruta
{
    float preco;
};

struct carrinho : fruta
{
    uint32_t qt;
};


int main()
{
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    carrinho* car;
    loja* lj;
    char cleitura[50];
    int n, m, o, cm, co;
    float preco;
    std::cin >> n;
    while (n-- != 0)
    {
        std::cin >> m;
        lj = new loja[m];

        for(cm = 0; cm < m; cm++) // O que têm para comprar
        {
            std::cin.ignore();
            std::cin >> lj[cm].nome >> lj[cm].preco;
        }

        std::cin >> o;
        car = new carrinho[o];

        for(co = 0; co < o; co++) // O que quero para comprar
        {
            std::cin.ignore();
            std::cin >> car[co].nome >> car[co].qt;
        }
        
        if (0) for(co = 0; co < o; co++)
            std::cerr << car[co].nome << " " << car[co].qt << std::endl;
            
        if (0) for(cm = 0; cm < m; cm++)
            std::cerr << lj[cm].nome << " " << lj[cm].preco << std::endl;
            

        preco = 0;
        for(co = 0; co < o; co++)
            for(cm = 0; cm < m; cm++)
                if(lj[cm].nome == car[co].nome)
                {
                    preco += lj[cm].preco * car[co].qt;
                    break;
                }

        std::cout << "R$ " << preco << std::endl;
    }


    return 0;
}

/*
2
4
mamao 2.19
cebola 3.10
tomate 2.80
uva 2.73
3
mamao 2
tomate 1
uva 3
5
morango 6.70
repolho 1.12
brocolis 1.71
tomate 2.80
cebola 2.81
4
brocolis 2
tomate 1
cebola 1
morango 1
*/