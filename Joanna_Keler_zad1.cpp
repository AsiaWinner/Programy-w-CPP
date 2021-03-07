#include <iostream>  
#include <cstdlib> 
#include <string>
#include <iomanip>

using namespace std;


// step 1: print a welcome message.
// welcome function

int main() 
{
     std::string imie;
     cout<<"Imie studenta?\n";
     cin>>imie;
     cout<<"Witaj "<<imie<<"!\n---\n";
    //  return;
    

// step 2: get number input and 
// convert string input to type int (number not usable until convereted)
// 2.1 check if x == y then (exit if true)
// 2.2 check if x or y is 0/nil just a note with I dont like 0)

    int mniejsza;
    int x;
    int y;
    cout<<"Podaj liczbe naturalna\n";
    cin>> x;
    cout<<"Oto twoja liczba "<<x<<"\n";
    cout<<"Podaj druga liczbe naturalna\n";
    cin>> y;
    cout<<"Twoje dwie liczby "<<x<<" "<<y<<"\n";
    
    if (x==y) {
    cout<<"Nie lubie takich samych numerow\n";
    return 0; }

    if (x==0 || y==0) cout<< "nie dziel przez zero"<<endl;
    
    int Negative = 0;
    if (x<0) Negative++;
    if (y<0) Negative++;
    cout<<"Ilosc liczb ujemnych "<<Negative<<"\n";
    
// 4 Drukuje wynik dzielenia mniejszej liczby przez podwojoną wartość większej. z wynikiem

  float wynik; 
   if(x<y)
     {  
        wynik = (float)x/(2*(float)y);
        cout << "Wynik dzielenia: " << wynik << endl;
        mniejsza = x;
     }
    else
    {
        wynik = (float)y/(float)(2*(float)x);
        cout << "Wynik dzielenia: " << wynik << endl;
        mniejsza = y;
    }

 //5 Drukuje informację, czy mniejsza z wczytanych liczb jest jednocyfrowa, czy
 // dwucyfrowa, czy też ma więcej cyfr.
 if (mniejsza < 10 && mniejsza > -10)  
      cout << " mniejsza liczba jest jednocyfrowa\n";  
    
    // dla liczb dwucyfrowych  
    else if (mniejsza < 100 && mniejsza > -100)  
      cout << "mniejsza liczba jest drucyfrowa\n";  
    
    // dla liczb trzycyfrowych  
    else if (mniejsza < 1000 && mniejsza > -1000)  
      cout << "mniejsza liczba jest trzycyfrowa\n";  
    
    // dla liczb czterocyfrowych  
    else if (mniejsza < 10000 && mniejsza > -10000)  
      cout << "mniejsza liczba jest czterocyfrowa\n";  
    
    // w pozostałych przypadkach  
    else  
      cout << "mniejsza liczba jest wielocyfrowa\n";  

}
