#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a;
	float media;
	int valores;
	int i;
	int n;
	float soma;
	
	n = 6;
	valores = 0;
	soma = 0;
	
	for(i=0; i<n ;i++)
	{
		cin >> a;
		if(a > 0)
		{
		valores = valores + 1;
	    soma = soma + a;		
	}
	
	
	}
	
    media = (float)soma/valores;
	cout << valores << " valores positivos" << endl;	
	cout << fixed << setprecision(1) << media << endl;
	
	
	return 0;
}