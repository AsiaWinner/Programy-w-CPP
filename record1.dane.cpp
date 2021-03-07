// pliki Utworzyć plik o nazwie nowy.txt i 
//zapisac do niego "aaa"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
//   ofstream plik("nowy.txt", ios::app);
//   plik << "ccc";
//   plik.close();

//    return 0;  
// }

// Z pliku o nazwie podanej przez użytkownika
// wczytywac i drukowac znaki 
// sprawdzic poprawnosc otwarcia pliku

string nazwa_pliku;
cin >> nazwa_pliku;

ifstream plik(nazwa_pliku.c_str());

if(plik.good()) {
    char znak;
    while(!plik.eof()){
        plik >> znak;
        if(!plik.eof())
        cout << znak << '\t';
    }


}else {
    cout << "plik nie istnieje";
}
plik.close();
}