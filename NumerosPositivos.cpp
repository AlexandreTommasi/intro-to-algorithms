#include <iostream>
using namespace std;

int main()
{
	float x;
	int y;
	int i;
	int valores;
	
	y=6;
	
	valores = 0;
	
	for(i=0 ; i<y ; i++)
	{
		cin >> x;
		if (x > 0)
			
			valores = valores + 1;
	}
	
	cout << valores <<" valores positivos"<< endl;
	return 0;
}