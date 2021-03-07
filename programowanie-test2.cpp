

// 1. Napisz fragment programu, kt�ry wczytuje kolejne wiersze
// z pliku "cos.txt" i drukuje pierwszy i ostatni znak w ka�dym wierszu.

string wiersz;

ifstream plik_we("cos.txt"); // wymagana biblioteka "fstream"

if (!plik_we.good())
{
	cout << "Blad otwarcia pliku 'cos.txt'" << endl;
	return 1;
}

while (!plk_we.eof())
{	
	getline(plik_we, wiersz); 
	cout << wiersz[0] << " " << wiersz[wiersz.size() - 1] << endl;
}

plik_we.close();


// 2. Napisz fragment programu, kt�ry wczytuje kolejne wiersze z pliku "moj.txt"
// i drukuje dwa pierwsze znaki (o ile s� co najmniej dwa) z ka�dego wczytanego wiersza.
// Nale�y zdefiniowa� potrzebne zmienne.

string wiersz;

ifstream plik_we("moj.txt"); // wymagana biblioteka "fstream"

if (!plik_we.good())
{
	cout << "Blad otwarcia pliku 'moj.txt'" << endl;
	return 1;
}

while (!plk_we.eof())
{
	getline(plik_we, wiersz);

	if (wiersz.size() >= 2)
		cout << wiersz[0] << " " << wiersz[1] << endl;
}

plik_we.close();


// 3. Napisz fragment programu, kt�ry wczytuje kolejne wiersze z pliku "nowy.txt"
// i drukuje ��czn� d�ugo�� wczytanych wierszy.

string wiersz;
int licznik = 0;

ifstream plik_we("nowy.txt"); // wymagana biblioteka "fstream"

if (!plik_we.good())
{
	cout << "Blad otwarcia pliku 'nowy.txt'" << endl;
	return 1;
}

while (!plk_we.eof())
{
	getline(plik_we, wiersz);

	licznik += wiersz.size();
}

plik_we.close();

cout << "Laczna dlugosc wczytanych wierszy: " << licznik << endl;


// 4. Napisz fragment programu, kt�ry z pliku "jakis.txt" wczytuje dane
// do tablicy J[n] (n - sta�a), po czym drukuje �redni� dodatnich element�w tej tablicy.
// Nale�y zdefiniowa� potrzebne sta�e i zmienne.

const int n = 5;
double J[n];
double suma_dodatnich = 0;
int liczba_dodatnich = 0;

ifstream plik_we;
plik_we.open("jakis.txt");

if (!plik_we.good())
{
	cout << "Blad otwarcia pliku 'jakis.txt'" << endl;
	return 1;
}

/* liczby w pliku z danymi powinny by� napisane tak, jak podaje si� dane liczbowe
z klawiatury, czyli musz� by� oddzielone spacjami lub Enterami;
je�li w pliku nie b�dzie liczb albo b�d� inne niepotrzebne znaki, program
przestanie dzia�a� */

for (int i = 0; i < n; i++)
{
	plik_we >> J[i];

	if (J[i] > 0)
	{
		suma_dodatnich += J[i];
		liczba_dodatnich++;
	}
}

plik_we.close();

cout << "Srednia liczb dodatnich: " << suma_dodatnich / (double)liczba_dodatnich;


// 5. Napisz fragment programu, kt�ry z pliku "stary.txt" wczytuje dane ca�kowite
// do tablicy S[n] (n - sta�a), po czym drukuje liczb� element�w parzystych w  tej tablicy.
// Nale�y zdefiniowa� potrzebne sta�e i zmienne.

const int n = 5;
int S[n];
int ilosc_parzystych = 0;

ifstream plik_we;
plik_we.open("stary.txt");

if (!plik_we.good())
{
	cout << "Blad otwarcia pliku 'stary.txt'" << endl;
	return 1;
}

for (int i = 0; i < n; i++)
{
	plik_we >> S[i];

	if (S[i] % 2 == 0)
		ilosc_parzystych++;
}

plik_we.close();

cout << "Ilosc liczb parzystych w tablicy: " << ilosc_parzystych << endl;


// 6. Napisz fragment programu, kt�ry z pliku �tab.txt� wczytuje dane do tablicy
// A[n](n - sta�a) i drukuje  sum� element�w wi�kszych od sta�ej H .
// Nale�y zdefiniowa� potrzebne sta�e i  zmienne.

ifstream plik_we("tab.txt");
const int n = 5;
const int H = 15;
int A[n];
int suma_elementow = 0;

for (int i = 0; i < n; i++)
{
	plik_we >> A[i];

	if (A[i] > H)
		suma_elementow += H;
}

plik_we.close();

cout << suma_elementow;
	

// II
// Zadania na test online nr 2 z rekordami

// 1. Napisz definicj� typu rekordowego Tauto o polach (nazwa, rocznik, cena)
// oraz definicj� dw�ch samochod�w jako zmiennych o dowolnych nazwach
// i odpowiednie instrukcje przypisuj�ce tym zmiennym konkretne (przyk�adowe) warto�ci.

struct Tauto
{
	string nazwa;
	int rocznik;
	double cena;
};

Tauto auto1;
Tauto auto2;

auto1.nazwa = "Maluch";
auto1.rocznik = 1972;
auto1.cena = 999.99;

auto2.nazwa = "Garbus";
auto2.rocznik = 1984;
auto2.cena = 30000.00;


