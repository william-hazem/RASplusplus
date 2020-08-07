#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float m = (a*2 + b*3 + c*4 + d) / 10.0;
    cout << fixed << setprecision(1) << "Media: " << m << endl;
    if(m >= 7) 
    {
        cout << "Aluno aprovado.\n";
    }
    else if(m < 5)
    {
        cout << "Aluno reprovado.\n";
    }
    else
    {
        cout << "Aluno em exame.\n";
        float m2;
        cin >> m2;
        cout << "Nota do exame: " << m2 << '\n';
        if( (m + m2) / 2.0) 
        {
            cout << "Aluno aprovado.\n";
        }
        else
        {
            cout << "Aluno reprovado.\n";
        }
        cout << "Media final: " << (m + m2) / 2.0 << '\n';
    }
    return 0;
}