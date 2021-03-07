// Napisz pętlę while, która wczytuje znaki i zlicza wśród tych znaków małe litery, 
// aż do napotkania znaku określonego stałą  K1 lub K2 (tego ostatniego znaku nie wliczać).  Napisz potrzebne definicje stałej i zmiennych.
#include <iostream>

using namespace std;

char znak;
const char K1 = 'J';
const char K2 = 'a';
int licznik = 0;

int main()
{
    while(znak != K1 && znak != K2)
    {
      cout << "Podaj znak: " << endl;
      cin >> znak;
      //if(znak >= 'a' && znak <= 'z')
      if(islower(znak) && znak!=K1 )
      {
        licznik++;
      } 
    }
    cout << "Liczba malych znakow: " << licznik << endl;
    return 0;
}

//int islower ( int K)