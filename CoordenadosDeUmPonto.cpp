#include <iostream>
using namespace std;

int main()
{
	float eixox;
	float eixoy;
	
	cin >> eixox >> eixoy;
	
	if(eixox == 0 && eixoy== 0  )
		cout << "Origem" << endl;
	else
		if((eixox>0 || eixox<0) && eixoy ==0)
			cout << "Eixo X" << endl;
		else
			if(eixox==0 && (eixoy>0 || eixoy<0))
				cout << "Eixo Y" << endl;
			else
				if(eixox>0 && eixoy>0)
					cout << "Q1" << endl;
				else
					if(eixox>0 && eixoy<0)
					cout << "Q4" << endl;
				else
					if(eixox<0 && eixoy>0)
					cout << "Q2" << endl;
				else
					if(eixox<0 && eixoy<0)
					cout << "Q3" << endl;
				else
	
	
	
	return 0;
}