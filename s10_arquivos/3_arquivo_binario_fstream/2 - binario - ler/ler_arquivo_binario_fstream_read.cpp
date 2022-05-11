#include <iostream>
#include <fstream>

using namespace std;

// Autor: Bruno Monteiro
// Objetivo: Leitura de arquivo binario usando: ifstream

struct TipoBruno {
	int numero;
	char letra;
};

int main()
{
	// Objeto do arquivo
	ifstream fin;		
	
	// Associa objeto com o arquivo
	fin.open("arquivo_binario.dat", ios_base::binary); 
	
	int size = 3;
	TipoBruno bloco[size];

 	if(fin.is_open() == false) {
		cout << "ERRO: nao foi possivel abrir o arquivo \n";
 		return 1;
	}

	// Loop de leitura do arquivo. Retorna a quantidade de elementos lidos.
	while ( fin.read( (char*) &bloco, sizeof(TipoBruno) * size) )
	{
		for(int i=0; i<size; i++) {
			cout << bloco[i].numero << " " << bloco[i].letra << "\n";
		}

		printf("\n");
	}

	// Libera arquivo
	fin.close();

	system("pause");
	return 0;
}
