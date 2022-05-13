#include <cstdio>
#include <iostream>
#include <clocale>

using namespace std;

// Autor: prof. Bruno Monteiro
// Objetivos: ler arquivo TSV com: fscanf

int main() 
{
	setlocale(LC_ALL, "Portuguese");	// IMPORTANTE!!!
	
	FILE* pArquivo;		// Ponteiro do arquivo
	char produto[30];
	float valor;
	char n;
	
	int r;

	// Prepara arquivo
	pArquivo = fopen("arquivo2.tsv", "r");
	
	if(pArquivo == NULL) {
	    printf("ERRO: nao foi possivel abrir o arquivo \n");
		return 1;
    }

	// IMPORTANTE!!! Usar %[^\t] em vez de %s para ler varias palavras
    while( fscanf(pArquivo, "%[^\t]\t%f\n", &produto, &valor) != EOF ) 		
    {		
		printf("produto = %s valor = %f \n", produto, valor);
    }

	fclose(pArquivo); // Libera o arquivo
	
    system("pause");
	return 0;
}
