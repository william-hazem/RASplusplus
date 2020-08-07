#include <iostream>
#include <string>
int main()
{
    int n;
    const std::string a("one"), b ("two"), c("three");
    std::string r;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> r;
        if(r.size() == 3)
        {
            short ca = 0, cb = 0; //Contadores de erro
            for(int j = 0; j < 3; j++)
            {
                if(r[j] != a[j])
                    ca++;
                if(r[j] != b[j])
                    cb++;
                if(ca > 1 || cb > 1)
                    break;
            }
            if(ca > cb)
            {
                std::cout << 2 << std::endl;
            }
            else
            {
                std::cout << 1 << std::endl;
            }
            
        }
        else
        {
            std::cout << 3 << std::endl;
        }
        
    }
    return 0;
}