#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
 
int main() {
 
double x1;
double x2;
double y1;
double y2;
double distancia;

cin >> x1 >> y1;
cin >> x2 >> y2;

distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

cout << fixed << setprecision(4) << distancia << endl;



    return 0;
}