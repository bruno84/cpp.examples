#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Prof. Bruno Monteiro


void exibeVetor(int* pVet, int size) 
{
    for(int i=0; i < size; i++) {
        cout << "Elemento " << i << " : " << pVet[i] << endl;
    }  
    
    cout << "\n";
}


int* criarVetorAleatorio(int valorInicial, int tam)
{
	int r, temp = 0;
	int* pVetor = new int[tam];
		
	// Seed da rand(), 
	// que garante numeros realmente aleat�rios em cada execu��o
	srand( time(NULL) );
 	
 	for(int i=0; i<tam; i++) {
 		pVetor[i] = valorInicial + i; // 100..109
	}
 	
	for(int i=0; i<tam; i++) {
 		r = rand() % (tam - 1);	// indice aleatorio, dentro da fronteira possivel
 		temp = pVetor[i];
 		pVetor[i] = pVetor[r];
 		pVetor[r] = temp;
	}

    return pVetor;
}

int main()
{
    int* vetor = NULL;
	int tamanho;
	
	cout << "Digite a quantidade de elementos: ";
	cin >> tamanho;
	
	vetor = criarVetorAleatorio(100, tamanho);
	
    cout << "Exibindo o vetor: \n";
	exibeVetor(vetor, tamanho);

	// Desaloco meu bloco:
	delete[] vetor;

    cout << "\n\n";
	system("pause");

	return 0;
}
