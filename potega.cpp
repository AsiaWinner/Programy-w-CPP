#include <iostream>  
#include <cstdlib>  
  
using namespace std;  
  
int main()  
{  
  // potrzebne są dwie zmienne, sterująca oraz przechowująca aktualną potęgę   
  int i, potega;  
  
  // inicjacja zmiennych   
  i = 0;  
  potega = 1;  
    
  // C++ jest elastycznym językiem programowania. Jeśli zachodzi potrzeba   
  // inicjacji zmiennych, można to zrobić w trakcie ich definicji, np tak:   
  // int i = 0, potega = 1;   
  
  // rozpoczynamy pętlę   
  while (i <= 10)  
  {  
    // wypisujemy aktualna potęgę  
    cout << "2 ^ " << i << " = " << potega << endl;  
    // zwiększamy licznik - wykorzystamy do tego operator inkrementacji  
    i++;  
    // i obliczamy następną potęgę - także wykorzystamy skróconą formę   
    // operatora przypisania  
    potega *= 2;  
  }  
    
   return 0;  
}  