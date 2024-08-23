#include <iostream>
 
using namespace std;
 
int main() {
 
int dias;
int meses;
int anos;
int sobra;

cin >> dias;

anos = dias/365;
meses = (dias%365)/30;
sobra = (dias%365)%30;

cout << anos << " ano(s)" << endl;
cout << meses << " mes(es)" << endl;
cout << sobra << " dia(s)" << endl;
 
    return 0;
}