// 2. Napisz definicj� typu rekordowego Tpunkt o polach (x, y, z) oraz definicj� trzech punkt�w
// jako zmiennych o dowolnych nazwach i instrukcje wczytuj�ce wsp�rz�dne tych punkt�w.

const int n = 3;

struct Tpunkt
{
	double wsp_x, wsp_y, wsp_z;
};

Tpunkt punkty[n];

for (int i = 0; i < n; i++)
{
	cout << "Podaj wspolrzedne punktu (x, y, z): ";
	cin >> punkty[i].wsp_x >> punkty[i].wsp_y >> punkty[i].wsp_z;
}

// 3. Napisz definicj� typu rekordowego Tsam o polach (nazwa, rocznik, cena) oraz definicj�
// dw�ch samochod�w tego typu i odpowiednie instrukcje przypisuj�ce tym zmiennym przyk�adowe warto�ci.

struct Tsam
{
	string nazwa;
	int rocznik;
	double cena;
};

Tsam sam1;
Tsam sam2;

sam1.nazwa = "Maluch";
sam1.rocznik = 1972;
sam1.cena = 999.99;

sam2.nazwa = "Garbus";
sam2.rocznik = 1984;
sam2.cena = 30000.00;


// 4. Napisz definicj� typu rekordowego Taparat o polach(model, producent, liczba megapikseli)
// oraz definicj� trzech aparat�w jako zmiennych o dowolnych nazwach oraz instrukcje wczytuj�ce dane o tych aparatach.

const int n = 3;

struct Taparat
{
	string model, producent;
	double liczba_megapikseli;
};

Taparat foto[n];

for (int i = 0; i < n; i++)
{
	cout << "Podaj model, producenta i liczbe megapikseli aparatu";
	cin >> foto[i].model >> foto[i].producent >> foto[i].liczba_megapikseli;
}



// III
// Zadania na test online nr 2 z funkcjami dzia�aj�cymi na parametrach typu prostego

// 1. Napisz definicj� funkcji, kt�ra dla jakich� dwu warto�ci typu ca�kowitego,
// b�d�cych parametrami funkcji, zwraca napis informuj�cy, kt�ra z tych dwu warto�ci jest wi�ksza.

string porownanieLiczb(int x, int y)
{
	if (x > y)
		return "Wieksza jest pierwsza wartosc";
	else if (x < y)
		return "Wieksza jest druga wartosc";
	else
		return "Sa sobie rowne";
}


// 2. Napisz definicj� funkcji, kt�ra dla jakich� dwu warto�ci a i b typu ca�kowitego,
// b�d�cych parametrami funkcji, drukuje �redni� tych warto�ci i zwraca warto�� 3*a/b/2: 

double obliczenia(int a, int b)
{
	double wynik;

	cout << "Srednia liczb a i b: " << ((double)a + (double)b) / 2 << endl;

	wynik = 3.0 * (double)a / (double)b / 2.0;

	return wynik;
}


// 3. Napisz definicj� funkcji, kt�ra dla jakich� dwu warto�ci a i b typu ca�kowitego,
// b�d�cych parametrami funkcji, drukuje obie te warto�ci i zwraca warto�� 3*a/b:

double obliczenia(int a, int b)
{
	double wynik;

	cout << "Wartosci liczb a i b: " << a << " " << b << endl;

	wynik = 3.0 * (double)a / (double)b;

	return wynik;
}


// 4. Napisz definicj� funkcji, kt�ra dla jakich� dwu napis�w b�d�cych parametrami funkcji
// zwraca napis informuj�cy, czy pierwszy napis jest kr�tszy ni� drugi.

string krotsza(string napis1, string napis2)
{
	if (napis1.size() > napis2.size())
		return "Napis pierwszy nie jest krotszy niz drugi.";
	else if (napis1.size() < napis2.size())
		return "Napis pierwszy jest krotszy niz drugi.";
	else
		return "Oba napisy maja taka sama dlugosc.";
}


// 5. Napisz definicj� funkcji, kt�ra dla jakich� dwu warto�ci a i b typu ca�kowitego,
// b�d�cych parametrami funkcji, drukuje obie te warto�ci i zwraca warto�� 2 * a + b:

int obliczenia(int a, int b)
{
	cout << a << endl << b << endl;

	return 2 * a + b;
}


// IV
// Zadania na test online nr 2 z funkcjami dzia�aj�cymi na tablicach jednowymiarowych

// 1. Napisz definicj� funkcji, kt�ra dla jakiej� tablicy T o n elementach typu string (b�d�cej parametrem funkcji)
// drukuje tylko te elementy tablicy, kt�re s� d�u�sze ni� jaka� warto�� b�d�ca parametrem funkcji.

const int n = 5;

void dluzsze(string T[], int dlugosc)
{
	for (int i = 0; i < n; i++)
		if (T[i].size() > dlugosc)
			cout << T[i] << endl;
}


// 2. Napisz definicj� funkcji, kt�ra dla jakiej� tablicy X o n elementach rzeczywistych (b�d�cej parametrem funkcji)
// drukuje tylko te elementy tablicy, kt�re s� wi�ksze od jakiej� warto�ci b�d�cej parametrem funkcji
// i przekazuje przez parametr ich ilo��.

const int n = 5;

void dluzsze(double X[], double wartosc, int &ilosc)
{
	ilosc = 0;

	for (int i = 0; i < n; i++)
		if (X[i] > wartosc)
		{
			cout << T[i] << endl;
			ilosc++;
		}			
}


