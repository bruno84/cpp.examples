#include <iostream>
#include <fstream>

using namespace std;

struct TipoBruno {
	int numero;
	char letra;
};

int main()
{
	// Objeto do arquivo
	ifstream fin;		
	
	// Associa objeto com o arquivo
	fin.open("arquivo_binario.bsm", ios_base::in | ios_base::binary); 
		
	TipoBruno bloco[3];
	int i;

 	if(fin.is_open() == false) {
		cout << "ERRO: nao foi possivel abrir o arquivo \n";
 		return 1;
	}

	// Loop de leitura do arquivo. Retorna a quantidade de elementos lidos.
	while ( fin.read( (char *) &bloco, sizeof(TipoBruno) * 3) )
	{
		for(int i=0; i<3; i++) {
			cout << bloco[i].numero << " " << bloco[i].letra << "\n";
		}

		printf("\n");
	}

	// Libera arquivo
	fin.close();

	system("pause");
	return 0;
}
