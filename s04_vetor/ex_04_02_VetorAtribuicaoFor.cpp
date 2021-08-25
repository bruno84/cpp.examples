#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int main() 
{
	const int SIZE = 3;
	
	//int meuVetor[SIZE];      // Declaracao do vetor
	int meuVetor[] = {30, 40, 50};      // Inicializacao do vetor

	cout << "Imprimindo... \n";
	for(int i=0; i<SIZE; i++) {
		cout << meuVetor[i] << endl;
	}

	cout << endl << "Atribuicao direta... \n";
	for(int i=0; i<SIZE; i++) {
		meuVetor[i] = 10 + i*10 + meuVetor[i] * 7;    	// Atribuicao direta
	}

	cout << "Imprimindo... \n";
	for(int i=0; i<SIZE; i++) {
		cout << meuVetor[i] << endl;
	}

	cout << endl << "Atribuicao pelo teclado... \n";
	for(int i=0; i<SIZE; i++) {
		cout << "Elemento[" << i << "]: ";
		cin >> meuVetor[i];  			// Atribuicao por dispositivo de entrada
	}

	cout << endl << "Imprimindo novamente... \n";
	for(int i=0; i<SIZE; i++) {
		cout << meuVetor[i] << endl;
	}

	cout << "\n";
	
	system("pause");
	return 0;
}
