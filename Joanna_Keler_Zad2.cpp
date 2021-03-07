#include <iostream>
using namespace std;

const int D = 5;

int main(){
	int liczba, liczbaPop = 0;
	int min = INT_MAX;
	int licznikPodzielnychD = 0;
	int licznikNastPoUjemnych = 0;

	do {
		cout << "Podaj liczbe: ";
		cin >> liczba;

		if (liczba < min)
			min = liczba;

		if (liczba % D == 0)
			licznikPodzielnychD++;

		if (liczba < 0 && liczbaPop < 0)
			licznikNastPoUjemnych++;

		liczbaPop = liczba;

	} while (liczba % 2 != 0 && liczba % 3 != 0);

	cout << "Najmniejsza: " << min << endl;
	cout << "Licznik podzielnych przez D: " << licznikPodzielnychD << endl;
	cout << "Licznik nastepujcych po sobie ujemnych: " << licznikNastPoUjemnych << endl;
}