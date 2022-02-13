#include <iostream>

class Familia
{
public:
    static uint32_t idade(uint32_t size, uint32_t* f)
    {
        uint32_t r, max;
        if (size > 0)
            r = f[0];
        for (uint32_t i(1); i < size; i++)
        {
            r -= f[i];
        }
        max = f[1] > f[2] ? f[1] : f[2];
        max = max > r ? max : r;
        return max;
    }
};

int main()
{
    uint32_t i(0), f[3];
    for (; i < 3; i++ )
        std::cin >> f[i];
    std::cout << Familia::idade(3, f) << std::endl;


    return 0;
}