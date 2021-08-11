#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int main()
{
	const int SIZE = 5;

	// DECLARAÇÃO DE VETOR
    int vetor1[SIZE] = {0, 10, 20, 30, 40};
	int vetor2[SIZE];

	// COPIANDO VETOR
	cout << endl << "Copiando conteudos do vetor... \n";
	for(int i=0; i < SIZE; i++) {
        vetor2[i] = vetor1[i];
    }

	// EXIBIR VETOR (cuidado com as fronteiras):
	cout << endl << "Exibindo vetor1: \n";
	for(int i=0; i < SIZE; i++) {
        cout << vetor1[i] << endl;
    }

	cout << endl << "Exibindo vetor2: \n";
    for(int i=0; i < SIZE; i++) {
        cout << vetor2[i] << endl;
    }

    cout << "\n\n";
    
    system("pause");

    return 0;
}
