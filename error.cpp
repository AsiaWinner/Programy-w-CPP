
#include<iostream>
#include<iomanip>
#include<string>


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
    }}
 
int main() {

string A[n], B[n];
cout << "tablica A[n]" << endl;

wczytaj(A);

drukuj(A, 'P');

wczytaj(B);

drukuj(B, 'M');

return 0;

}
