#include <iostream>


struct cifra
{
    std::string mensagem;
    void ccesa(uint32_t i);
};

int main()
{
    uint32_t n(0), i;
    cifra c;
    std::cin >> n;
    
    while (n != 0)
    {
        std::cin.ignore();
        std::cin >> c.mensagem >> i;
        c.ccesa(i);
        std::cout << c.mensagem << std::endl;
        n--;
    }
    return 0;
}

void cifra::ccesa(uint32_t i)
{
    uint32_t index(0), j;
    char* ptr(0);
    while (index < this->mensagem.size())
    {
        j = 0;
        ptr = & (mensagem[index]);
        
        while(j != i)
        {
            if (*ptr - 1 < 'A')
                *ptr = 'Z';
            else *ptr = *ptr - 1;
            j++;
        }
        index++;
    }
}