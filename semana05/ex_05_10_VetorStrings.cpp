#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int main()
{
	const int SIZE = 3;
	
	string nomes[SIZE];
	
	for(int i=0; i<SIZE; i++) {
		cout << "Digite um nome: ";
		//cin >> nomes[i];		// Nao eh adequado para strings que contenham espaco.
		getline( cin, nomes[i] );
		
	}

	for(int i=0; i<SIZE; i++) {
		cout << "nome: " << nomes[i] << endl;
	}

	system("pause");
	return 0;
}
