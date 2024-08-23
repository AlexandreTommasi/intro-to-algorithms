#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
   double A;
   double B;
   double media;
   
   cin >> A >> B >> fixed >> setprecision (1);
   
   media = (A*3.5+B*7.5)/11;
   
   cout << "MEDIA = " << fixed << setprecision(5) << media << endl;
 
    return 0;
}