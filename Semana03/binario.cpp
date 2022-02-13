#include <iostream>
#include <bitset>
#include <string>

typedef unsigned long long ulli;
typedef unsigned int uint;


unsigned int pariedade(std::string& str);
ulli llpow(ulli base, ulli power);
uint dtob(ulli llinum);
uint dtob(ulli llinum1, ulli llinum2);

int main()
{
    std::string str;
    int n;
    std::cin >> n;
    std::cin.ignore();
    while(n != 0)
    {
        std::cin >> str;
        std::cout << pariedade(str) << std::endl;
        n--;
    }
    return 0;
}

uint dtob(ulli llinum)
{
    std::bitset<64> bs(llinum);
    return bs.count();
}

uint dtob(ulli llinum1, ulli llinum2)
{
    
    std::bitset<64> bs (llinum1);
    std::bitset<64> b2 (llinum2);
    std::string str = bs.to_string();
    uint i = str.size(), j = 0;
    while(i > 0)
    {
        if(str[i]  == '0') i --;
        else break;
    }
    while(j < i)
    {
        if(str[j] == '0') j++;
        else break;
    }
    llinum1 = stoull(str.substr(j, i));
    str = b2.to_string();
    
    while(i > 0)
    {
        if(str[i]  == '0') i --;
        else break;
    }
    while(j < i)
    {
        if(str[j] == '0') j++;
        else break;
    }
    llinum2 = stoull(str.substr(j, i));
    llinum1 *= llinum2;
    bs.set(llinum1);
    return bs.count();
}

unsigned int pariedade(std::string& str)
{
    std::bitset<64> bs, bs2;
    const uint LSIZE = 8;
    uint contador = 0, f = str.size(), b,
        ns = f / LSIZE, i = 0; // numero de separacoes da string
    std::cerr << "ns: " << ns << std::endl;
    while (f > 0)
    {
        std::cerr << "-> i: "<< i << " OFFS: " << i * LSIZE << "\n";
        b = f <= LSIZE ? 0 : f - LSIZE;  
        std::cerr << "  - " << str.substr(b, f) << std::endl;
        if(i == 0)
        {    
            contador += dtob(std::stoull(str.substr(b, f)));
        }
        else
        {
            contador += dtob(std::stoull(str.substr(b, f)), llpow(10, i * LSIZE));
        }
        f = b - 18;
        i++;
    }
    return contador;
}

ulli llpow(ulli base, ulli power)
{
    for(ulli j = 0; j < power; j++)
    {
        base = base * base;
    }
    return base;
}