// 3. Napisz definicj� funkcji, kt�ra dla jakiej� tablicy P o n elementach
// ca�kowitych(b�d�cej parametrem funkcji) wyznacza i zwraca poprzez parametry
// formalne odpowiednio  sum� i r�nic� dw�ch ostatnich element�w tablicy.

const int n = 5;

void dwa_ostatnie(int P[n], int &suma, int &roznica)
{
	suma = P[n - 1] + P[n - 2];
	roznica = P[n - 1] + P[n - 2];
}


// V
// Zadania na test online nr 2 z funkcjami dzia�aj�cymi na tablicach dwuwymiarowych

// 1. Napisz definicj� funkcji, kt�ra dla jakiej� tablicy liczb rzeczywistych X[n][n] (n- sta�a nielokalna),
// b�d�cej parametrem funkcji,  przekazuje  przez parametry najwi�ksz� i najmniejsz� warto�� na g��wnej przek�tnej.

const int n = 4;

void funkcja(double X[][n], double &max, double &min)
{
	max = A[0][0];
	min = A[0][0];

	for (int i = 1; i < n; i++)
	{
		if (A[i][i] > max)
			max = A[i][i];
		if (A[i][i] < min)
			min = A[i][i];
	}
}


// 2. Napisz definicj� funkcji, kt�ra dla jakiej� tablicy napis�w T[w][k] (w, k - sta�e nielokalne)
// (b�d�cej parametrem funkcji) zwraca ilo�� napis�w o d�ugo�ci mniejszej ni� jaka� warto�� b�d�ca parametrem funkcji.

const int w = 3;
const int k = 4;

int ilosc_napisow(string T[][k], int dlugosc_napisow)
{
	ilosc_napisow = 0;

	for (int i = 0; i < w; i++)
		for (int j = 0; j < k; j++)
			if (T[i][j].size() < dlugosc_napisow)
				ilosc_napisow++;

	return ilosc_napisow;
}


// 3. Napisz definicj� funkcji, kt�ra dla jakiej� tablicy znak�w A[w][k] (w, k - sta�e nielokalne)
// (b�d�cej parametrem funkcji) drukuje, ile cyfr jako znak�w jest w kolumnie o indeksie b�d�cym parametrem funkcji.

const int w = 3;
const int k = 4;

void znaki(char X[][k], int kolumna)
{
	int ilosc_cyfr = 0;
	
	if (kolumna < k)
	{
		for (int i = 0; i < w; i++)
			if (A[i][kolumna] >= 0 && A[i][kolumna] <= 9)
				ilosc_cyfr
	}
	else
		cout << "Nie ma takiej kolumny w tej tablicy.";

	cout << "W kolumnie o indeksie " << kolumna << " jest " << ilosc_cyfr << " cyfr."
}

// 4. Napisz definicj� funkcji, kt�ra dla jakiej� tablicy napis�w A[w][k] (w, k - sta�e nielokalne) (b�d�cej parametrem funkcji)
// drukuje tylko te elementy tablicy, kt�re zaczynaj� si� jakim� znakiem  b�d�cym parametrem  funkcji i zwraca ich liczb�.

const int w = 3;
const int k = 4;

int pierwszy_znak(string A[][k], char znak)
{
	ilosc_wyrazow = 0;
	string wyraz;

	for (int i = 0; i < w; i++)
		for (int j = 0; j < k; j++)
		{
			wyraz = T[i][j];
			if (wyraz[0] == znak)
			{
				cout << wyraz << endl;
				ilosc_wyrazow++;
			}
		}			

	return ilosc_wyrazow;
}

// 5. Napisz definicj� funkcji, kt�ra dla jakiej� tablicy napis�w  A[w][k](w, k - sta�e nielokalne),
// b�d�cej parametrem funkcji, drukuje tylko te napisy z tablicy, kt�re zaczynaj� si�
// jakim� znakiem  b�d�cym parametrem  funkcji.

const int w = 3;
const int k = 4;

void pierwszy_znak(string A[][k], char znak)
{
	ilosc_wyrazow = 0;
	string wyraz;

	for (int i = 0; i < w; i++)
		for (int j = 0; j < k; j++)
		{
			wyraz = T[i][j];
			if (wyraz[0] == znak)
				cout << wyraz << endl;
		}
}



























































































>>>>>>>>>>>>>>>>>>>>>>>>>




















// //Napisz fragment programu, który wczytuje (z klawiatury)  tablicę całkowitą A[n] [n] (n - stała)   i do pliku "nowy.txt" zapisuje 
// elementy z głównej przekątnej tej tablicy. Należy zdefiniować potrzebne stałe i zmienne.

const int n =4;
    int A[n][n];
    int number;

   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < n; j++)
       {
           cout << "Podaj wartos dla wspolrzednych : " << i << " i " << j<< endl;
           cin >>number;
           A[i][j] = number;
       }
   }
   ofstream MyFile("nowy.txt");
    for (int k = 0; k < n; k++)
   {
         MyFile << A[k][k];
   }
    MyFile.close();

//Napisz definicję typu rekordowego  o polach (nazwa, rocznik, cena)
//oraz definicję dwóch samochodów jako rekordów o dowolnych nazwach i odpowiednie 
//instrukcje przypisujące polom tych rekordów  konkretne (przykładowe) wartości.

