#include <cstdio>
#include <iostream>

using namespace std;

// Autor: prof. Bruno Monteiro
// Objetivos: salvar arquivo binario com: fputc

int main()
{
	FILE* pArquivo = fopen("arquivo_binario.dat" , "wb");
	
	if (pArquivo == NULL) {
  		cout << "Erro na abertura do arquivo \n\n";
		return 1;
	}
   
   	// Escreve cada byte 
	fputc('X', pArquivo);
	fputc('Y', pArquivo);
	fputc('Z', pArquivo);

	// Libera arquivo
   	fclose(pArquivo);

	system("pause");
   	return 0;
}

