#include <iostream>
#include <cstring>

using namespace std;

// Prof: Bruno Monteiro
// OBJETIVO: diferentes formas de preencher uma string

int main()
{
	int x;
	char vetorChar1[40] = {'A', 'D', 'R', 'I', 'A', 'N', 'A', '\0'};  	// Inicialização "trabalhosa". 
    char vetorChar2[40] = "Bruno";  // Inicialização "mais fácil"	ATENÇÃO!!! Isso só pode ser feito na inicialização da string! Nunca para uma atribuição.
    char vetorChar3[40];
    char vetorChar4[40];
	
	cout << "caracteres em: vetorChar1: " << strlen(vetorChar1) << endl;
	cout << "caracteres em: vetorChar2: " << strlen(vetorChar2) << endl;
	
	// vetorChar3 = "Maria eh vetorChar3";		// nao pode!
	
    strcpy(vetorChar3, "Maria eh vetorChar3"); 		// Atribuição

	cout << "Digite um numero: ";
	cin >> x;
	fflush(stdin);	// Opcao1: limpa o buffer
	//cin.get();   	// Opcao2: le o caracter que estiver no buffer
	
	cout << "Bytes retornados em sizeof(vetorChar4): " << sizeof(vetorChar4) << endl;
    cout << "Digite vetorChar4 (nome completo): ";
    //cin >> vetorChar4; 							// Cuidado: cin simples não deve ser usado para ler strings com espaço.
	cin.getline( vetorChar4, sizeof(vetorChar4) );
    
    cout << "Digite um numero: ";
    cin >> x;
    
    cout << "Digite um numero: ";	// OBS: repeti apenas para ilustrar que o ENTER no buffer só influencia strings.
    cin >> x;

	cout << "vetorChar1: " << vetorChar1 << endl;
    cout << "vetorChar2: " << vetorChar2 << endl;
    cout << "vetorChar3: " << vetorChar3 << endl;
    cout << "vetorChar4: " << vetorChar4 << endl;

	cout << endl;
    system("pause");
    return 0;
}
