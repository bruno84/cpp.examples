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
	while( fin.eof() == false )
	{		
		fin >> produto >> valor;
		
		if( fin.eof() ) { break; }
		
		cout << "produto: " << produto << " valor: " << valor << "\n";
	}
    

	// Outras verificacoes
	if ( fin.eof() ) {
		cout << "Fim de arquivo alcancado.\n";
	} 
	else if ( fin.fail() ) {
		cout << "Tipo incorreto de dado na entrada.\n";
	}
    	
    // Libera o arquivo
	fin.close();
	
    system("pause");
	return 0;
}
