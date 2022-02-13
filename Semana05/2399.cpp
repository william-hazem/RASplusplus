#include <iostream>

class campo_minado
{
public:
    campo_minado(uint16_t& a) : n(a) 
    {
        celula = new uint16_t[a];
        mina = new bool[a];
    }
    void set(const uint16_t& t, bool valor) {mina[t] = valor;}
    uint16_t get(const uint16_t & t) const { return celula[t];}
    void def();
private:
    uint16_t n, *celula;
    bool *mina;
};

void campo_minado::def()
{
    uint16_t i = 0;
    while (i < n)
    {
        celula[i] = 0;
        if (mina[i])
            celula[i]++;
        if (i - 1 >= 0 && mina[i - 1])
            celula[i]++;
        if (i + 1 < n && mina[i + 1])
            celula[i]++;
        i++;
    }
}

int main()
{
    bool valor;
    uint16_t n, i;
    std::cin >> n;
    campo_minado cm(n);

    for (i = 0; i < n; i++)
    {
        std::cin >> valor;
        cm.set(i, valor);
    }
    std::cerr << "OUT:" << std::endl;
    cm.def();
    for (i = 0; i < n; i++)
    {
        std::cout << cm.get(i) << std::endl;
    }
    return 0;
}