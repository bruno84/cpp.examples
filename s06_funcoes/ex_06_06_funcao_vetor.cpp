#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

void exibirVetor( int vet[], int size )
{
	cout << endl << "exibirVetor... \n"; 
	for(int i=0; i<size; i++) {
        cout << vet[i] << " ";
    }
}

int somarVetor( int vet[], int size ) 
{ 	
	cout << endl << "somarVetor..."; 
	
	int r = 0;
    
    for(int i=0; i<size; i++) {
        r = r + vet[i];
    }
    
    return r;
}

void inverterVetor( int vetor1[], int vetor2[], int size ) 
{ 	
	cout << endl << "inverterVetor... \n"; 
	
    for(int i=0, f=size-1 ;  i<size ;  i++, f--) {
        vetor2[i] = vetor1[f];
    }
}

int main()
{
	const int SIZE = 5;
	
    int vetor1[] = {10, 20, 30, 40, 50};	// original
    int vetor2[SIZE];						// invertido

	exibirVetor(vetor1, SIZE);

	inverterVetor(vetor1, vetor2, SIZE);

	exibirVetor(vetor2, SIZE);

	cout << endl << "somarVetor: " << somarVetor(vetor1, SIZE) << endl;

    printf("\n\n");
    
    system("pause");
    return 0;
}
