#include <iostream>
#include <fstream>

using namespace std;


int main() 
{
	ofstream fout;				// Objeto do arquivo
	fout.open("arquivo.txt");   // Associa objeto com o arquivo
		
	if(fout.is_open() == false) {
	    cout << "ERRO: nao foi possivel abrir o arquivo \n";
		return 1;
    }
 
  	// fout
  	fout << "Meu texto inicial! Pode ter acentos, não é? SIM! =) \n";
	int num = 1234;
	fout << "Meu numero = " << num;
	fout << "\n";
	
	fout << 7.5;   		// 7.5
	fout << "\n";
	
	fout.setf(ios_base::fixed, ios_base::floatfield);
	fout.precision(2);
	fout << 7.5; 		// 7.50
	fout << "\n";
	
	fout << "Falow!";

    // Libera o arquivo
	fout.close();
	
    system("pause");
	return 0;
}
