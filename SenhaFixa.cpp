#include <iostream>
 
using namespace std;
 
int main() {
 
    int senha;
    
    
    
		while(senha!=2002)
		{
		cin >> senha;
			if(senha!=2002)
			cout << "Senha Invalida" << endl;
		}
        if(senha==2002)
            cout << "Acesso Permitido" << endl;
		
   		 
    return 0;
}