#include <iostream>
#include <cstring>

using namespace std;

// Prof: Bruno Monteiro
// OBJETIVO: diferentes formas de preencher uma string

int main()
{
	int x;
	// Inicialização "trabalhosa". 
	char vetorChar1[40] = {'B', 'R', 'U', 'N', 'O', '\0'}; 
	cout << "Bytes: sizeof(vetorChar1): " << sizeof(vetorChar1) << endl;
	
	
	// Inicialização "mais fácil"	
	// ATENÇÃO!!! Isso só pode ser feito na inicialização da string! Nunca para uma atribuição. 	
    char vetorChar2[] = "Bruno";  
    cout << "Bytes: sizeof(vetorChar2): " << sizeof(vetorChar2) << endl;
	
    
	cout << "caracteres em: vetorChar1: " << strlen(vetorChar1) << endl;
	cout << "caracteres em: vetorChar2: " << strlen(vetorChar2) << endl;
	cout << "vetorChar1: " << vetorChar1 << endl;
	cout << "vetorChar2: " << vetorChar2 << endl;
	
	//vetorChar2 = "Bruno Monteiro";		// nao pode!
	
    strcpy(vetorChar2, "Bruno Monteiro"); 		// Atribuição
	cout << "vetorChar2: " << vetorChar2 << endl;
	
	
	
	
	
	
	
	
	char vetorChar3[40];
	cout << "Bytes em sizeof(vetorChar3): " << sizeof(vetorChar3) << endl;
	
	cout << "Digite um numero: ";
	cin >> x;
	
    cout << "Digite vetorChar3 (nome completo): ";
    
    // Cuidado: cin simples não deve ser usado para ler strings com espaço.
	
	//cin >> vetorChar3; 
	
	// Formas de limpar o ENTER no buffer de entrada:
	//getchar(); 		// metodo1 (C e C++)
	//fflush(stdin); 	// metodo2 (C e C++)
	cin.ignore(); 		// metodo3 (C++)
	
	cin.getline( vetorChar3, sizeof(vetorChar3) );
    
	cout << "vetorChar3: " << vetorChar3 << endl;
    
   
    // OBS: repeti aqui apenas para ilustrar que o ENTER no buffer só influencia strings.
    cout << "Digite um numero: ";
    cin >> x;
    
    cout << "Digite um numero: ";	
    cin >> x;

	cout << endl;
    system("pause");
    return 0;
}
