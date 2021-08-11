#include <iostream> 
#include <cfloat>

using namespace std; 

// Objetivo1: operadores aritmeticos com operandos reais 
// Objetivo2: tipos de ponto flutuante

int main()
{
    float float1, float2, result;
    
	float1 = 11;
	float2 = 4;

	result = float1 + float2;
    cout << "Soma: " << result << endl;
    
	result = float1 - float2;
    cout << "Subtracao: " << result << endl;

	result = float1 * float2;
    cout << "Multiplicacao: " << result << endl;

	result = float1 / float2;
    cout << "Divisao: " << result << endl<<endl;
	
	//result = float1 % float2; // ERRO! Pois nao ha resto em divisao de numeros reais.
    //cout << "Resto: " << result << endl;
	
	cout << "Número de Dígitos Significativos" << endl;
	cout << "float:       " << FLT_DIG << endl;
	cout << "double:      " << DBL_DIG << endl;
	cout << "long double: " << LDBL_DIG << endl<<endl;
	
	cout << "Valores Máximos do Expoente" << endl;
	cout << "float:       " << FLT_MAX_10_EXP << endl;
	cout << "double:      " << DBL_MAX_10_EXP << endl;
	cout << "long double: " << LDBL_MAX_10_EXP << endl<<endl;
	
    cout << "Número de Bits na Mantissa" << endl;
	cout << "float:       " << FLT_MANT_DIG << endl;
	cout << "double:      " << DBL_MANT_DIG << endl;
	cout << "long double: " << LDBL_MANT_DIG << endl<<endl;

    system("pause");
    
    return 0; 
}