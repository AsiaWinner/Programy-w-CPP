#include<iostream>

using namespace std;

string PIN;

int main(){
   cout<< "witaj w naszym banku!" << endl;
   cout << "Podaj numer PIN:";
   cin>> PIN;

   if(PIN=="1729") 
   {
       cout << "Poprawny PIN";
   }

   return 0;
}