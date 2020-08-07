#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, r;
    cin >> n;
    r = n / 100;
    cout << n << '\n';
    cout << r << " notas(s) de R$ 100,00\n";
    n -= r * 100;
    r = n / 50;
    cout << r << " notas(s) de R$ 50,00\n";
    n -= r * 50;
    r = n / 20;
    cout << r << " notas(s) de R$ 20,00\n";
    n -= r * 20;
    r = n / 10;
    cout << r << " notas(s) de R$ 10,00\n";
    n -= r * 10;
    r = n / 5;
    cout << r << " notas(s) de R$ 5,00\n";
    n -= r * 5;
    r = n / 2;
    cout << r << " notas(s) de R$ 2,00\n";
    n -= r * 2;
    cout << n << " notas(s) de R$ 1,00\n";
    return 0;
}