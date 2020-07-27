/*
    Distância entre dois pontos.
	URI - 1015
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <clocale>

struct point {
	double x, y;
};

inline double point_dist(point& a, point& b);

int main() {
	setlocale(LC_ALL, "portuguese");
	point a, b;
	std::cerr << "Calculo da distância entre dois pontos. \n" 
		<< "Digite as duas entradas do primeiro ponto: ";
	std::cin >> a.x >> a.y; 
	std::cin.ignore();
	std::cerr << "Digite as duas entradas do segundo ponto: ";
	std::cin >> b.x >> b.y;
	std::cin.ignore();
	//print_point("A", a);
	//print_point("B", b);
	//Precisão de 4 números e fixada pós virgula
	std::cerr << "A distancia entre os pontos é: ";
	std::cout << std::setprecision(4) << std::fixed
        << point_dist(a, b) << std::endl;

	return 0;
}

double point_dist(point& a, point& b) {
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}