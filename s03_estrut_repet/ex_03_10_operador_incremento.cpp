#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: diferenca entre:
// i++ (pos-incremento) : retorna o valor inicial de i
// ++i (pre-incremento) : retorna o valor incrementado de i


int main()
{ 
	int i = 1;
	int j = 1;
	
	int a = i++; // a = 1   i = 2
	
	cout << "a = " << a << "   i = " << i <<  endl;
 	
	int b = ++j; // b = 2   j = 2
	
 	cout << "b = " << b << "   j = " << j <<  endl;
 
    system("pause");
    return 0;
}
