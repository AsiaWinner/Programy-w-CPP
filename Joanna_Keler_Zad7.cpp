#include <iostream>
#include <iomanip> 
#include <ctime> 

using namespace std;
const int w = 4;
const int k = 6;
const int r = 1;
const int d = 5;
const int g = 9;

void pokazTablice(double tab[w][k], int prec) {
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < k; j++) {
			cout << fixed << setprecision(prec) << tab[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void losujTablice(double tab[w][k], int a, int b) {
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < k; j++) {
			tab[i][j] = (a*10 + rand() % (b*10 - a*10)) / 10.0;      //0 - 32767
		}
	}
}

int odwracanieElementow(double tab[w][k], double wartosc) {
	int wynik = 0;

	for (int i = 0; i < w; i++) {
		double suma = 0;
		double kopia[k];
		for (int j = 0; j < k; j++) {
			suma += tab[i][j];
			kopia[j] = tab[i][j];
		}

		if (suma < wartosc) {
			for (int j = 0; j < k; j++) {
				tab[i][j] = kopia[k - 1 - j];
			}
			wynik++;
		}
	}
	return wynik;
}

int main(){
	srand(time(NULL));

	double A[w][k];
	double B[w][k];

	losujTablice(A, -r, r);
	losujTablice(B, d, g);

	pokazTablice(A, 1);
	pokazTablice(B, 2);

	int ileA = odwracanieElementow(A, 0);
	int ileB = odwracanieElementow(B, 43);

	pokazTablice(A, 1);
	pokazTablice(B, 2);

	if (ileA > ileB) 
		cout << "W tablicy A odwrocono wiecej wierszy niz w B" << endl;
	else if(ileA < ileB)
		cout << "W tablicy B odwrocono wiecej wierszy niz w A" << endl;
	else if(ileA == ileB)
		cout << "W tablicy A odwrocono tyle samo co w B" << endl;
}