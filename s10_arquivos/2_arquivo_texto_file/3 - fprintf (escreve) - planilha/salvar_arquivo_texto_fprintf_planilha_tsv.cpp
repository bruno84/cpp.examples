#include <cstdio>
#include <iostream>
#include <clocale>

using namespace std;

// Autor: prof. Bruno Monteiro
// Objetivos: salvar arquivo TSV com: fprintf

int main() 
{
	setlocale(LC_ALL, "Portuguese");	// IMPORTANTE!!!
	
	FILE* pArquivo = fopen("arquivo2.tsv", "w");		
	
	if(pArquivo == NULL) {
	    printf("ERRO: nao foi possivel abrir o arquivo \n");
		return 1;
    }
 
  	// fprintf
	fprintf(pArquivo, "%s\t%f\n", "arroz branco", 7.5);
	fprintf(pArquivo, "%s\t%f\n", "feijão preto", 15.3);

    // Libera o arquivo
	fclose(pArquivo);
	
    system("pause");
	return 0;
}
