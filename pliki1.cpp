#include <iostream>
#include <fstream>
// #include <string>
// #include <cstdlib> 
using namespace std;

int main() {
  string line;  
  ifstream dane; // plik do odczytu
  dane.open ("dane.txt");  
  if ( !dane.good() ) {  
    cout << " Blad otwarcia pliku" << endl;      
    return 1;
  }
  
  if (dane.is_open())
  {
    while ( getline (dane,line) )
    {
      cout << line << endl;
    }
    dane.close();
  }

  return 0;
}