#include <iostream>
#include <climits>      /* lib que contem macros com os limites 
                           dos myVars de variáveis */

using namespace std;

// Objetivo: variaveis, inicializacao, declaracao e tamanho de variaveis

int main()
{
    // Inicializações:
	char tChar = 'B';
    short tShort = SHRT_MAX;    // 32.767
    int tInt = INT_MAX;         // 2.147.483.647
    long tLong = 3567888888;    // cuidado!
    long long tLongLong = 3567899999; 
    float tFloat = 8.1;
    double tDouble = 9.1;
    bool tBool = false;
    
    // Atribuições:
	tChar = 'C';
    tShort = 1000;   
    tInt = 20000000;  
    tLong = 3000000000; 
    tLongLong = LONG_LONG_MAX; 
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
    cout << "tBool: " << tBool << endl;

    cout << endl << "Tamanho de cada variavel (em bytes): \n";
    cout << "tChar: " << sizeof(tChar) << endl;
	cout << "tShort: "<< sizeof(tShort) << endl;
	cout << "tInt: " << sizeof(tInt) << endl;
    cout << "tLong: " << sizeof(tLong) << endl;
    cout << "tLongLong: " << sizeof(tLongLong) << endl;
	cout << "tFloat: " << sizeof(tFloat) << endl;
	cout << "tDouble: " << sizeof(tDouble) << endl;
    cout << "tBool: " << sizeof(tBool) << endl;

    system("pause");
    return 0;
}
