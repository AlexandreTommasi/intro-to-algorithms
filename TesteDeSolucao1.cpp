#include <iostream>
 
using namespace std;
 
int main() {
 
int A;
int B;
int C;
int D;

cin >> A >> B >> C >> D;

if (B > C && D > A && D + C > A + B && C > 0 && D > 0 && A%2==0)
				cout << "Valores aceitos" << endl;
			else
				cout << "Valores nao aceitos" << endl;
 
    return 0;
}