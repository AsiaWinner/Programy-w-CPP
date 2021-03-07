//Wczytywać zmienne typu char znak po znaku aż powtórzy się zarówno pierwszy, jak i drugi znak. Wydrukować informację
 //ile wczytano dużych liter
 //ile razy dwa znaki & stały obok siebie (tzn. wczytano po sobie dwa ampersandy).
#include<iostream>

using namespace std;



int main()
{
    char znak1 = 'A';
    char znak2 = 'B';
    char aktualny;
    char poprzedni;
    int x = 0;
    int ampersandy =  0;

    do
    {
        poprzedni = aktualny;
        cout << "Podaj znak" << endl;
        cin >> aktualny;
        if (aktualny <= 'Z' && aktualny >= 'A')
        {
            x++;
        }
        if (aktualny == '&' && poprzedni == '&')
            ampersandy++;
    } while (poprzedni != znak1 || aktualny != znak2);

    cout << "Udalo ci sie uzyskac znak A i B" << endl;

    
    cout << "Liczba duzych liter " << x << endl;

    cout << "Para ampersantow = " << ampersandy << endl;
}