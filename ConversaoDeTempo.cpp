#include <iostream>
 
using namespace std;
 
int main() {
 
 int N;
int horas;
int minutos;
int segundos;

cin >> N;

horas = N/3600;
minutos = (N/60)%60;
segundos = N%60 ;

cout << horas << ":" << minutos << ":" << segundos << endl;
 
    return 0;
}