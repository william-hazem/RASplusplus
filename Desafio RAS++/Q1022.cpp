#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class irracional
{
    friend std::ostream& operator<<(std::ostream& out, irracional& i);
    friend std::istream& operator>>(std::istream& in, irracional& i); 
public:
    irracional(int _n = 0, int _d = 1) : n(_n), d(_d) {} 
    irracional operator+(irracional& i);
    irracional operator-(irracional& i);
    irracional operator*(irracional& i);
    irracional operator/(irracional& i);

    void simplificar();
    inline void ajuste();
    int n, d;
} irr;

int mdc(int n1, int n2);

int main()
{
    int n;
    char op;
    irracional a, b, r;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> op >> b;
        switch (op)
        {
            case '+':
                r = a + b;
                break;
            case '-':
                r = a - b;
                break;
            case '*':
                r = a * b;
                break;
            case '/':
                r = a / b;
                break;
        }
        cout << r << std::endl;
    }
    // cout << b;
    return 0;
}

irracional irracional::operator+(irracional& i)
{
    return irracional(n*i.d + i.n*d, d*i.d);
}

irracional irracional::operator-(irracional& i)
{
    return irracional(n*i.d - i.n*d, d*i.d);
}

irracional irracional::operator*(irracional& i)
{
    return irracional(n*i.n, d * i.d);
}

irracional irracional::operator/(irracional& i)
{
    return irracional(n*i.d, d*i.n);
}

std::ostream& operator<<(std::ostream& out, irracional& i)
{
    i.ajuste();
    out << i.n << '/' << i.d << " = ";
    i.simplificar();
    out << i.n << '/' << i.d;
    return out;
}

std::istream& operator>>(std::istream& in, irracional& i)
{
    char c;
    in >> i.n >> c >> i.d;
    return in;
}

void irracional::simplificar()
{
    int fator;
    if(d > n)
        fator = mdc(d, n);
    else
        fator = mdc(n, d);
    n = n / fator;
    d = d / fator;
    ajuste();
}

void irracional::ajuste()
{
    if(d < 0)
    {
        n = n * -1;
        d = d * -1;
    }
}


int mdc(int n1, int n2)
{
    if(n1 % n2 == 0)
        return n2;
    else mdc(n2, n1%n2);
}