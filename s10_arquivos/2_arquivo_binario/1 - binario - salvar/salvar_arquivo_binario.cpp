#include <iostream>
#include <fstream>

using namespace std;

struct TipoBruno {
	int numero;
	char letra;
};

int main()
{
	// Objeto do arquivo
	ofstream fout;		
	
	// Associa objeto com o arquivo
	fout.open("arquivo_binario.bsm", ios_base::out | ios_base::binary); 
	
	TipoBruno bloco1[3];
	TipoBruno bloco2[3];
	
	bloco1[0].numero = 1;
	bloco1[0].letra = 'A';
	bloco1[1].numero = 2;
	bloco1[1].letra = 'B';
	bloco1[2].numero = 3;
	bloco1[2].letra = 'C';
	
	bloco2[0].numero = 11;
	bloco2[0].letra = 'X';
	bloco2[1].numero = 22;
	bloco2[1].letra = 'Y';
	bloco2[2].numero = 33;
	bloco2[2].letra = 'Z';
	
 	if(fout.is_open() == false) {
		cout << "ERRO: nao foi possivel abrir o arquivo \n";
 		return 1;
	}

 	fout.write((char*) &bloco1, sizeof(TipoBruno) * 3 );
	fout.write((char*) &bloco2, sizeof(TipoBruno) * 3 );

	fout.close();

	system("pause");
	return 0;
}
