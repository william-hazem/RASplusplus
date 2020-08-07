#include <iostream>
#include <string>
#include <cmath>

int main()
{
    unsigned int k;
    int n, m, x, y;
    std::string r;
    while(true)
    {
        std::cin >> k;
        if(k == 0) break;
        std::cin >> n >> m;
        for(unsigned int i = 0; i < k; i++)
        {
            std::cin >> x >> y;
            if(abs(n) == abs(x) || abs(m) == abs(y))
            {
                r = "divisa";
            }
            else
            {
                if(y > m)
                {
                    r = "N";
                }
                else
                {
                    r = "S";
                }

                if(x > n)
                {
                    r += "E";
                }
                else
                {
                    r += "O";
                }
            }
            std::cout << r << std::endl;

        }
    }
    

    return 0;
}