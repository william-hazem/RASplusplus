#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

inline void print(int);

int main()
{
    std::vector<int> set;
    int n(0), aux;
    while (std::cin >> n)
    {
        
        for (int i = 0; i < n; i++)
        {
            std::cin >> aux;
            set.push_back(aux);
        } 

        std::sort(set.begin(), set.end(), [](int a, int b) {return a < b;});

        for (int i = 0; i < n; i++)
        {
            print(set[i]);
        }
        set.clear();
    }
    
    return 0;
}

void print(int n)
{
    std::cout << std::setfill('0') << std::setw(4) << n << std::endl;
}