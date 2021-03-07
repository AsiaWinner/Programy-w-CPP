//Wczytywać ciąg znaków aż do napotkania kropki lub średnika.  Wydrukować, ile razy dwa takie same znaki wczytano kolejno po sobie, 
// ilość wczytanych znaków określonych stałą S oraz przedostatni wczytany znak.

#include<iostream>

using namespace std;

const char s = 'a';

char kropka = '.';
char srednik = ';';
char aktualny;
char poprzedni;
int ilosc = 0;
int posobie = 0;


int main() 
{
    while(aktualny != kropka && aktualny != srednik)
{
    poprzedni = aktualny;
    cout << "Podaj jakis znak? " << endl;
    cin >> aktualny;
   if (aktualny == poprzedni)
    posobie++;
   if (aktualny == s)
    ilosc++;

}
cout << "Dwa takie same znaki " << posobie << endl;
cout << "ilosc znakow ze stala s " << ilosc << endl;
cout << "przedostatni znak " << poprzedni << endl;

return 0;
}
