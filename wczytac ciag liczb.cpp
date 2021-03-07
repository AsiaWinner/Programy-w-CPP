//Wczytywać ciąg liczb całkowitych aż do wczytania liczby zawartej pomiędzy dwiema pierwszymi liczbami ciągu.
//Na podstawie wszystkich wczytanych liczb wydrukować następujące informacje:
//• średnią wartość liczb jednocyfrowych
//• ile razy dwie liczby parzyste stały obok siebie w tym ciągu.

#include <iostream>

using namespace std;
bool czy_jednocyfrowa(int n)
{
    return n >= -9 && n <= 9;
}

int main()
{
    int aktualna = 0;
    int poprzednia = 0;
    int dol = 0;
    int gora = 0;
    float suma = 0;
    int ile_liczb = 0;
    int ile_par_parzystych = 0;

    cout << "Podaj liczbe : " << endl;
    cin >> poprzednia;

    cout << "Podaj liczbe : " << endl;
    cin >> aktualna;

    if (czy_jednocyfrowa(poprzednia))
    {
        suma += poprzednia;
        ile_liczb++;
    }

    if (aktualna < poprzednia)
    {
        dol = aktualna;
        gora = poprzednia;
    }
    else
    {
        dol = poprzednia;
        gora = aktualna;
    }
    cout << "dol: " << dol << endl;
    cout << "gora: " << gora << endl;
    do
    {

        if (czy_jednocyfrowa(aktualna))
        {
            suma += aktualna;
            ile_liczb++;
        }
        if (aktualna % 2 == 0 && poprzednia % 2 == 0)
        {
            ile_par_parzystych++;
        }

        poprzednia = aktualna;
        cout << "Podaj liczbe " << endl;
        cin >> aktualna;

    } while (aktualna < dol || aktualna > gora);

    cout << "Ilosc par parzystych " << ile_par_parzystych << endl;
    if (ile_liczb == 0)
    {
        cout << "Brak liczb jednocyfrowych" << endl;
    }
    else
    {
        cout << "  srednia  " << suma / ile_liczb << endl;
    }
}
