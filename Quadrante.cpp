#include <iostream>
 
using namespace std;
 
int main() {
 
int X;
int Y;

cin >> X;
cin >> Y;

while(X!=0 || Y!=0)
 {
     if(X>0 && Y>0)
     cout << "primeiro" << endl;
     if(X>0 && Y<0)
     cout << "quarto" << endl;
     if(X<0 && Y<0)
     cout << "terceiro" << endl;
     if(X<0 && Y>0)
     cout << "segundo" << endl;
     
     cin >> X;
     cin >> Y;
 }
         
 return 0;
}