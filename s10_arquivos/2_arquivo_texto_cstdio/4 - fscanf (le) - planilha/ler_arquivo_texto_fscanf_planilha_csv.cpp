#include <cstdio>
#include <iostream>
#include <clocale>

using namespace std;

// Autor: prof. Bruno Monteiro
// Objetivos: ler arquivo CSV com: fscanf

int main() 
{
	setlocale(LC_ALL, "Portuguese");	// IMPORTANTE!!!
	
	FILE* pArquivo;		// Ponteiro do arquivo
	char produto[30];
	float valor;
	char n;
	
	int r;

	// Prepara arquivo
	pArquivo = fopen("arquivo1.csv", "r");
	
	if(pArquivo == NULL) {
	    printf("ERRO: nao foi possivel abrir o arquivo \n");
		return 1;
    }

	// IMPORTANTE!!! Usar %[^;] em vez de %s para ler varias palavras
    while( fscanf(pArquivo, "%[^;];%f\n", &produto, &valor) != EOF ) 	
    {		
		printf("produto = %s  valor = %f \n", produto, valor);
    }

	fclose(pArquivo); // Libera o arquivo
	
    system("pause");
	return 0;
}
