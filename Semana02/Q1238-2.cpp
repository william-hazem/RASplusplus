#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;


int main()
{
    int n, max, sa, sb;
    string a, b;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sa = a.size();
        sb = b.size();
        max = sa > sb ? sa : sb;
        for(int j = 0; j < max; j++)
        {
            if(j < sa)
            {
                cout << a[j];
            }
            if(j < sb)
            {
                cout << b[j];
            }
        }
        cout << endl;
    }
    return 0;
}