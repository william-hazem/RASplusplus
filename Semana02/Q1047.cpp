#include <iostream>
#include <cmath> 
using namespace std;
 
int main() {
    int hi, mi, hf, mf, seg(0);
    cin >> hi >> mi >> hf >> mf;

    if (hf == hi)
    {
        seg += 24*3600;
    }
    else if (hf < hi)
    {
        seg += (24 - hi - hf) * 3600;
    }
    else
    {
        seg += (hf - hi) * 3600;
    }
    
    if (mf < mi)
    {
        seg += (60 - (mi - mf)) * 60;
    }
    else
    {
        seg += (mf - mi) * 60; 
    }
    int h = seg / 3600, m = (seg - h*3600) / 60;
    cout
        << "O JOGO DUROU"
        << " " << h << " "
        << "HORA(S) E"
        << " " << m << " "
        << "MINUTO(S)"
        << endl;

    return 0;
}