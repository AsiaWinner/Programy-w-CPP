#include <fstream>  
#include <iostream>  
#include <string>  
#include <cstdlib>  
  
using namespace std;   
  
int main( )  
{  
  
  char zn;   

  string nazwa;   
    
  cout << "Program wyswietlajacy na ekranie zawartosc pliku\n\n ";  
    
 
  cout << "Podaj nazwe pliku:\n";  
  getline (cin, nazwa);  
  
  // Następnie otworzymy plik do odczytu korzystając z funkcji konwersji c_str        
  ifstream plk(nazwa.c_str());  
  if ( !plk.is_open() )  {  
  cout << " Nie ma takiego pliku " << endl ;      
  return 1;
  }        
     
    
  plk.get(zn);    // próba wczytania z pliku pierwszego znaku  
  while (!plk.eof())   // dopóki to nie koniec pliku  
  {    
    cout << zn;  
   // odczyt kolejnego znaku z pliku  
    plk.get(zn);  
  }  
       
  plk.close();   
  
  cout << "\n\nOsiagnieto koniec pliku ";  
    
  return 0;   
} 