struct Wheel
   {
       int qty;
       int size;
   };

   struct Vehicle
   {
       string name;
       int year;
       float price;
       Wheel wheel;

   };

   Vehicle porsche, bmw, OpelBlitz;

   porsche.name = "Cayman";
   porsche.year = 2021;
   porsche.price = 250000;
   porsche.wheel.qty = 4;
    porsche.wheel.size = 20;


   bmw.name = "Cayman";
   bmw.year = 2021;
   bmw.price = 250000;

   // matrix

using namespace std;

    struct Matrix
    {
        int rows;
        int columns;
    };

    bool isMatrixGreater(int a, Matrix b)
    {
        if(a<b.rows && a<b.columns)
        {
           return false;
        }
        else
        {
            return true;

        }
    }

int main()
{
    Matrix exampleMatrix;
    exampleMatrix.rows = 4;
    exampleMatrix.columns = 4;
    if(isMatrixGreater(3, exampleMatrix))
       {
           cout << "Jest mniejsza";
       }
       else
        {
            cout << "Jest wieksza";
        }
    return 0;
}

//Napisz definicję funkcji, która dla jakiejś tablicy T[N] 
//typu string (będącej parametrem funkcji) drukuje tylko te napisy w  tablicy, 
//które są dłuższe niż jakaś wartość  będąca parametrem funkcji.       


#include <iostream>
#include <fstream>
#include <string>

using namespace std;



void printLongerWords(string T[],int a)
{
    for( int i=0; i<3; i++)
    {
         if(T[i].length() > a)
         {
             cout << T[i] << endl;
         }
    }
}
int main()
{
    string arr[3] = {"dupa", "kwiatek", "macierze"};
    printLongerWords(arr, 3);
    return 0;
}
//Z pliku o nazwie podanej przez użytkownika wczytać dane do wektorów a i b [n] (n-stała).
// Obliczyć iloczyn skalarny tych wektorów. Wydrukować wektory dane i obliczony iloczyn


const int n = 4;

int main(){
	ifstream plik;

	double a[n], b[n];
	double ilsk;
	string nazwa;

	cout << "Podaj plik: " << endl;
	getline(cin, nazwa);

	plik.open(nazwa);

	if (!plik.good()) {
		cout << "Problem z otwarciem pliku" << endl;
		return 1;
	}

	for (int i = 0; i < n; i++) 
		plik >> a[i];

	for (int i = 0; i < n; i++)
		plik >> b[i];

	plik.close();

	cout << "Wektor a: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	cout << "Wektor b: ";
	for (int i = 0; i < n; i++)
		cout << b[i] << " ";
	cout << endl;

	ilsk = 0;
	for (int i = 0; i < n; i++)
		ilsk += a[i] * b[i];

	cout << "Iloczyn skalarny wynosi: " << ilsk << endl;

	return 0;
}
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

w jednym zadaniu trzeba było znaleźć "największy" char w stringu

// masz zrobić funkcję, która przyjmuje tablicę struktur typu Punkt(x,y)
// ale potem masz wylosować dla każdego punktu współrzędne x i y
// "zapisać do tej tablicy odległości poszczególnych punktów od (0,0)
// no i wartości losowane od -20 do 20

//Z pliku "dane.txt" przepisać do pliku "wyniki.txt" tylko te wiersze, 
//w których dwa ostatnie znaki są takie same.


int main(){
	ifstream plik;
	ofstream plik2;
	
	plik.open("dane.txt");
	plik2.open("wyniki.txt");

	if (!plik.good()) {
		cout << "Problem z otwarciem pliku" << endl;
		return 1;
	}
	//ala  - 3
	//012

	string linia;
	while (getline(plik, linia))
	{
		cout << linia << " " << linia.length() << linia[linia.length() - 1] << endl;

		if (linia[linia.length() - 1] == linia[linia.length() - 2]) {
			plik2 << linia << endl;
		}
	}
	plik.close();
	plik2.close();
}

/Wczytać ciąg n punktów - par (x,y), gdzie n - stała, do wektora rekordów, 
po czym zamienić miejscami punkt najdalszy punktowi (0,0) z punktem najbliższym punktowi (0,0).
Przyjąć dla uproszczenia, że jest tylko jeden punkt najdalszy i tylko jeden punkt najbliższy.

struct Punkt
{
	int x;
	int y;
};

const int n = 5;

int main(){
	Punkt punkty[n];
	ifstream plik;
	plik.open("dane.txt");

	if (!plik.good()) {
		cout << "Problem z otwarciem pliku" << endl;
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		plik >> punkty[i].x;
		plik >> punkty[i].y;
	}
	plik.close();

	double maksD = sqrt(pow(punkty[0].x, 2) + pow(punkty[0].y, 2));
	double minD = sqrt(pow(punkty[0].x, 2) + pow(punkty[0].y, 2));
	int indMin = 0, indMaks = 0;

	for (int i = 0; i < n; i++)
	{
		double d = sqrt(pow(punkty[i].x, 2) + pow(punkty[i].y, 2));

		cout << "Punkt (" << punkty[i].x << ", " << punkty[i].y << ")" << "d = " << d << endl;

		if (d > maksD) {
			maksD = d;
			indMaks = i;
		}

		if (d < minD) {
			minD = d;
			indMin = i;
		}
	}

	Punkt temp = punkty[indMin];
	punkty[indMin] = punkty[indMaks];
	punkty[indMaks] = temp;

	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Punkt (" << punkty[i].x << ", " << punkty[i].y << ")" << endl;
	}

	return 0;
}

