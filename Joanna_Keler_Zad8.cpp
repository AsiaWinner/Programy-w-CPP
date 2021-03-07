#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

const int w = 4;
const int k = 6;

struct Punkt
{
	int x;
	int y;
};

// 5 wierszy
// 0 1 2 3 4

void losuj(Punkt tab[w][k]) {
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < k; j++) {
			if (i == 0 || i == w - 1 || j == 0 || j == k - 1) {
				tab[i][j].x = rand() % 19 - 9; // 0-18 > -9 <-> 9
				tab[i][j].y = rand() % 19 - 9; 
			}
			else {
				tab[i][j].x = rand() % 41 - 20; //0-40
				tab[i][j].y = rand() % 41 - 20; 
			}
		}
	}
}

void pokazTablice(Punkt tab[w][k]) {
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < k; j++) {
			cout << setw(10) << "(" << tab[i][j].x << "; " << tab[i][j].y << ")";
		}
		cout << endl;
	}
	cout << endl;
}


int main(){
	srand(time(NULL));

	Punkt A[w][k];
	Punkt B[w][k];

	losuj(A);
	losuj(B);

	pokazTablice(A);
	pokazTablice(B);
}
