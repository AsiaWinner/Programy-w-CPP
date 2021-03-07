//Wczytać dane do tablic A[n], B[n] o elementach typu string (n-stała). Z tablicy A wydrukować elementy zaczynające się literą 'P', zaś z tablicy B - zaczynające się literą 'M'.
//Napisać i wykorzystać:
//funkcję wczytywania jakiejś tablicy podanego typu;
//funkcję, która z jakiejś tablicy podanego typu drukuje elementy zaczynające się jakąś literą
//(słowo "jakiś" oznacza parametr funkcji).


#include<iostream>

using namespace std;

const int n = 4;



void wczytaj(string X[n])
{
    for (int i = 0; i < n; i++) {
    cout << "Podaj elementy do tablicy" << endl;
    getline(cin, X[i]); 
    }
}

void drukuj(string X[n], char litera) {
    for (int i = 0; i < n; i++) {

        if (X[i][0] == litera)
        cout << " drukowane elementy" << X[i] << endl;
        cout << endl;
    }}
 
int main() {

string A[n], B[n];
cout << "tablica A[n]" << endl;

wczytaj(A);

drukuj(A, 'P');

}
