#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
double salariofixo;
double montante;
char nome[100];
double salario;

cin >> nome;
cin >> fixed >> setprecision(2) >> salariofixo;
cin >> fixed >> setprecision(2) >> montante;

salario = salariofixo + montante*0.15;

cout << fixed << setprecision(2) <<  "TOTAL = R$ " << salario << endl;

 
 
 
 
 
    return 0;
}