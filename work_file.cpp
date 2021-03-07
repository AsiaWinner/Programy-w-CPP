#include<iostream>
#include<string>
#include<cstdlib> 

using namespace std;

int run()// moze powinnam tam wrzucic int main
{ 
 int x;
 int y; 
 int sumOfNegative = 0;
 string name;
 cout << "What is your name?" << endl;
 cin >> name;
 cout << "Welcome!" << name << endl;
 cout << "Can you write one numer" << endl;
 cin >> x;
 cout << " Secund number" << endl;
 cin >> y;
 if (x < 0)
    sumOfNegative++;
 if (y < 0)
    sumOfNegative++;
 if (x==y)
 {
    cout << "I dont like even numbers!" << endl;
    return 0;   } 
cout << "Number of negative numbers" << sumOfNegative<<endl;   
  

}
