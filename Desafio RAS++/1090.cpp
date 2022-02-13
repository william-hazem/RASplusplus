#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    unsigned int n, i, j, k, contador;
    std::string* carta;
    char num, fig;
    while(true) // Looping
    {
        std::cin >> n;
        std::cin.ignore();

        carta = new std::string[n];

        for(i = 0; i < n; i++)
        {
            fig = std::cin.get();
            std::cin.ignore(15, ' ');
            num = std::cin.get();
            carta[i].push_back(num);
            carta[i].push_back(fig);
        }

        contador = 0;
        while(i != n)
        {
            
        }
    }   // !whiled
    
    


    return 0;
}

bool setvalido(std::string* carta, unsigned int& n)
{
    int i, j, k;
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            for(k = j + 1; k < n; k++)
            {
                bool f1 = carta[i][1] == carta[j][1] && carta[j][1] == carta[k][1];
                bool f2 = carta[i][1] != carta[j][1] && carta[j][1] != carta[k][1];
                bool n1 = carta[i][0] == carta[j][0] && carta[j][0] == carta[k][0];
                bool n2 = carta[i][0] != carta[j][0] && carta[j][0] != carta[k][0];
                if( (f1 && n1) || (f1 && n2) || (f2 != n1))
                {
                    std::remove(carta, carta+n, k);
                    n--;
                    std::remove(carta, carta+n, j);
                    n--;
                    std::remove(carta, carta+n, i);
                    n--;
                    return true;
                }
            }
        }
    }
}