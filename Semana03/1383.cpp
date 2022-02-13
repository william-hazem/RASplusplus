#include <iostream>

bool valido(short sudoku[9][9]);
bool verificar_grade(short sudoku[9][9], short k);
bool verificar_linha(short sudoku[9][9], short k);
bool verificar_coluna(short sudoku[9][9], short k);

int main()
{

    std::cerr << (8%3) << std::endl;
    int instancia;
    std::cin >> instancia;

    short sudoku[9][9]{0};

    for(int i = 1; i <= instancia; i++)
    {
        for(short i(0); i < 9; i++)
            for(short j(0); j < 9; j++)
                std::cin >> sudoku[i][j];

        std::cout << "Instancia " << i << std::endl;
        if(valido(sudoku))
            std::cout << "SIM" << std::endl << std::endl;
        else
            std::cout << "NAO" << std::endl << std::endl;
    }


    return 0;
}

bool valido(short sudoku[9][9])
{
    for(short k = 0; k < 9; k++)
        if(!verificar_grade(sudoku, k)) return false;

    if(!verificar_coluna(sudoku, 0)) return false;
    if(!verificar_coluna(sudoku, 1)) return false;
    if(!verificar_coluna(sudoku, 2)) return false;

    if(!verificar_linha(sudoku, 0)) return false;
    if(!verificar_linha(sudoku, 3)) return false;
    if(!verificar_linha(sudoku, 7)) return false;

    return true;
}

bool verificar_grade(short sudoku[9][9], short k) //verificando problemas
{
    short elem, ti = 3*(k/3), tj = 3*(k%3);
    for(short o = 0; o < 9; o ++)
    {
        elem = sudoku[o/3 + ti][o%3 + tj];
        for(short i = o/3 + ti; i < ti+3; i++)
        {
            for(short j = o%3 + tj; j < tj+3; j++)
            {
                if(elem == sudoku[i][j] && i != o/3 + ti && j != o%3 + tj)
                    return false;
            }
        }
    }
    
    return true;
}

bool verificar_linha(short sudoku[9][9], short k)
{
    short elem, ti = 3*(k/3);
    
    for(short i = ti; i < 3 + ti; i++) // Controle de linha
    {
        for (short o = 0; o < 9; o++)
        {
            elem = sudoku[i][o];
            for(short j = o + 1; j < 9; j++)
            {
                if(elem == sudoku[i][j])
                {
                    std::cerr << "(" << i << "," << j << ") = (" << i << "," << o << ")\n";
                    return false;
                }
            }
        }
    }
    return true;
}

bool verificar_coluna(short sudoku[9][9], short k)
{
    short elem, tj = 3*(k%3);
    for (short j = tj; j < tj + 3; j++)
    {
        for(short o = 0; o < 9; o++)
        {
            elem = sudoku[o][j];
            for(short i = o + 1; i < 9; i++)
            {
                if(elem == sudoku[i][j]) 
                {
                    std::cerr << "(" << i << "," << j << ") = (" << o << "," << j << ")\n";
                    return false;
                }
            }
        }
    }
    return true;
}