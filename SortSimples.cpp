#include <iostream>
 
using namespace std;
 
int main() {
 
int a;
int b;
int c;


cin >> a >> b >> c;


if(a>b && a>c && b>c)
{cout << c << endl;
cout << b << endl;
cout << a << endl;}
else
if(c>b && c>a && b>a)
{cout << a << endl;
cout << b << endl;
cout << c << endl;}
else
if(a>c && a>b && c>b)
{cout << b << endl;
cout << c << endl;
cout << a << endl;}
else
if(c>a && c>b && a>b)
{cout << b << endl;
cout << a << endl;
cout << c << endl;}
else
if(b>a && b>c && a>c)
{cout << c << endl;
cout << a << endl;
cout << b << endl;}
else
if(b>c && b>a && c>a )
{cout << a << endl;
cout << c << endl;
cout << b << endl;}
else
{
}
cout << endl;
cout << a << endl; 
cout << b << endl;
cout << c << endl;    
    
    
    return 0;
}