//Punkty (x,y) utworzone ze wszystkich możliwych par (x,y), 
// gdzie x=0.1,0.2,...1.0, zaś y=2,4,6,...30 wpisać do wektora rekordów, 
// po czym zamienić miejscami rekord pierwszy z ostatnim.

struct Punkt
{
	double x;
	double y;
};

//x 0.1, 0.2, .....1.0 -> 10 roznych x
//y 2,4,6....30 -> 15 roznych y


int main(){
	Punkt punkty[150];
	int k = 0;

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 15; j++) {
			punkty[k].x = i * 0.1;
			punkty[k].y = j * 2;
			k++;
		}
	}

	for (int i = 0; i < 150; i++) {
		cout << punkty[i].x << "\t" << punkty[i].y << endl;
	}

	Punkt temp = punkty[149];
	punkty[149] = punkty[0];
	punkty[0] = temp;

	cout << endl;
	for (int i = 0; i < 150; i++) {
		cout << punkty[i].x << "\t" << punkty[i].y << endl;
	}

	return 0;
}

// Tablicę A[n][n] (n - stała) wypełnić liczbami losowymi całkowitymi z  
// przedziału <d, g> (wartości całkowite d i g należy wczytać), po czym tablicę  
// wydrukować wierszami, a następnie wydrukować sumę elementów nieparzystych  
// leżących pod główną przekątną.  
// Do losowania liczb całkowitych wykorzystujemy funkcję standardową rand z biblioteki <cstdlib> .  
  
    
using namespace std;  
  
const int n=4;  
  
int main(int argc, char* argv[])  
{  
  int A[n][n];      // tablica na wylosowane liczby  
  int i,j,d,g,suma; // zmienne pomocnicze  
    
  do  
  {  
   cout << "Podaj dolna i gorna granice losowanych liczb (obie calkowite)\n";  
   cin >> d  >> g;  
  } while (d > g);  
  
  srand(time(0));  
  
  for (i = 0; i < n; i++)  
   for (j = 0; j < n; j++)  
     A[i][j] = d+rand()%(g+1-d);  
  
 // drukujemy zawartość tablicy  
  for (i = 0; i < n; i++)  
  {  
    for (j = 0; j < n; j++)  
      cout << setw(7) << A[i][j];  
    cout << endl;  
  };  

  suma = 0;  
  for (i = 1; i < n; i++) // przechodzimy przez wszystkie wiersze poczynając od wiersza 2  
    for (j = 0; j < i; j++)  
     
      if (A[i][j] % 2 != 0)  
        suma += A[i][j];  // nieparzyste dodajemy do sumy  
      // Uwaga: warunek A[i][j] % 2 != 0 oznacza, że reszta z dzielenia A[i][j]  
      // przez 2 nie jest równa zeru, czyli że liczba jest nieparzysta  
  
  cout << "suma liczb nieparzystych pod glowna przekatna= " << suma << endl;  
  return 0;  
}  

// Napisz definicje funkcji, która dla jakies tablicy napisow X [n][n] zwraca najdłuzszy napis na 
glownej przekontnej i przekazuje przez parametr ilosć napisow

const int n = 5;

string digonalfunc(string X[n][n], int &count, char startChar) {

int maxLength = INT_MIN
int maxindex;

for (int i = 0; i < n; i++) {
] string word = x[i][i];
 char firstletter = word[0];
 int size = word.size();

if(size > maxlenght) {
  maxLength = size;
  maxindex = i;
}
if (firstletter == startChar) {
 cout++;
  }
} 

return X [maxindex][maxindex];
}

////* masz zrobić funkcję, która przyjmuje tablicę struktur typu Punkt(x,y)
ale potem masz wylosować dla każdego punktu współrzędne x i y
"zapisać do tej tablicy odległości poszczególnych punktów od (0,0)
no i wartości losowane od -20 do 20 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int random;
const int n=5;

struct Punkt{
    int x;
    int y;
};

int randomx;
int randomy;

void funkcja(Punkt Tab[n]){


    for(int i=0; i<n;i++){
    randomx= -20+rand()% 40;
    randomy= -20+rand()% 40;
    Tab[i].x=randomx;
    Tab[i].y=randomy;

    }
}




int main()
{


  srand (time(0));

Punkt Tablica[n];
funkcja(Tablica);

for(int i=0;i<n;i++){
    cout<<Tablica[i].x<<" "<<Tablica[i].y<<endl;

}

    return 0;
}


Napisz definicję funkcji która dla jakiejś tablicy napisów A[n]
(będącej parametrem funkcji) drukuje indeksy napisów o najmniejszej długości (może być ich kilka w tablicy
Zdefiniuj potrzebne stale*/

using namespace std;

const int n=5;
void funkcja(string A[n]){

    string word;
    int najkrotszy;
    for(int i=0; i<n; i++){
        word=A[i];
        if(i==0){
            najkrotszy =word.size();
        }
        else{
            if(word.size()<najkrotszy){
                najkrotszy=word.size();
            }
        }
    }

    for(int i=0; i<n; i++){
        word =A[i];
        if(najkrotszy==word.size()){
            cout<<"indeks do druku: "<<i<<endl;
        }

    }
}

int main()
{

string tab[n]={"s","Marcin","mmm","e","sdadas"};
funkcja(tab);



    return 0;
}

// Napisz definicje funkcji, ktora dla jakiegos napisu, bedacego parametrem funkcji ZWRACA anagram tego napisu.

string anagram (string napis) {
int size = napis.size();
string returnNapis = napis;
char temp;

for (int i = 0; i < size / 2; i++)
temp = returnNapis[i];
returnNapis[i] = returnNapis[size -1 -i];
returnNapis[size -1 -i] = temp;
}

return returnNapis;

}


