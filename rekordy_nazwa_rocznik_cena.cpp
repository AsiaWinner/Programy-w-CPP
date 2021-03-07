//Napisz definicję typu rekordowego  o polach (nazwa, rocznik, cena) oraz definicję dwóch samochodów
// jako rekordów o dowolnych nazwach i odpowiednie instrukcje przypisujące polom tych rekordów  konkretne (przykładowe) wartości.

#include<iostream>
#include<string>
#include <iomanip>


using namespace std;

struct samochod
{
    string nazwa;
    int rocznik;
    double cena;
};


int main()
{
 samochod auto1, auto2;

 auto1.nazwa = "Astra";
 auto1.rocznik = 2020;
 auto1.cena = 80000.50;

 cout << "Dane samochodu pierwszego " << endl;
 cout << auto1.nazwa << " " << auto1.rocznik << " " << fixed << setprecision(2) << auto1.cena << endl;

 auto2.nazwa = "Honda";
 auto2.rocznik = 2006;
 auto2.cena = 30000.99;

cout << "Dane samochodu drugiego " << endl;
cout << auto2.nazwa << " " << auto2.rocznik << " "<< fixed  << setprecision(2)<< auto2.cena << endl;

return 0;
}
