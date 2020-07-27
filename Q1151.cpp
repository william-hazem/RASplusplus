#include <iostream>

int main() {
    int n = 0, a = 0, b = 1;
    std::cin >> n;
    std::cout << 0;
    if (n > 1)
        std::cout << " " << 1;
    for(int i = 2; i < n; i++) {
        int f = a + b;
        std::cout << " " << f;
        a = b;
        b = f;  
    }
    std::cout << std::endl;
    return 0;
}