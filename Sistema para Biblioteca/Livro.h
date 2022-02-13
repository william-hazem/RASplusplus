#ifndef LIVRO_H
#define LIVRO_H

#pragma once

#include <string>

class Livro
{
public:
	Livro();
private:
	std::string titulo, autor, editora;
	unsigned short int volume, codigo;

};

#endif // !LIVRO_H


