#include <iostream>
#include <string>

int main()
{
    int n;
    std::string a, b;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        std::cin.ignore();
        if( a.size() >= b.size() &&
            a.substr(a.size() - b.size(), b.size()) == b )
        {
            std::cout << "encaixa\n";
        }
        else
        {
            std::cout << "nao encaixa\n";
        }
    }
    return 0;
}