#include <cstdio>
#include <iostream>
#include <clocale>

using namespace std;

// Autor: prof. Bruno Monteiro
// Objetivos: salvar arquivo CSV com: fprintf

int main() 
{
	setlocale(LC_ALL, "Portuguese");	// IMPORTANTE!!!
	
	FILE* pArquivo = fopen("arquivo1.csv", "w");		
	
	if(pArquivo == NULL) {
	    printf("ERRO: nao foi possivel abrir o arquivo \n");
		return 1;
    }
 
  	// fprintf
	fprintf(pArquivo, "%s;%f\n", "arroz branco", 7.5);
	fprintf(pArquivo, "%s;%f\n", "feijão preto", 15.3);

    // Libera o arquivo
	fclose(pArquivo);
	
    system("pause");
	return 0;
}
