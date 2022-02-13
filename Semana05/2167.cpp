#include <iostream>

class motor
{
public:
    motor(uint16_t a) : n(a) { rpm = new uint16_t[n]; }
    ~motor() { if (rpm) delete rpm; }
    uint16_t buscaFalha() const;
    void set(uint16_t t, uint16_t value) { rpm[t] = value; }
private:
    uint16_t *rpm, n;
};

uint16_t motor::buscaFalha() const
{
    uint16_t i(0);
    while (i + 1 < n)
    {
        if (rpm[i] > rpm[i + 1])
            return i + 2;
        i++;
    }
    return 0;
}

int main()
{
    uint16_t n, valor, i;
    std::cin >> n;
    motor teste(n);

    for (i = 0; i < n; i++)
    {
        std::cin >> valor;
        teste.set(i, valor);
    }
    std::cout << teste.buscaFalha() << std::endl;
    return 0;
}