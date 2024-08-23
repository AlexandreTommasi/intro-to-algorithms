#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x = 2;
	double soma = 0 ;
	double n ;
	double media;
	int a = 0 ;
	
	
	
	cin>>n;
	
	while(x != a)
	{
		
		if(n < 0 || n > 10)
		{
			cout<<"nota invalida"<<endl;
		}
		cin>>n;
		
		if(n >=  0 && n <= 10)
		{
		soma = soma + n;
		
		a++;
		}
		
	}
	media = soma/a;
	
	
	cout<<fixed<<setprecision(2)<<"media = "<<media<<endl;
	
	return 0;
}