#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
 double A;
 double B;
 double C;
 double media;
 
 cin >> A >> B >> C;
 
 media = (A*2+B*3+C*5)/10;
 
 cout << "MEDIA = " << fixed << setprecision(1) << media << endl;
 
    return 0;
}