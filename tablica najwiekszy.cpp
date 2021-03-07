//Wczytać dane znakowe do tablicy A[n][n] (n - stała), a następnie:
// na głównej przekątnej tablicy znaleźć najstarszy alfabetycznie znak (czyli największy)
// na miejsce tego znaku wpisać pierwszą napotkaną literę z drugiej przekątnej (o ile taka istnieje)
// zapisać tę tablicę wierszami do pliku o wczytanej nazwie


#include<iostream>

using namespace std;

const int n = 2;
char A[n][n];
char tab;

int main() 
{

for(int i = 0; i < n; i++) {
 for (int j = 0; j < n; i++) {
   cin << tab;
   A[i][j] = tab;
  }
} 

for(int i = 0; i < n; i++) {
 for (int j = 0; j < n; i++) {
 cout << A[i][j];

}


cout << " tablica " << i << endl;