#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
 cout << "Program for_3, drukujacy znaki pomiedzy 'A' i 'z'\n\n";  


 for (char zn = 'a'; zn >= 'A'; zn--)
   cout << zn;
   cout << endl;
   return 0;
}