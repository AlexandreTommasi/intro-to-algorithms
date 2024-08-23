#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
int automovel;
int horas;
int velocidadem;
double distancia;
double litros;

automovel = 12;

cin >> horas;
cin >> velocidadem;

distancia = horas*velocidadem;
litros = distancia/automovel;


cout << fixed << setprecision(3) << litros << endl;

 
    return 0;
}