#include <iostream>
#include <vector>

// Valores
const uint16_t AS(1), VALETE(11), DAMA(12), REI(13);

// Naipes
const uint8_t CLUBS('C'), DIAMONDS('D'), HEARTS('H'), SPADES('S');

// Estrutura de uma carta
struct carta
{
    uint16_t valor;
    uint8_t naipe;
};

typedef std::vector<carta> baralho;

struct jogador
{
    baralho mao;
};

typedef std::vector<jogador> vjogador;

inline carta leitura();
inline void regra_descarte(bool&, bool&, bool&, bool&, carta);
inline void regra_padrao(bool&, bool&, bool&, bool&);
// Jogo
int main()
{
    bool sentido_horario(1), mudar_sentido(0),
        compra_duas(0), compra_uma(0), passa_vez(0);
    //nº de jogadores, cartas para cada jogador e nº de cartas no baralho
    uint32_t p, m, n, cp, cm, cn; 
    std::cin >> p >> m >> n;

    carta carta_temp, descarte;
    baralho deck;
    vjogador mesa;

    deck.reserve(n);
    mesa.reserve(p);

    // Distribuir cartas
    for (cp = 0; cp < p; cp++)
        for(cm = 0; cm < m; cm++)
            mesa[cp].mao.push_back(leitura());
    // Primeira carta da pilha de descarte
    // p * m + 1
    descarte = leitura();   
    // Adiciona cartas no deck
    // p * m + 2 ... n
    for (cn = p * m + 2; cn < n; cn++)
    {
        deck.push_back(leitura());
    }

    return 0;
}

carta leitura()
{
    carta temp;
    std::cin >> temp.valor >> temp.naipe;
    return temp;
}

inline void regra_descarte(bool& sentido, bool& passa_vez, bool& compra_uma, bool& compra_duas, carta c)
{
    if(c.valor == DAMA)
        sentido = sentido ? 0 : 1;
    if(c.valor == 7)
        { passa_vez = true; compra_duas = true; }
    if(c.valor == AS)
        { passa_vez = true; compra_uma = true; }
    if(c.valor == VALETE);
        passa_vez = true;
}

inline void regra_padrao(bool& passa_vez, bool& compra_uma, bool& compra_duas)
{
    passa_vez = 0;
    compra_uma = 0;
    compra_duas = 0;
}