#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	ifstream fin;				// Objeto do arquivo
	fin.open("arquivo.txt");   // Associa objeto com o arquivo
	
	string produto;
	float valor;
	
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

	// Outras verificacoes
	if ( fin.eof() ) {
		cout << "Fim de arquivo alcancado.\n";
	} 
	else if (fin.fail()) {
		cout << "Tipo incorreto de dado na entrada.\n";
	} 
	else {
		cout << "Entrada encerrada por razao desconhecida.\n";
	}
    	
    // Libera o arquivo
	fin.close();
	
    system("pause");
	return 0;
}