*
//Napisz definicję funkcji, która dla jakiegoś  napisu 
//przekazuje przez parametr  długość tego napisu  oraz   ZWRACA
//liczbę jakichś znaków w tym napisie  (słowo jakiś oznacza parametr funkcji).

using namespace std;

int funkcja(string napis, int &dlugosc, char znak){

    dlugosc = napis.size();
    //cout<<dlugosc;

    int licznik=0;

    for(int i=0;i<(dlugosc);i++){
        char znakwprowadzony =napis[i];
        if(znakwprowadzony==znak){
            licznik++;
        }
    }
//    dlugosc = dlugoscnapisu;
    return licznik;
}

int main()
{
    int jakdlugi;
    string napisek = "Mama";
    cout<<funkcja(napisek, jakdlugi, 'a')<<endl;
    cout<<jakdlugi;

    return 0;
}


/* Napisz fragment programu wczytujacy dane (z klawiatury) dla tablicy liczb rzeczywistych T[N][M]
nastepnie zapisujesz wszytsko do pliku "wyniki.txt"
Indexy elementow zawierajacy wlasciwosci maksymalne*/

const int N=3;
const int M=3;



int main()
{
    int liczba;
    double Tab[N][M];
    for(int i=0; i<N; i++){
        for(int j=0; j<M;j++){
        cin>>liczba;
            Tab[i][j]=liczba;
        }
    }

 ofstream plik("wyniki.txt");

    for(int i=0; i<N; i++){
        for(int j=0; j<M;j++){
        plik<<Tab[i][j]<<endl;
        }
    }

    double maksymalna;
    for(int i=0; i<N; i++){
        for(int j=0; j<M;j++){
        if(i==0&&j==0){
            maksymalna=Tab[j][j];
        }
        else{
            if(Tab[i][j]>maksymalna){
                maksymalna=Tab[j][j];
            }
        }
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M;j++){
                if(Tab[i][j]==maksymalna){
                    plik<<i<<" " <<j<<endl;
                }
        }
    }
    return 0;
}
//Napisz deklaracje funkcji ktora dla jakiegos napisu przekazuje przez parametr dlugosci 
//tego napisu oraz zwraca licze jakis znakow w tym napisie


int jakas(string input, int &length, char search) {
    length = input.length();
    int found = 0;
    for (int i = 0; i <= length; ++i) {
        if (input[i] == search) {
            found++;
        };
    }
    return found;
}



///A[w][w] imiona.txt

const int w = 4;
const int k = 4;
const char searchingChar = 'a';
string A[w][k];
string filename = "imiona.txt";

ifstream file(filename.c_str());
if (!file.good()) {
    return 1;
}

for (int i = 0; i < w; ++i) {
    for (int j = 0; j <k; ++j) {
        file >> A[i][j];
    }
}

file.close();

for (int i = 0; i < w; ++i) {
    for (int j = 0; j <k; ++j) {
        if(i == 0 || i == w-1 || j == 0 || j == k-1) {
            if ( A[i][j][A[i][j].length() -1] == searchingChar) {
                cout << A[i][j] << endl;
            }
        }
    }
}


/// A[n] przesuniecie cykliczne w lewo jesli suma elementow nie parzystych

const int n = 9;

void shiftLeft(int A[], int searchSum) {
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        if (A[i] %2 == 1){
            sum += A[i];
        }
    }
    
    if (sum > searchSum){
        int temp[n];
        for (int i = 0; i < n; ++i) {
            temp[i] = A[n - i];
        }
        for (int i = 0; i < n; ++i) {
            A[i] = temp[i];
        }
    }
}


// X[w][k] przekazuje przez parametr sume elementów podzielnych przez jakas wartosc oraz zwraca ilosc elementow

const int w = 9;
const int k =7;

int zadanie5(int X[w][k], int &sum, int divideable, int minIndex) {
    sum = 0;
    int qty = 0;
    for (int i = 0; i < w; ++i) { 
        for (int j = minIndex + 1; j < k; ++j) {
            if (X[i][j] % divideable == 0) {
                sum += X[i][j];
                qty++;
            }
        }
    }
    return qty;
}


//Napisz definicję typu rekordowego o polach (nazwisko, miasto, ocena) oraz tablicy A[w][k] (w, k  - stałe) zawierającej elementy tego typu. Następnie napisz fragment programu, który drukuje  dane studentów 
// z najwyższa oceną spośród ocen w tej tablicy.  Zdefiniuj potrzebne stałe i zmienne

int const w = 3;
int const k = 2;
struct Student{
    string nazwisko;
    string miasto;
    double ocena;
};


int main()
{
    Student A[w][k];
    double maks=0;

    for(i=0; i<w; i++){
        for(j=0; j<k;j++){
            Student student=A[i][j];
            if(student.ocena>maks){
                maks=student.ocena;
            }
        }
    }
    for(i=0; i<w; i++){
        for(j=0; j<k;j++){
            Student student=A[i][j];
            if(student.ocena==maks){
                cout << student.nazwisko << ", " << student.miasto << ", " << student.ocena << endl;
            }
        }
    }

// Napisz fragment programu, losujacy do tablicy znakow T[N][M] wielkie litery
//zapisujacy do pliku wyniki.txt te wiersze w ktorych znak jest litera A lub B.

const int N = 5;
const int M = 5;
char T[N][M];
srand (time(0));
for (int i = 0; i < N; i++) {
    for (int j=0;j<M; j++)
    T[i][j] = 'A'+ rand()%('Z'+ 1 -'A');
  }
}

