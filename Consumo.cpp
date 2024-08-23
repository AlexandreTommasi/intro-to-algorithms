#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
int X;
  double Y;
  double m;
  
 
  cin >> X >> Y;
  
  m = X/Y;
  
  cout << fixed << setprecision (3) << m << " km/l"<< endl;
 
    return 0;
}