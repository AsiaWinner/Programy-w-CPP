//Poniżej przykład - rozszerzyliśmy funkcjonalność programu read_1, umożliwiając oprócz wydruku zawartości pliku także jego kopiowanie 
// do innego pliku (czyli zbudowaliśmy sobie systemową funkcję copy z podglądem


#include <fstream>  
#include <iostream>  
#include <string>  
#include <cstdlib>  
    
using namespace std;  
  
int main( )  
{  

  string bufor;  
  
  // tym razem dwie zmienne - na nazwę pliku wejściowego i wyjściowego:  
  string nazwa_wej, nazwa_wyj;  
  
  cout << "Program kopiuj, pozwalajacy na kopiowanie plikow z podgladem:\n\n ";  

  cout << "Podaj nazwe pliku do skopiowania:\n";  
  getline (cin, nazwa_wej);  
  // otwieramy plik do odczytu  
  ifstream plik(nazwa_wej.c_str());  
  if ( !plik.is_open() )  {   // jeśli nie udało się otworzyć pliku  
  cout << " Nie ma takiego pliku " << endl ;  
  return 1; // zakończenie pracy programu  
  }  
  cout << "Podaj nazwe kopii: ";  
  cin >> nazwa_wyj;  
  // otwieramy plik do zapisu  
  ofstream plik(nazwa_wyj.c_str());  
  
  // w celu odczytu danych z pliku wykorzystamy pętlę typu while  
    while (!plik.eof())  
  {  
    //Odczyt linii z pliku  
   getline(plik, bufor);  
    // zapis do pliku kopii:  
   plik << bufor << endl;  
    // i wydruk na ekranie  
   cout << bufor << endl;  
  }  
  
  
  // Ważna rzecz - nie zapomnieć o zamknięciu pliku, z którego nie będziemy  
  // już korzystali  
  plik.close();  
  plik.close();  
  
  cout << "\n\nOsiagnieto koniec pliku\n ";  
  
  return 0;  
}  