ofstream plik(wynik.txt);

for (int = 0; i < N; i++){
    if (T[i][0]=='A'|| T[i][0]=='B') {
        for (int j = 0;j<M; j++){
            plik << T[i][j];
        }
    }
    plik << endl;
}
plik.close();

//T[N] definicje typu recordowego (nazwisko, plec, wiek) dane kobiet w wielku
//pomiedzy 30 a 35 lat

struct Sdone {
    string nazwisko;
    char plec;
    int wiek;
}
const int N = 5;

Sdane T[N][N];

for (int i = 0; i<N; i++) {
    for(int j=0; j<N; j++) {
        cin >> T[i][j].nazwisko;
        cin >> T[i][j].plec;
        cin >> T[i][j].wiek;
        if (T[i][j].wiek>=30 && T[i][j].plec=='k'){

        }
        cout << endl;
    }
}
//Napisz definicje funkcji, który dla jakichś dwóch napisów przekazuje 
//przez parametr

string funkcja (string napis1, string napis 2; string &dluzszy){
    char najstarszy;
    if napis
}





//Napisz definicję funkcji, która dla jakiejś tablicy liczb 
całkowitych X[w][k] (w, k - stałe) przekazuje  przez parametr sumę 
elementów podzielnych przez jakąś wartość i  leżących w wierszu o jakimś indeksie
 oraz zwraca ilość takich elementów (słowo jakiś oznacza parametr funkcji). Zdefiniuj  potrzebne stałe

 const int w = 3;
const int k = 3;

int funkcja(int X[][k], int &suma, int i, int wiersz){

    int licznik=0;
    for(int m=0; m<k; m++){
        if(X[wiersz][m]%i==0){
            suma = suma+X[wiersz][m];
            cout<<suma<<endl;
            licznik++;
        }

    }
    return licznik;
}


int main()
{
    cout << "Hello world!" << endl;
    int tablica[w][k]={4,4,4,5,5,5,6,6,6};
    int suma=0;
    cout<<funkcja(tablica, suma, 2,0)<<endl;
    cout<<suma<<endl;

    return 0;
}

#include <iostream>

using namespace std;

   /* Wczytaæ dane znakowe do tablicy A[n][n] (n - sta³a), a następnie:
• na gównej przekątnej tablicy znaleźæ najstarszy alfabetycznie znak (czyli najwiêkszy)
• na miejsce tego znaku wpisaæ pierwsz¹ napotkan¹ literê z drugiej przek¹tnej (o ile taka istnieje)
• zapisaæ tê tablicê wierszami do pliku o wczytanej nazwie. */

int main()
{
const int n=4;
char A[n][n];
char znak;
int wspx;
int wspy;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cin>>znak;
          A[i][j]=znak;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<A[i][j]<<" ";
        }cout<<endl;}
    char old;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(i==0&&j==0){
            old=A[i][j];
            wspx=i;
            wspy=j;
          }
          else{
            if(A[i][j]>old && i==j){
                old=A[i][j];
                wspx=i;
                wspy=j;
            }
          }

        }}
        cout<<endl;
        char znak2=';';
        char znak3=';';
        int licznik=0;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(i+j==(n-1)&&licznik==0){
            znak2=A[i][j];
            if((znak2>='a'&&znak2<='z')||(znak2>='A'&&znak2<='Z')){
            znak3=A[i][j];
            licznik++;
            }
            }
        }}

        if(znak2!=';'){
        A[wspx][wspy]=znak2;
        }
            for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<A[i][j]<<" ";
        }cout<<endl;}

        cout<<endl;
        cout<<endl;
        cout<<old;



    return 0;
}


Wczytać rekordy o polach (imie, nazwisko, wiek) do tablic A[w] [k] i B[w] [k] (w, k – stałe), po czym w tablicy A
przesunąć cyklicznie w prawo każdy wiersz, w którym średnia długość imion jest większa od stałej G, zaś średni
wiek jest mniejszy od 25, natomiast w tablicy B przesunąć cyklicznie w prawo każdy wiersz, w którym średnia
długość imion jest większa od wczytanej wartości, zaś średni wiek jest mniejszy od stałej WIEK.
Należy napisać i wykorzystać jedną funkcję, która:
• wczytuje dane do jakiejś tablicy
• w tablicy tej przesuwa cyklicznie w prawo każdy wiersz, w którym średnia długość imion jest większa od
jakiejś wartości, zaś średni wiek jest mniejszy od jakiejś innej wartości.

const int w=2;
const int k=2;
struct SOsoba{
 string imie;
 string nazwisko;
 int wiek;
};

