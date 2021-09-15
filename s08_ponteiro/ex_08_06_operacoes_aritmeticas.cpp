#include <iostream>

using namespace std;

// Prof. Bruno Monteiro
// Objetivo: "caminhar" por posicoes de memoria utilizando operacoes aritmeticas sobre um ponteiro

void imprimeVetorNormal(int *v, int size)
{
	int* pTemp = NULL;

    cout << endl << "imprimeVetorNormal \n";

    for(int i=0; i<size; i++) 
	{
        // Incremento referencia do ponteiro
        pTemp = v+i;
        
        cout << " pTemp: " <<  pTemp << endl;
        cout << "*pTemp: " << *pTemp << endl; 	//	*(v+i)
    }
}


void imprimeVetorInvertido(int *v, int size)
{
	int* pTemp = NULL;
	
    cout << endl <<"imprimeVetorInvertido \n";

    v = v + (size-1); // pulo para a ultima posicao do vetor

	cout << " v (ultimo): " <<  v << endl;
    cout << "*v (ultimo): " << *v << endl;

    for(int i=0; i<size; i++) 
	{
        // Decremento referencia do ponteiro
        pTemp = v-i;
		        
        cout << " pTemp: " <<  pTemp << endl;
        cout << "*pTemp: " << *pTemp << endl; 	//	*(v-i)
    }
}


int main()
{
    int vetor[] = {1, 3, 5};

    imprimeVetorNormal(vetor, 3);
    imprimeVetorInvertido(vetor, 3);

    cout << "\n\n";
    system("pause");
    return 0;
}
