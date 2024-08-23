#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
int funcionario;
int horas;
double valor;
double salario;

cin >> funcionario;
cin >> horas; 
cin >> valor;

salario = horas*valor;

cout << "NUMBER = " << funcionario << endl;
cout << fixed << setprecision(2) << "SALARY = U$ " << salario << endl;

    return 0;
}