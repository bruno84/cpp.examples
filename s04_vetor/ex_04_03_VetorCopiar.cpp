#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

void exibeVetor(int* pVet, int size) 	// OU: int pVet[] 
{  	
	// OBS: cuidado com as fronteiras:
    for(int i=0; i < size; i++) {
        cout << "Elemento " << i << " : " << pVet[i] << endl;
    }  
    
    cout << "\n";
}

int main()
{
	const int SIZE = 5;

	// DECLARAÇÃO DE VETOR
    int vetor1[SIZE] = {0, 10, 20, 30, 40};
	int vetor2[SIZE];

	// CUIDADO! A instrucao abaixo nao eh permitida. 
	// OBS: E mesmo quando puder, usando ponteiro, nao eh uma copia!
	// vetor2 = vetor1;

	// COPIANDO VETOR
	cout << endl << "Copiando conteudos do vetor... \n";
	for(int i=0; i<SIZE; i++) {
        vetor2[i] = vetor1[i];
    }

	cout << endl << "Exibindo vetor1: \n";
	exibeVetor(vetor1, SIZE);

	cout << endl << "Exibindo vetor2: \n";
	exibeVetor(vetor2, SIZE);

    cout << "\n\n";
    
    system("pause");

    return 0;
}
