#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

/*
OBS: enum (enumeracao) eh usada quando conhecemos o 
conjunto de valores que uma variavel pode assumir 
*/

// DECLARACAO

enum Cores {VERMELHO, AMARELO, VERDE, AZUL, PRETO};
// 				0, 		 1, 	 2, 	3, 	  4

enum Bits {UM=1, DOIS=2, QUATRO=4, OITO=8};

enum Meses {JAN=1, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ};
//			  1		2	 3	  4	   5	6	 7	  8	   9   10	11	 12

// OBS: esta notacao permite introduzir escopo ao enum, tratando-os como classes:
enum class TamPacote { PEQUENO, GRANDE, LARGO, JUMBO};
//					  	0		   1	  2	     3

enum class TamCamisa { PEQUENO, MEDIO, GRANDE, EXTRAGRANDE };
//					  	0		  1	      2	        3

int main()
{	
    // ACESSANDO
    cout << "enum cores, ex: " << VERMELHO << endl;		// 0
    cout << "enum bits, ex: " << OITO << endl;			// 8
	cout << "enum meses, ex: " << FEV << endl;			// 2
	
	int cor1 = AMARELO;
	Cores cor2 = VERDE; // So pode receber elemento do enum "cores"
		
	cout << "cor1: " << cor1 << endl;	// 1
	cout << "cor2: " << cor2 << endl;	// 2
	
	// Acessando um enum como objeto:
	// OBS: as linhas abaixo so funcionam com compilador da versao C++11
	int leite  = (int) TamPacote::GRANDE; 	// fiz cast explicito
  	int social = (int) TamCamisa::GRANDE; 	// fiz cast explicito

	cout << "leite: "  << leite << endl;	// 1
	cout << "social: " << social << endl;	// 2

    printf("\n\n");
    system("pause");
    return 0;
}

