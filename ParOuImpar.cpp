#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    int i;
    int x=0;
       cin >> n;
    
    for(i=0;i < n; i++)
	{
		   cin >> x;
		if(0 < x && x%2==0 )
			cout << "EVEN POSITIVE" << endl;
			if( 0 < x && x%2>0)
				cout << "ODD POSITIVE" << endl;
				if(0 > x && x%2==0)
			cout << "EVEN NEGATIVE" << endl;
				if(0 > x && (-x%2)>0)
				cout << "ODD NEGATIVE" << endl;
			if(x==0)
				cout << "NULL" << endl;
	
	x++;	
	}

		
		
    return 0;
}