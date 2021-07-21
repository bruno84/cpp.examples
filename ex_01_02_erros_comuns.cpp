#include <iostream>
#include <cmath>        // Digitar errado nomes de bibliotecas, funções ou variáveis.

using namespace std;

// Objetivo: destacar os erros mais comuns

int main()	
{
	int n;
	float raiz;	        // TOP3! Esquecer de declarar variável ou errar seu tipo.
	
    cout << "Digite um numero: ";  
	cin >> n;	        // Esquecer o cin ou errar as setas

	raiz = sqrt( n );
	cout << "Raiz quadrada de " << n << " eh " << raiz << endl;

    system("pause");	// TOP1! Esquecer o ponto e virgula no final de cada instrução	
    return 0;	
	                    // TOP2! Não fechar ( ) ou { } ou ' ' ou " " 
}