#include <iostream>
 
using namespace std;
 
int main() {
 
    int a[3], b[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> b[i];
        a[i] = b[i];
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(a[j] > a[j + 1])
            {
                int aux = a[j + 1];
                a[j + 1] = a[j];
                a[j] = aux;
            }
        }
    }
    for(int i : a)
    {
        cout << i << endl;
    }
    cout << endl;
    for(int i : b)
    {
        cout << i << endl;
    }
    return 0;
}