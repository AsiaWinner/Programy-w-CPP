#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
using namespace std;

    const int w = 4;
    const int k = 4;
    const int D = 4;
    const float G = 10.0;
    int A[w][k];
    int B [2] = {-1,1};
    int index = 0;
    int rowsToShift[w];
    int clipboard=0;
    int howMany[k];
    int minimum = k;

void displayArrayBeforeShift()
{
     srand(time(0));
    for (int i = 0; i < w; i++)
    {
        int row = 0;
          for (int j = 0; j < k; j++)
          {

            int c =  rand() % 2 + 0;
            A[i][j] = B[c] * (rand() % 80 + 10);
            cout << A[i][j] << "  ";
            row = row+ A[i][j];
          }
          float average = (float)row/k;
          if(average > G )
          {
              rowsToShift[index] = i;
              index++;
          }
          cout << std::setprecision(4)<<average;
          cout << endl;
    }
}

void shift()
{
      for (int l = 0; l < index; l++)
      {
        int row = rowsToShift[l];
        clipboard =  A[row][k-1];
        for (int m = k-1 ; m >-1; m--)
        {
            if(m==0)
            {
                  A[row][m]=clipboard;
            }
            else
            {
                A[row][m]=  A[row][m-1];
            }
        }
      }
}

void  displayArrayAfterShift()
{
        cout << endl;
        for (int i = 0; i < w; i++)
        {
            for (int j = 0; j < k; j++)
            {
                cout << A[i][j] << "  ";
                if( (A[i][j]%D)==0)
                {
                    howMany[j] = howMany[j]+1;
                }
            }
                cout << endl;

        }
}
void displayCountNumbersInColumns()
{

        for(int a=0;a<k;a++)
        {
            if(howMany[a]<minimum)
            {
                minimum = howMany[a];
            }
            cout << howMany[a] << "   ";
        }
        cout << endl;
}

void displaySmallestNumbers()
{
        cout << "Najmniej liczb maja kolumny: ";
        for(int a=0;a<k;a++)
        {
            if(howMany[a]==minimum)
            {
                  cout << a << "   ";
            }
        }
}

int main()
{
        displayArrayBeforeShift();
        shift();
        displayArrayAfterShift();
        displayCountNumbersInColumns();
        displaySmallestNumbers();
}
