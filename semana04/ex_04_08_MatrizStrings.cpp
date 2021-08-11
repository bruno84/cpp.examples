#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int main()
{
	const int SIZE = 3;
	
	char nomes[SIZE][30];

	for(int i=0; i<SIZE; i++) {
		cout << "Digite um nome: ";
		cin.getline( nomes[i], sizeof(nomes[i]) );
	}

	for(int i=0; i<SIZE; i++) {
		cout << "nome: " << nomes[i] << endl;
	}

	system("pause");
	return 0;
}
