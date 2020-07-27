#include <iostream>
#include <string>

int cont(std::string& r, const char* busca);

int main() {
    unsigned short n;
    std::cin >> n;
    //O nome dos personagens é apenas lixo para nosso programa, logo eles nem servirão de nada
    std::string temp, r;    
    for(int i = 0; i < n; i++) {
        char temp_r;
        std::cin >> temp >> temp_r;
        r += temp_r;
    }

    std::cout << cont(r, "X") << " Hobbit(s)\n";
    std::cout << cont(r, "H") << " Humano(s)\n";
    std::cout << cont(r, "E") << " Elfo(s)\n";
    std::cout << cont(r, "A") << " Anao(s)\n";
    std::cout << cont(r, "M") << " Mago(s)\n";
    return 0;
}

int cont(std::string& r, const char* busca) {
    int cont = 0, pos = 0;
    while(true) {
        //retorna a posição do valor encontrado, ou o tamanho da string caso não encontre o valor
        pos = r.find(busca, pos);
        // se pos < r.size(), então há alguma ocorrência do valor de busca
        if(pos < r.size()) 
        {
            cont++;
            //é necessário incrementar, para evitar que ele retorne a mesma posição que da ocorrência anterior
            pos++;
        }
        else
            break;
    }
    return cont;
}