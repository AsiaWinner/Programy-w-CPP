#include<iostream>
#include<fstream>

using namespace std;

int main() //w pliku podanej przez uzytkownika
{
 string nazwa_pliku;
 cin >> nazwa_pliku;
 ifstream plik(nazwa_pliku.c_str());

if(plik.good()){

}else {
    cout << "plik nie istnieje";

}
plik.close();
}