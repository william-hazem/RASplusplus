#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <algorithm>
using std::search;

int main()
{
    int n, cont;
    char* m;
    while(true) // Looping do jogo da velha D-1
    {
        cont = 0;
        cin >> n;
        cin.ignore();
        if(n == 0)
        {
            break;
        }
        m = new char[n];
        
        cin >> m;
        char* begin = m;
        while(begin < m+n)
        {
            begin = std::find_if(begin, m + n, [](char c){return c == 'X';});
            begin = begin+1;
        }
        delete(m);

        if((n - cont)%2 == 0)
        {
            cout << 'N' << endl;
        }
        else
        {
            cout << 'S' << endl;
        }
        
    }
    return 0;
}