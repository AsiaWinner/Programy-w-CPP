// Generowanie liczb i znaków losowych

#include <cstdlib>      // biblioteka zawierająca funkcje rand, srand i stałą RAND_MAX  
#include <ctime> // biblioteka zawierająca funkcję time  
#include <iostream>

using namespace std;

int x;
int y;

int main() 
{
    cout << "Jakas losowa liczba od 1 do 100" << endl;

    srand(time(NULL));

    x = rand()%100+1;
    y = rand()%100+1;

    cout << x << " " << y << endl;

    return 0;
}


  
// srand (time(0));    // inicjuje generator liczb losowych   
// cout << rand( ); // drukuje liczbę losową całkowitą z przedziału <0, RAND_MAX>  
// cout << rand( )/double(RAND_MAX); // drukuje liczbę losową double z przedziału <0, 1>   
// cout << a+(b-a)*rand( )/double(RAND_MAX); // drukuje liczbę losową double z przedziału <a, b>   
// // Do losowania liczb całkowitych najwygodniej jest  użyć funkcji modulo,   
// // choć nie zapewnia to  rozkładu w pełni jednostajnego:  
// cout << rand( )%100;      // drukuje liczbę losową całkowitą z przedziału <0, 99>   
// cout << a+ rand( )%(b+1-a);   // drukuje  liczbę losową całkowitą z przedziału <a,b>  