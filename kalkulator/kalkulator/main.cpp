#include <iostream>
#include "funkcje.h"
#include <cmath>



int main() {

	std::cout << Funkcje::logarytm(25);

	double tab[5] = { 14.3, 3.14, 21.37, 20.0, 1.55 };
	std::cout << Funkcje::odchylenie(tab, 5);

	std::cout << Funkcje::exponent(25);

	return 0;
}