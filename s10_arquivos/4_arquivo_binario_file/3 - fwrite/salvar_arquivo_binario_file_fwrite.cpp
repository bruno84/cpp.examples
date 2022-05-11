#include <cstdio>
#include <iostream>

using namespace std;

// Autor: prof. Bruno Monteiro
// Objetivos: salvar arquivo binario com: fwrite

struct TipoBruno {
	int numero;
	char letra;
};

int main()
{
	FILE* pArquivo = fopen("arquivo_binario.dat","wb");
	
	int size = 3;
	
	TipoBruno bloco1[size];
	TipoBruno bloco2[size];
	
	bloco1[0].numero = 1;
	bloco1[0].letra = 'A';
	bloco1[1].numero = 2;
	bloco1[1].letra = 'B';
	bloco1[2].numero = 3;
	bloco1[2].letra = 'C';
	
	bloco2[0].numero = 11;
	bloco2[0].letra = 'X';
	bloco2[1].numero = 22;
	bloco2[1].letra = 'Y';
	bloco2[2].numero = 33;
	bloco2[2].letra = 'Z';

 	if (pArquivo == NULL) {
		cout << "Erro ao preparar o arquivo!!! \n\n";
 		return 1;
	}

	// Escreve o bloco no arquivo
 	fwrite(&bloco1, sizeof(TipoBruno), size, pArquivo);
	fwrite(&bloco2, sizeof(TipoBruno), size, pArquivo);

	fclose(pArquivo);

	system("pause");
	return 0;
}
