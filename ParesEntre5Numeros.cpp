#include <iostream>
 
using namespace std;
 
int main() {
 
 int x;
 int i;
 int n;

 
 n = 0;
 
 for(i=0;i<5;i++)
 {
 	cin >> x;
 	if(x%2==0)
	 {	
 	n = n + 1;
 	}
 }	
 
 cout << n << " valores pares" << endl;
    return 0;
}