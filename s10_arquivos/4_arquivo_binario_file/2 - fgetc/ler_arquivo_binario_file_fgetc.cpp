#include <cstdio>
#include <iostream>

using namespace std;

// Autor: prof. Bruno Monteiro
// Objetivos: ler arquivo binario com: fgetc

void printByte(char entrada)
{
	int i;
	unsigned char bit;
	unsigned char mascara;

	mascara = 0x1 << 7;

	for (i=1; i <= 8; i++)
	{
		bit = (entrada & mascara) ? 1 : 0;
   		cout << (int)bit << " ";
   			
   		mascara = mascara >> 1;
	}
}


int main()
{
	FILE* pArquivo = fopen("arquivo_binario.dat" , "rb");
	char byte;
	
	if (pArquivo == NULL) {
  		cout << "ERRO: problema na abertura do arquivo \n\n";
		return 1;
	}
   	
   	// Leitura de cada byte
	while( (byte = fgetc(pArquivo) ) != EOF ) 
	{
		cout << "byte = " << byte << endl;
		printByte(byte);
		
		cout << "\n\n";
	}	

   	fclose(pArquivo); 	// Libera arquivo

    system("pause");
   	return 0;
}

