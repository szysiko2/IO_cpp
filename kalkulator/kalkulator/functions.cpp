#include <iostream>
#include <cmath>
#include "funkcje.h"

double Funkcje::logarytm(double x) {
	if (x <= 0.0) {
		return NAN;
	}

	return log(x);
}


double Funkcje::odchylenie(const double* dane, int rozmiar) {
	double suma = 0.0;
	double srednia = 0.0;

	for (int i = 0; i < rozmiar; ++i) {
		suma += dane[i];
	}


	srednia = suma / rozmiar;

	double sumaKwadratowRoznic = 0.0;
	for (int i = 0; i < rozmiar; ++i) {
		sumaKwadratowRoznic += pow(dane[i] - srednia, 2);
	}

	return sqrt(sumaKwadratowRoznic / (rozmiar - 1));
}

double Funkcje::exponent(double x) {
	return exp(x);
}