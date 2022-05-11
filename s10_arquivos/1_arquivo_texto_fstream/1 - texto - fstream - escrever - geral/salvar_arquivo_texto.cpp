#include <iostream>
#include <fstream>

using namespace std;

// Autor: Bruno Monteiro
// Objetivo: Escrever um arquivo usando: ofstream

int main() 
{
	ofstream fout;				// Objeto do arquivo
	fout.open("arquivo.txt");   // Associa objeto com o arquivo
			
	// ATENCAO: retorna false quando: nao ha espaco em disco ou ha protecao read-only.
	if(fout.is_open() == false) {
	    cout << "ERRO: nao foi possivel acessar o arquivo \n";
		return 1;
    }
 
  	// fout
  	fout << "Meu texto inicial! Pode ter acentos, não é? SIM! =) \n";
	int num = 1234;
	fout << "Meu numero = " << num;
	fout << "\n";
	
	fout << 7.5;   		// 7.5
	fout << "\n";
	
	fout << fixed; // scientific ou fixed
	fout.precision(2);
	fout << 7.5; 		// 7.50
	fout << "\n";
	   
    cout << "Sucesso! \n\n";
    
    // Libera o arquivo
	fout.close();
    
    system("pause");
	return 0;
}
