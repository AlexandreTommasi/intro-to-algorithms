#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
int imposto;
double renda;
double imp1;
double imp2;
double imp3;


cin >> renda;



imp1 = (renda-2000)*0.08 ;
imp2 = 1000*0.08 + (renda-3000)*0.18;
imp3 = 1000*0.08 + 1500*0.18 + (renda-4500)*0.28;

if(renda <= 2000.00)
cout << "Isento" << endl;
else
if(renda > 2000.01 && renda <= 3000.00)
cout << fixed << setprecision(2) << "R$ " << imp1 << endl;
else
if(renda > 3000.01 && renda <= 4500.00)
cout << fixed << setprecision(2) << "R$ " << imp2 << endl;
else
if(renda > 4500.00)
cout << fixed << setprecision(2) << "R$ " << imp3 << endl;
else


return 0;
}