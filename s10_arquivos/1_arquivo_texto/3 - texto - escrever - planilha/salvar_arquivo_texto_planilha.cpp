#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main() 
{
	float valor = 10.50;
	
	ofstream fout;				// Objeto do arquivo
	fout.open("arquivo.tsv");   // Associa objeto com o arquivo
	
	if(fout.is_open() == false) {
	    printf("ERRO: nao foi possivel abrir o arquivo \n");
		return 1;
    }
 
	fout << "arroz"<<"\t"<<valor<<"\n";
	fout << "feijão"<<"\t"<<valor<<"\n";

    // Libera o arquivo
	fout.close();
	
    system("pause");
	return 0;
}
