#include <iostream>
#include <climits>      /* lib que contem macros com os limites 
                           dos myVars de variaveis */

using namespace std;

// Objetivo: variaveis, inicializacao, declaracao e tamanho de variaveis

int main()
{
    // Inicializacoes:
	char tChar = 'B'; 
	
    short tShort = SHRT_MAX;    // 32.767
    int tInt = INT_MAX;         // 2.147.483.647
    long tLong = LONG_MAX;    
    long long tLongLong = LONG_LONG_MAX; 
    
    float tFloat = 8.1;
    double tDouble = 9.1;
    long double tLongDouble= 10.1;
    
    bool tBool = false;
    
    // Atribuicoes:
	tChar = 'C';
    //tShort = 1000;   
    //tInt = 20000000; 
    //tLong = 3000000000; 
    //tLongLong = 4000000000; 
    tFloat = 9.2;
    tDouble = 10.2;
    tBool = true;

    cout << "Valores de cada variavel: \n";
    cout << "tChar: " << tChar << endl;
	cout << "tShort: "<< tShort << endl;
	cout << "tInt: " << tInt << endl;
    cout << "tLong: " << tLong << endl;
    cout << "tLongLong: " << tLongLong << endl;
	cout << "tFloat: " << tFloat << endl;
	cout << "tDouble: " << tDouble << endl;
	cout << "tLongDouble: " << tLongDouble << endl;
    cout << "tBool: " << tBool << endl;

    cout << endl << "Tamanho de cada variavel (em bytes): \n";
    cout << "tChar: " << sizeof(tChar) << endl;
	cout << "tShort: "<< sizeof(tShort) << endl;
	cout << "tInt: " << sizeof(tInt) << endl;
    cout << "tLong: " << sizeof(tLong) << endl;
    cout << "tLongLong: " << sizeof(tLongLong) << endl;
	cout << "tFloat: " << sizeof(tFloat) << endl;
	cout << "tDouble: " << sizeof(tDouble) << endl;
	cout << "tLongDouble: " << sizeof(tLongDouble) << endl;
    cout << "tBool: " << sizeof(tBool) << endl;

    system("pause");
    return 0;
}
