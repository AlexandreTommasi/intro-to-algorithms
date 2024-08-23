#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
   double area;
   double raio;
   double p;
 
 cin >> raio;
   
   p = 3.14159;
   
   area = p*raio*raio;
 
 cout << "A=" << fixed << setprecision (4) << area << endl; 
 
 
    return 0;
}