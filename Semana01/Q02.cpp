#include <iostream>

int main() {
	int dia = 0, mes = 0, ano = 0;
	std::cerr << "Números de dias: ";
	std::cin >> dia;

	ano = dia / 365;
	mes = (dia - ano * 365) / 30;
	dia = dia - ano * 365 - mes * 30;

	std::cout 
        << ano << " ano(s)\n"
		<< mes << " mes(es)\n"
		<< dia << " dia(s)"
        << std::endl;
	return 0;
}