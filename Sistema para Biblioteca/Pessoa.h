#ifndef PESSOA_H
#pragma once

#include <string>

class Pessoa
{
public:
	Pessoa(std::string& nome, std::string& cpf, std::string& email);
	virtual ~Pessoa() {}

	void setNome(std::string& nome);
	bool setCpf(std::string& cpf);
	void setEmail(std::string& email);

	std::string getNome() const;
	std::string getCpf() const;
	std::string getEmail() const;

private:
	std::string nome, cpf, email;
};
#endif // !PESSOA_H
