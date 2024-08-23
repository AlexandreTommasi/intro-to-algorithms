#include <iostream>
using namespace std;
 
int main() {
 
    int n;
    int i;
    
    
    cin >> n;
    for(i=1;i<=n;i++)
	{
    	if(5<n && n<5000 && i%2==0)
    		cout << i << "^2 = " << i*i << endl;
	}
 
    return 0;
}