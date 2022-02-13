#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#pragma once

#include "livro.h"

class Emprestimo
{
public:
	Emprestimo();
	~Emprestimo() { this->livro = 0; }
	void setLivro(class Livro* livro);
	bool setDe(unsigned short data[3]);

	class Livro getLivro() const;
	unsigned short getDe() const;
private:
	Livro* livro;
	unsigned short de[3];	//Data de emprestimo
};

#endif // !Emprestimo_H