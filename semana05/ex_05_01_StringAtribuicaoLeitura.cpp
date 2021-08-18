#include <iostream>
#include <cstring>

using namespace std;

// Prof: Bruno Monteiro
// OBJETIVO: diferentes formas de preencher uma string

int main()
{
	int x;
	char str1[40] = {'A', 'D', 'R', 'I', 'A', 'N', 'A'};  	// Inicialização "trabalhosa". 
    char str2[40] = "Bruno"; 								// Inicialização "mais fácil"	ATENÇÃO!!! Isso só pode ser feito na inicialização da string! Nunca para uma atribuição.
    char str3[40];
    char str4[40];
	
	cout << "str1 = " << strlen(str1) << endl;
	cout << "str2 = " << strlen(str2) << endl;
	
    strcpy(str3, "Maria eh str3"); 		// Atribuição

	cout << "Digite um numero: ";
	cin >> x;
	fflush(stdin);
	
    cout << "Digite str4 (nome completo): ";
    //cin >> str4; 							// Atribuição por teclado. OBS: cin simples não deve ser usado para ler strings com espaço.
	cin.getline( str4, sizeof(str4) );
    
    cout << "Digite um numero: ";
    cin >> x;
    
    cout << "Digite um numero: ";	// OBS: apenas para ilustrar que o ENTER no buffer só influencia strings.
    cin >> x;
    
	cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;
    cout << "str4: " << str4 << endl;

    system("pause");
    return 0;
}
