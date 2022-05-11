#include <iostream>
#include <fstream>

using namespace std;

// Autor: Bruno Monteiro
// Objetivo: Leitura de arquivo usando: ifstream

int main() 
{
	ifstream fin;				// Objeto do arquivo
	fin.open("arquivo.txt");    // Associa objeto com o arquivo
		
	string produto;
	float valor;
	
	if(fin.is_open() == false) {
	    printf("ERRO: nao foi possivel abrir o arquivo \n");
		return 1;
    }

	// Loop de leitura do arquivo
	// OBS: melhor good() do que eof(), pois verifica todos os estados de erro: eofbit, failbit and badbit
	while( fin.good() == true )
	{		
		fin >> produto >> valor;
				
		cout << "produto: " << produto << " valor: " << valor << "\n";
	}
        	
    // Libera o arquivo
	fin.close();
	
    system("pause");
	return 0;
}
