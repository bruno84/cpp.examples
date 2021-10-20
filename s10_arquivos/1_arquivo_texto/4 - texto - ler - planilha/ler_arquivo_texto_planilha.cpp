#include <iostream>
#include <fstream>
#include <locale.h>

using namespace std;

int main() 
{
	//setlocale(LC_ALL, "Portuguese");	// IMPORTANTE!!!
	
	ifstream fin;				// Objeto do arquivo
	fin.open("arquivo.tsv");   	// Associa objeto com o arquivo
	
	string produto;
	char tab;
	float valor;
	char n;	
	
	if(fin.is_open() == false) {
	    printf("ERRO: nao foi possivel abrir o arquivo \n");
		return 1;
    }

	// Loop de leitura do arquivo
	do {
		fin >> produto >> valor;
		cout << "produto: " << produto << " valor: " << valor << "\n";
	}
    while( fin.good() );	// enquanto a entrada for boa e não EOF (end of file)

	fin.close(); // Libera o arquivo
	
    system("pause");
	return 0;
}
