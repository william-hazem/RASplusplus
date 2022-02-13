#include <iostream>

struct nota 
{
    const char id;  //Identificador
    const int dc;  //Duração
};

const nota notas[7] = 
{
    {'W', 64},
    {'H', 32},
    {'Q', 16},
    {'E', 8},
    {'S', 4},
    {'T', 2},
    {'X', 1}
};

int passo_correto(std::string composicao)
{
    int conta_passo(0), sbegin(1), send(0), i, j, duracao;
    while (sbegin < composicao.size())
    {
        duracao = 0;
        send = composicao.find('/', sbegin);
        std::string passo = composicao.substr(sbegin, send - sbegin);
        // std::cerr << '-' << passo << std::endl;
        // std::cerr << sbegin << '-' << send << std::endl;
        for (i = 0; i < passo.size(); i++)
            for (j = 0; j < 7; j++)
                if (passo[i] == notas[j].id)
                    duracao += notas[j].dc;
        // std::cerr << "Duration: " << duracao << std::endl;
        if(duracao == 64)
            conta_passo++;
        sbegin = send + 1;
    }
    return conta_passo;
}

int main()
{
    std::string comp;
    while(true)
    {
        std::cin >> comp;
        std::cin.ignore();
        if(comp == "*") break;
        std::cout << passo_correto(comp) << std::endl;
    }

    return 0;
}