#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
 
double A;
double B;
double C;
double R1;
double R2;
double f;

cin >> A >> B >> C;

f = pow(B,2)-(4*A*C);

R1 = ((-B)+sqrt(f))/(2*A);
R2 = ((-B)-sqrt(f))/(2*A);

if( f <= 0 || A <= 0 || C <= 0)
 cout << "Impossivel calcular" << endl;
else
 {cout << fixed << setprecision(5) << "R1 = " << R1 << endl;
 cout << fixed << setprecision(5) << "R2 = " << R2 << endl;}


    return 0;
}
