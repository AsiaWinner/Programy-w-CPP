//Napisz pętlę do-while, która wymusza wpisanie  dowolnego znaku nie będącego stałą. Zdefiniuj tę stałą i potrzebne zmienne.

#include <iostream>     
  
using namespace std;  
const char znak = 's';
string napis;

int main()
{
    do{
      cout << "Podaj znak: " << endl;
      cin >> napis;
    } while(znak == napis[1]);
    return 0;
}
  