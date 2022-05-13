#include <cstdio>
#include <iostream>

using namespace std;

// Autor: prof. Bruno Monteiro
// Objetivos: ler arquivo binario com: fread

struct TipoBruno {
	int numero;
	char letra;
};

int main()
{
	// Abre o arquivo para leitura em modo binário
	FILE* pArquivo = fopen("arquivo_binario.dat", "rb");
	int size = 3;
	TipoBruno bloco[size];
	int r = 0;

	if (pArquivo == NULL) {
		cout << "Erro ao preparar arquivo!!!" << endl;
 		return 1;
	}

	// Loop de leitura do arquivo. Retorna a quantidade de elementos lidos.
	while( fread(&bloco, sizeof(TipoBruno), size, pArquivo) != 0 )
	{
		for(int i=0; i<size; i++) {
			cout << bloco[i].numero << " " << bloco[i].letra << "\n";
		}

		printf("\n");
	}

	// Libera arquivo
	fclose(pArquivo);

	system("pause");
	return 0;
}
