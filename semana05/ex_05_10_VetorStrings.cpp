#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int main()
{
	const int SIZE = 3;
	
	string nomes[SIZE];
	
	for(int i=0; i<SIZE; i++) {
		cout << "Digite um nome: ";
		getline( cin, nomes[i] );
	}

	for(int i=0; i<SIZE; i++) {
		cout << "nome: " << nomes[i] << endl;
	}

	system("pause");
	return 0;
}
