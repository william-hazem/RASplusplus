#include "Pessoa.h"

Pessoa::Pessoa(std::string& nome, std::string& cpf, std::string& email)
{
	setNome(nome);
	setCpf(cpf);
	setEmail(email);
}

void Pessoa::setNome(std::string& nome)
{
	for (char& c : nome)
	{
		std::toupper(c);
	}
	this->nome = nome;
}

bool Pessoa::setCpf(std::string& cpf)
{
	if (cpf.size() == 11)
	{
		this->cpf = cpf;
	}
	return false;
}

void Pessoa::setEmail(std::string& email)
{
	this->email = email;
}

std::string Pessoa::getNome() const
{
	return this->nome;
}

std::string Pessoa::getCpf() const
{
	return this->cpf;
}

std::string Pessoa::getEmail() const
{
	return this->email;
}
