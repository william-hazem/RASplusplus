#include <iostream>

unsigned int csize(char* begin, char* end);
int maior(int a, int b);

int main()
{
    int n;
    char a[50], b[50];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        const int sa = csize(a, a+50), sb = csize(b, b+50);
        for(int j = 0; j < maior(sa, sb); j++)
        {
            if(j < sa)
                std::cout << a[j];
            if(j < sb)
                std::cout << b[j];
            if(j >= sa && j >= sb) break;
        }
        std::cout << std::endl;
    }
    return 0;
}

unsigned int csize(char* begin, char* end)
{
    unsigned int cont = 0;
    while(*begin != '\0' && begin != end)
    {
        cont++;
        begin++;
    }
    return cont;
}

int maior(int a, int b)
{
    if(a > b) return a;
    else return b;
}