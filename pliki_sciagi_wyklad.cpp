#include<iostream>
#include<fstream>

using namespace std;

int main() // otworzyc plik o nazwie nowy.txt i zapisac 'aaa'
{
ofstream plik("nowy.txt", ios::app);
plik << "aaa";
plik.close();

return 0
}

// z pliku o nazie przez urzytkownika wczytywac i drukowac znaki

string nazwa_pliku;
cin >> nazwa_pliku;

ifstream plik(nazwa_pliku.c_str());

if(plik.good()) {
    char znak;
    while(!plik.eof())
    plik >> znak;
    if(!plik.eof())
    cout << znak << '\t';
}
else {
    cout << "plik nie istnieje";
}
plik.close();

return 0;