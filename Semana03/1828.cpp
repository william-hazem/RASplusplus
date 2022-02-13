#include <iostream>
#include <array>

short resultado(std::string, std::string);

std::string regra[10][2] = {
    {"tesoura","papel"}, 
    {"papel", "pedra"},
    {"pedra", "lagarto"},
    {"lagarto", "Spock"},
    {"Spock", "tesoura"},
    {"tesoura", "lagarto"},
    {"lagarto", "papel"},
    {"papel", "Spock"},
    {"Spock", "pedra"},
    {"pedra", "tesoura"}
    };


int main()
{
    short r;
    int t;
    std::cin >> t; std::cin.ignore();
    std::string a, b;
    for(int i = 1; i <= t; i++)
    {
        std::cin >> a >> b;
        r = resultado(a, b);
        std::cout << "Caso #" << i << ": ";
        if(r == 0)
            std::cout << "Bazinga!" << std::endl;
        else if(r == 1)
            std::cout << "Raj trapaceou!" << std::endl;
        else
            std::cout << "De novo!" << std::endl;
    }
    std::cout << std::endl;
    return 0;
}

short resultado(std::string sheldon, std::string raj)
{
    if(sheldon == raj) return 2;    //Empate
    std::string sr[2] = {sheldon, raj};
    std::string rs[2] = {raj, sheldon};
    for(short i = 0; i < 10; i++)
    {
        if(sr[0] == regra[i][0] && sr[1] == regra[i][1]) return 0;    //Sheldon Ganhou
        else if(rs[0] == regra[i][0] && rs[1] == regra[i][1]) return 1;   //Raj Ganhou
    }
    return 2; //Empate
}