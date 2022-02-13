#include <iostream>

class quadriculado
{
public:
    quadriculado(uint32_t& n) : ordem(n) {}
    uint32_t nquadrado() const;
private:
    const uint32_t ordem;
};

uint32_t quadriculado::nquadrado() const
{
    uint32_t contador(0), i(0);
    while (ordem - i > 0)
    {
        contador += (ordem - i) * (ordem - i);
        i++;
    }
    return contador;
}

int main()
{
    uint32_t n;
    
    while (true)
    {
        std::cin >> n;
        if (n == 0)
            break;
        quadriculado q(n);
        std::cout << q.nquadrado() << std::endl;
    }
    
    return 0;
}


/*

# #
# #
4 + 1

# # #
# # #
# # #
9 + 4 + 1

# # # #
# # # #
# # # #
# # # #
16 + 9 + 4 + 1
*/