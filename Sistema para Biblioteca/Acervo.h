#ifndef ACERVO_H
#define ACERVO_H

#pragma once
#include <vector>

#include "Livro.h"
#include "Usuario.h"

class Acervo 
{
private:
	bool addPessoa(Pessoa* pessoa);
	bool rmvPessoa(Pessoa* pessoa);
	bool addLivro(Livro* livro);
	bool rmbLivro(Livro* livro);


public:
	std::vector<Livro> vlivro;
	std::vector<Pessoa> vpessoa;

};

#endif // !ACERVO