#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    unsigned short nteste, gabarito;
    char alternativa;
    bool valido, identificou;
    while(nteste)
    {
        cin >> nteste;
        if(nteste == 0) break;

        for(unsigned short x = 0; x < nteste; x++)
        {
            alternativa = 65;
            valido = true;
            identificou = false;
            for(unsigned short i = 0; i < 5; i++)
            {
                cin >> gabarito;
                if(gabarito <= 127)
                {
                    if(identificou)
                    {
                        valido = false;
                    }
                    alternativa += i;
                    identificou = true;    //Implica que 'pode' ser invalido
                }
            }

            if( (valido == true) && (identificou == true))
            {
                cout << alternativa << endl;
            }
            else
            {
                cout << '*' << endl;
            }
                
            
        }
    }

    return 0;
}