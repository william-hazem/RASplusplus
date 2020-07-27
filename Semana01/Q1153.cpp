#include <iostream>

int fatorial(int i);

int main() {
    int i;
    std::cin >> i;
    std::cout << fatorial(i) << std::endl; 
    return 0;
}

int fatorial(int i) {
    if(i == 0)
        return 1;
    return i * fatorial(i - 1);
}