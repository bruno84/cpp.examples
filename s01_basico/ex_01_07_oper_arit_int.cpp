#include <iostream> 

using namespace std; 

// Objetivo: operadores aritmeticos com operandos inteiros

int main()
{
    int int1, int2, result;
	    
	int1 = 11;
	int2 = 4;

	result = int1 + int2;
    cout << "Soma: " << result << endl;
    
	result = int1 - int2;
    cout << "Subtracao: " << result << endl;

	result = int1 * int2;
    cout << "Multiplicacao: " << result << endl;

	result = int1 / int2;
    cout << "Divisao: " << result << endl;
	
	result = int1 % int2;
    cout << "Resto: " << result << endl;
	
    system("pause");
    
    return 0; 
}
