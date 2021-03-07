
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
 
    string inputString;
    unsigned int longestWord = 0;
    unsigned int shortestWord = UINT_MAX;
    bool atLeastYouTried = false;

    cout << "podaj dowolna ilosc wyrazow, zakoncz wpisywanie kropka" << endl;

    cin >> inputString;
    while(inputString.back() != '.') {
        shortestWord = min((unsigned int)inputString.length(), shortestWord);
        longestWord = max((unsigned int)inputString.length(), longestWord);
        atLeastYouTried = true;
        cin >> inputString;
    }

    if (atLeastYouTried) {
        cout << "o ile najdluzszy wczytany napis jest dluzszy od najkrotszego: " << longestWord - shortestWord << endl;
    } else {
        cout << "nie podano zadnego napisu" << endl;
    }
    cout << endl << "*****************" << endl;


    int k;
    const int g = 8;

    cout << "podaj liczbe dodatna, mniejsza od " << g << endl;

    do {
        cin >> k;
    } while (k <= 0 || k >= g);



    unsigned int totalIntsInStrings = 0;

    cout << "podaj " << k << " napisy" << endl;

    for (int i = 0; i < k; ++i) {
        cout << "(" << i + 1 << "/" << k << ") podaj kolejny napis :";
        cin >> inputString;
        for (char j : inputString) {
            if ( isdigit(j) ) {
                totalIntsInStrings++;
            }
        }
    }


    cout << "ilosc cyfr we wszystkich napisach to :" << totalIntsInStrings << endl;
    cout << endl << "*****************" << endl;


    const unsigned n = 5;
    char Z[n];

    srand(totalIntsInStrings + k + longestWord - shortestWord + time(NULL));

    for (int i = 0; i < n; ++i) {
        Z[i] = 'A' + rand() % 26;
    }

    for (int i = 0; i < n; ++i) {
        cout << Z[i];
    }

    cout << endl;

    char tempChar;
    tempChar = Z[0];
    Z[0] = Z[n - 2];
    Z[n - 2] = tempChar;

    tempChar = Z[1];
    Z[1] = Z[n - 1];
    Z[n - 1] = tempChar;


    for (int i = 0; i < n; ++i) {
        cout << Z[i];
    }

    return 0;
}
