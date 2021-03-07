//Wczytać rekordy o polach (marka, cena) do tablic  A[n] i B[n] (n -stała) (n -stała). Wydrukować marki aut o cenie mniejszej od stałej X 
// i zaczynające się literą T  w tablicy A oraz  marki aut o cenie mniejszej od stałej Y  i zaczynające się literą M  w tablicy B, a następnie  
// informację, w której tablicy jest większa średnia  cena aut w rekordach o indeksach parzystych.
//wczytującą dane rekordowe do jakiejś tablicy podanego typu
//drukującą marki aut  o cenie mniejszej od jakiejś  wartości i zaczynające się jakimś znakiem   w  tej tablicy 
// zwracającą (przez return)   średnią cenę aut  w rekordach o indeksach parzystych.

#include<iostream>
#include <iomanip>

using namespace std;

const int n = 4;
const int x = 7;
const int y = 11;

struct samochod
{
  string marka;
  int cena;
};

double funkcja (samochod X[n], char los, int price)
{
  double srednia = 0;
  int licznik = 0;
  double suma = 0;
  
  for (int i = 0; i < n; i++) {
    cout << "Podaj elementy do tablicy" << endl;
    cin >> X[i].marka;
    cin >> X[i].cena;
    }
  for (int i = 0; i < n; i++) {
    if (X[i].cena < price&& X[i][0] == los) {
    cout << " Marka auta: " << X[i].marka << " - " <<  X[i].cena << endl;
    }
  }
  for (int i = 0; i < n; i++) {
    if(i % 2 == 0) {
    licznik++;
    suma += X[i].cena;
    }
   srednia = suma / licznik;
   }
return srednia;
}

int main() {

samochod A[n];
samochod B[n];

cout << "tablica A[n]" << endl;

double sredniaA = 0;
double sredniaB = 0;

funkcja(A, 'T', x);
sredniaA = srednia;
funkcja(B, 'M', y);
sredniaB = srednia;

if (sredniaA > sredniaB) 
cout << sredniaA << "srednia A wieksza " << endl;
  if (sredniaA < sredniaB) 
  cout << sredniaB << "srednia B wieksza " << endl;
  if(sredniaA == sredniaB)
  cout << "srednie sa rowne " << sredniaA << endl;

return 0;
}