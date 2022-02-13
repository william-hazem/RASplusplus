#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <iomanip>
#include <algorithm>
using std::sort;
#include <vector>
using std::vector;

class imovel
{
public:
    imovel(int _x = 0, int _y = 0) : x(_x), y(_y) {}
    int consumo_por_pessoa() {return y / x;}
    int getX() {return x;}
    int getY() {return y;}
    void addX(int x) {this->x += x;}
private:
    int x, y;
};


int main()
{
    unsigned int n(1), ncidade(1), npessoa(0);
    unsigned short x, y;
    double cm(0.0); //consumo medio
    vector<imovel> dados;
    imovel* iptr,* iptr2; 
    while(true) // Loop
    {
        cin >> n;
        if(n == 0) break; //Fim
        
        for(int i = 0; i < n; i++)
        {
            cin >> x >> y; // numero de pessoas no imovel e consumo
            npessoa += x;
            cm += y;
            dados.push_back(imovel(x, y));
        }
        std::cout << "Cidade# " << ncidade << ':' << endl;
        ncidade++;

        sort(dados.begin(), dados.end(), [](imovel i1, imovel i2){ return (i1.consumo_por_pessoa() < i2.consumo_por_pessoa()); }  );
        
        iptr = dados.data();
        iptr2 = iptr+1;

        std::cerr << "size: " << dados.size() << endl;
        for(imovel i : dados)
        {
            cout << i.getX() << '-' << i.consumo_por_pessoa() << ' ';
        }
        cm = cm / npessoa;
        cout << endl
            << "Consumo media: "
            << std::fixed << std::setprecision(2)
            << cm
            << " m3."
            << endl 
            << endl;
        cm = 0;
        npessoa = 0;
        dados.clear();
    }
    return 0;
}