void drukujTab(SOsoba X[w][k], const char G, const int W){

int licznik=0;
double dlugosc[w]={X[w][k].imie.size()};
double suma_wiek[w]={0};
double srednia_im[w]={0};
double srednia_wiek[w]={0};
    for (int i=0; i<w; i++){
        for (int j=0; j<k; j++){
            cout << "Imie: ";
            cin >> X[i][j].imie;
            cout << "Nazwisko: ";
            cin >> X[i][j].nazwisko;
            cout << "Wiek: ";
            cin >> X[i][j].wiek;
        }}
    for (int i=0; i<w; i++){
        for (int j=0; j<k; j++){
        cout << X[i][j].imie << " " << X[i][j].nazwisko << " " << X[i][j].wiek << "\t";
        }
        cout << endl;
        }
Attachment file type: document
message.txt
2.51 KB
     for (int i=0; i<w; i++){
        for (int j=0; j<k; j++){
            dlugosc[i]+=dlugosc[i];
            srednia_im[i]=dlugosc[i]/k;
            suma_wiek[i]+=X[i][j].wiek;
            srednia_wiek[i]=suma_wiek[i]/k;
        }}
    SOsoba schowek;
    for (int i=w-1; i>=0; i--){
        if (abs(srednia_im[i]) > G && abs(srednia_wiek[i]) < W){
            schowek=X[i][k-1];
            for (int j=k-1; j>=0; j--){
                X[i][j]=X[i][j-1];
            }
            X[i][0]=schowek;
            }}
    for (int i=0; i<w; i++){
        for (int j=0; j<k; j++){
        cout << X[i][j].imie << " " << X[i][j].nazwisko << " " << X[i][j].wiek << "\t";
        }
        cout << endl;
        }
}

int main()
{
    SOsoba TabA[w][k];
    SOsoba TabB[w][k];
    const int G=3;
    const int WIEK=100;

    drukujTab(TabA,G,WIEK);
    return(0);
}


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

#include <iostream>

/*Wczytać dane znakowe do tablicy A[n][n] (n - stała), a następnie:
• na głównej przekątnej tablicy znaleźć najstarszy alfabetycznie znak (czyli największy)
• na miejsce tego znaku wpisać pierwszą napotkaną literę z drugiej przekątnej (o ile taka istnieje)
• zapisać tę tablicę wierszami do pliku o wczytanej nazwie
*/

using namespace std;

const int n = 2;
char A[n][n];

int main()
{
char znak;
char najstarszy='0';
char litera;
int licznik=0;

for (int i=0; i<n;i++){
    for (int j=0; j<n;j++){
    cin >> znak;
    A[i][j]=znak;
}}

for (int i=0; i<n;i++){
    for (int j=0; j<n;j++){
    cout << A[i][j] << "\t";
}
    cout << endl;
}
for (int i=0; i<n;i++){
    for (int j=0; j<n;j++){
        if (A[i][i]>=najstarszy){
            najstarszy=A[i][i];
    }}}

for (int i=0; i<n;i++){
    for (int j=0; j<n;j++){
        if (((A[i][n-1-i]>='a' && A[i][n-1-i]<='z') || (A[i][n-1-i]>='A' && A[i][n-1-i]<='Z')) && licznik==0){
            litera=A[i][n-1-i];
            licznik++;
    }}}

for (int i=0; i<n;i++){
    for (int j=0; j<n;j++){
        if (A[i][i]==najstarszy){
            A[i][i]=litera;
        }}}

for (int i=0; i<n;i++){
    for (int j=0; j<n;j++){
    cout << A[i][j] << "\t";
}
    cout << endl;
}
cout << najstarszy << endl;
cout << litera;

return 0;
}


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

#include <iostream>

/*Napisać program, który wczytuje tablice A[n][n] i B[n][n] (n - stała) zawierające rekordy o polach (imie, ocena), po
czym w tablicy A przesuwa cyklicznie o 1 miejsce w prawo wiersz o indeksie 2, zaś w tablicy B przesuwa
cyklicznie o 1 miejsce w prawo wiersz o indeksie 5. Na koniec wydrukować wierszami obie tablice.
Należy napisać i wykorzystać:
- funkcję wczytywania danych do jakiejś tablicy podanego typu rekordowego
- funkcję, która w jakiejś tablicy tego typu przesuwa cyklicznie o 1 miejsce w prawo wiersz o jakimś indeksie
- funkcję drukowania jakiejś tablicy podanego typu rekordowego*/

using namespace std;

const int n=2;
struct SOsoba{
    string imie;
    int ocena;
};

void PiszTablica(SOsoba X[n][n]){
for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
        cin >> X[i][j].imie;
        cin >> X[i][j].ocena;
    }
}
for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
        cout << setw(10) << X[i][j].imie << " , " << X[i][j].ocena<<"\t";
    }
    cout << endl;
}}
void PrzesunTab(SOsoba X[n][n],int indeks){
SOsoba schowek;
for (int i=n-1; i>=0; i--){
        if (i==indeks-1){
    for (int j=n-1; j>=n; j--){
            schowek=X[i][n-1];
            X[i][j]=X[i][j-1];
        }
            X[i][0]=schowek;
}}}
void DrukujTab(SOsoba X[n][n]){
for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
        cout << setw(10) << X[i][j].imie << " , " << X[i][j].ocena<<"\t";
    }
    cout << endl;
}}

int main()
{

SOsoba TabA[n][n];
SOsoba TabB[n][n];

PiszTablica(TabA);
//PiszTablica(TabB);
PrzesunTab(TabA,2);
DrukujTab(TabA);
return 0;
}


szukanie drugirj przekatnej...

void setCheapestProduct()
{
    int mod = n-1;
    for (int l = 0; l < n; l++)
    {
        for (int m = 0; m< mod ; m++)
        {
            if(A[l][m].price <lowestPrice)
            {
                lowestPrice = A[l][m].price;
                cheapest.name = A[l][m].name;
                cheapest.price = A[l][m].price;
                cheapest.x =  A[l][m].x;
                cheapest.y =  A[l][m].y;

            }
        }
        mod--;
    }
}