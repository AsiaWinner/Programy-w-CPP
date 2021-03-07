//Napisać program, który wczytuje liczby całkowite aż do powtórnego wczytania liczby podzielnej
//przez pierwszą
//wczytaną liczbę. Wydrukować następujące informacje (biorąc pod uwagę wszystkie wczytane liczby):
//• najmniejszą liczbę tego ciągu
//• największą ujemną liczbę tego ciągu
//• ile było w tym ciągu liczb podzielnych przez stałą P.

#include <iostream>

using namespace std;

const int P = 4;
int pierwszaliczba;
int liczba;
int ujemna;
int najmniejsza = 0;
int podzielnychP = 0;
bool czy_ujemna = false;

void sprawdz()
{
    if (liczba < 0)
    {
        czy_ujemna = true;
        if (liczba > ujemna)
            ujemna = liczba;
    }
    if (liczba < najmniejsza)
    {
        najmniejsza = liczba;
    }
    if (liczba < ujemna)
    {
        ujemna = liczba;
    }
    if (liczba % P == 0)
        podzielnychP++;

    cout << "Podaj liczbe całkowita " << endl;
    cin >> liczba;
}
int main()
{
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> pierwszaliczba;
    liczba = pierwszaliczba;
    sprawdz();
    while (liczba % pierwszaliczba != 0)
    {
        sprawdz();
    }
    cout << "najmniejsza " << najmniejsza << "podzielnych przez P " << podzielnychP << endl;
if(czy_ujemna)
{
    cout << " Liczba ujemna " << ujemna << endl;
}
else 
{
    cout << "Nie ma liczby ujemnej" << endl;
}
    return 0;
}
