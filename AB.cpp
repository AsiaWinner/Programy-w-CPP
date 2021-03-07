//Wczytywać zmienne typu char znak po znaku aż powtórzy się zarówno pierwszy, jak i drugi znak. Wydrukować informację
#include<iostream>
#include<fstream>

using namespace std;

char znak1 = 'A';
char znak2 = 'B';
char koko;

int main(){
    while (koko != znak1 && koko != znak2)
    {
        cout << "Podaj znak" << endl;
        cin >> koko;
    }
    cout << "Udalo ci sie uzyskac znak A i B" << endl;
}