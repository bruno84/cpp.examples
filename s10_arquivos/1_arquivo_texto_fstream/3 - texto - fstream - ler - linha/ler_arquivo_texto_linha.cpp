#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	ifstream fin;				// Objeto do arquivo
	fin.open("arquivo.txt");   // Associa objeto com o arquivo
		
	string linha;
	
	if(fin.is_open() == false) {
	    printf("ERRO: nao foi possivel abrir o arquivo \n");
		return 1;
    }

	// Loop de leitura do arquivo
	while( fin.eof() == false )
	{		
		fin >> getline(fin, linha); // OBS: '\n' eh o separador de linha padrao
				
		cout << "linha: " << linha << endl;
	}
    
    // Libera o arquivo
	fin.close();
	
    system("pause");
	return 0;
}
