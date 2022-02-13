#include <iostream>

class CPF
{
public:
    friend std::istream& operator>> (std::istream& in, CPF& c)
    {
        in >> c.cpf;
        return in;
    }
    friend std::ostream& operator<< (std::ostream& out, CPF& c)
    {
        out << c.cpf.substr(0, 3) << std::endl
            << c.cpf.substr(4, 3) << std::endl
            << c.cpf.substr(8, 3) << std::endl
            << c.cpf.substr(12, 2);
        return out;
    }
    std::string cpf;

};

int main()
{
    CPF cpf;
    std::cin >> cpf;
    std::cout << cpf << std::endl;

}