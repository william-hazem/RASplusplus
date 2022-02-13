#include <iostream>
#include <set>

int main()
{
    std::string idioma;
    std::set<std::string> igrupo;
    bool falaringles;
    int n;
    short k;
    std::cin >> n;
    while(n != 0)
    {
        falaringles = true;
        std::cin >> k;
        std::cin.ignore();
        while(k != 0)
        {
            std::cin >> idioma;
            igrupo.insert(idioma);
            k--;
        }
        if(igrupo.count(idioma) == igrupo.size())
            std::cout << idioma << std::endl;
        else
            std::cout << "ingles" << std::endl;
        igrupo.clear();
        n--;
    }
    return 0;

}

