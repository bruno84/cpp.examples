#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

/*
OBS: enum (enumeracao) eh usada quando conhecemos o 
conjunto de valores que uma variavel pode assumir 
*/

// DECLARACAO PADRAO

// Declaração: default: os valores começam em 0 ate n-1
enum Cores {VERMELHO, AMARELO, VERDE, AZUL, PRETO};
// 				0, 		 1, 	 2, 	3, 	  4

// Declaração: atribuir todos: cada valor eh informado explicitamente
enum Bits {UM=1, DOIS=2, QUATRO=4, OITO=8};

// Declaração: atribuir inicio: eh informado apenas o valor inicial
enum Meses {JAN=1, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ};
//			  1		2	 3	  4	   5	6	 7	  8	   9   10	11	 12

// CUIDADO! podem haver constantes com o mesmo valor!

// DECLARACAO COMO CLASSE
// Esta notacao permite introduzir escopo ao enum, tratando-os como classes.
// Isto eh util quando ha elementos repetidos entre diferentes enums.
enum class TamPacote { PEQUENO, GRANDE, LARGO, JUMBO};
//					  	0		   1	  2	     3

enum class TamCamisa { PEQUENO, MEDIO, GRANDE, EXTRAGRANDE };
//					  	0		  1	      2	        3

int main()
{	
    // ACESSANDO    
    cout << "enum Cores: \t AZUL: \t"  << AZUL << endl;		// 3
    cout << "enum Bits:  \t OITO: \t"  << OITO << endl;		// 8
	cout << "enum Meses: \t FEV: \t"   << FEV << endl;		// 2
	
	int   cor1 = VERDE;
	Cores cor2 = PRETO; 	// So pode receber elemento do enum "cores"
		
	cout << "cor1: " << cor1 << endl;	// 2
	cout << "cor2: " << cor2 << endl;	// 4
	
	// Acessando um enum como objeto:
	// OBS: as linhas abaixo so funcionam com compilador da versao C++11
	int tamPacoteGrande = (int) TamPacote::GRANDE; 	// fiz cast explicito
  	int tamCamisaGrande = (int) TamCamisa::GRANDE; 	// fiz cast explicito

	cout << "tamPacoteGrande: " << tamPacoteGrande << endl;	// 1
	cout << "tamCamisaGrande: " << tamCamisaGrande << endl;	// 2

    printf("\n\n");
    system("pause");
    return 0;
}

