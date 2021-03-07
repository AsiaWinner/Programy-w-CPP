
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    const unsigned int w = 10;           // ilość wierszy
    const unsigned int k = 10;           // ilość kolumn
    const unsigned int G = 20;          // minimalna śreednia do przesunięcia
    const unsigned int D = 2;           // liczba podzielności
    const unsigned int tableWidth = 7;  // szerokość tabeli
    int A[w][k];                        // tablica danych
    int i,j, lineTotal, smallest, divideableCount[k]; // zmienne pomocnicze
    smallest = INT_MAX;

    srand(w * k * G * D + time(NULL));

    // Wylosuj liczby
    for (i = 0; i < w; ++i) {
        for (j = 0; j < k; ++j) {
            A[i][j] = (rand() % 90 + 10) * (rand() % 2 ? -1 : 1);
        }
    }

    //Wydrukuj nagłówki
    for (i = 0; i < k; ++i) {cout << right<< setw(tableWidth) << i << '\t'; }
    cout << right<< setw(tableWidth) << "AVG" << endl;

    // wydrukuj separator
    for (i = 0; i <= k; ++i) {cout << right << setw(tableWidth) << string(tableWidth, '-') << '\t';}
    cout << endl;

    // wydrukuj dane
    for (i = 0; i < w; ++i) {
        lineTotal = 0;
        for (j = 0; j < k; ++j) {
            cout << right<< setw(tableWidth) << A[i][j] << '\t';
            lineTotal += A[i][j];
        }

        cout << right<< setw(tableWidth) << setprecision(2) << fixed << float(lineTotal) / float(k)  << endl;
    }

    cout << endl;

    //przesuń dane
    for (i = 0; i < w; ++i) {
        lineTotal = 0;
        for (j = 0; j < k; ++j) {
            lineTotal += A[i][j];
        }

        if (abs(float(lineTotal) / float(k)) > G) {
            int lastElement = A[i][k - 1];
            for (j = k - 1; j > 0; --j) {
                A[i][j] = A[i][j - 1];
            }
            A[i][0] = lastElement;
        }
    }


    //Wydrukuj nagłówki
    for (i = 0; i < k; ++i) {cout << right<< setw(tableWidth) << i << '\t'; }
    cout << endl;

    // wydrukuj separator
    for (i = 0; i < k; ++i) {cout << right<< setw(tableWidth) << string(tableWidth, '-') << '\t';}
    cout << endl;

    // wydrukuj dane
    for (i = 0; i < w; ++i) {
        lineTotal = 0;
        for (j = 0; j < k; ++j) {
            cout << right<< setw(tableWidth) << A[i][j] << '\t';
            lineTotal += A[i][j];
        }

        cout << endl;
    }

    cout << endl;

    // wydrukuj separator
    for (i = 0; i < k; ++i) {cout << right<< setw(tableWidth) << string(tableWidth, '-') << '\t';}
    cout << endl;

    // sumuj ilość podzielnych liczb przez stałą D
    for (j = 0; j < k; ++j) {
        divideableCount[j] = 0;
        for (i = 0;  i < w ; i++) {
            if (A[i][j] % D == 0) {
                divideableCount[j]++;
            }
        }
        // określ najmniejszą
        smallest = min(smallest, divideableCount[j]);
        cout << right<< setw(tableWidth) << divideableCount[j] << '\t';
    }

    cout << endl;

    cout << "Kolumny z najmniejsza iloscia podzielnych to: ";
    for (j = 0; j < k; ++j) {
        if (divideableCount[j] <= smallest) {
            cout << j << ' ';
        }
    }

    return 0;
}
