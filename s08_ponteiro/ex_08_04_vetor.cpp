#include <iostream>

using namespace std;

// Prof. Bruno Monteiro

int main()
{
	const int SIZE = 3;
	int i;
	int  vetor1[] = {1, 3, 5};
	int* vetor2 = NULL; 
	
	cout << "endereco de vetor1: " << vetor1 << endl; // 0x6ffe00
	cout << "endereco de vetor1 indice0: " << &vetor1[0] << endl;  // 0x6ffe00                  
	cout << "endereco de vetor1 indice1: " << &vetor1[1] << endl;  // 0x6ffe04
	cout << "endereco de vetor1 indice2: " << &vetor1[2] << endl;  // 0x6ffe08
	
	vetor2 = vetor1;
	
	cout << "endereco de vetor2: " << vetor2 << endl;
	
	cout << "Exibindo Vetor1: \n";
    for(i=0; i <= SIZE-1; i++) {
        cout << vetor1[i] << " ";
    }

	cout << endl << "Exibindo Vetor2: \n";
    for(i=0; i <= SIZE-1; i++) {
        cout << vetor2[i] << " ";
    }
    
	cout << endl << "Modifico vetor1 usando o ponteiro vetor2 \n\n";
	for(i=0; i <= SIZE-1; i++) {
        vetor2[i] = vetor2[i] * 2;
    }
	
	cout << "Exibindo Vetor1: \n";
    for(i=0; i <= SIZE-1; i++) {
        cout << vetor1[i] << " ";
    }

	cout << endl << "Exibindo Vetor2: \n";
    for(i=0; i <= SIZE-1; i++) {
        cout << vetor2[i] << " ";
    }

	cout << "\n\n";
    system("pause");
	return 0;
}
