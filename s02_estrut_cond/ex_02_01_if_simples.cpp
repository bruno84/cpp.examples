#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar estrutura condicional if 
// Observacao: percebam que o bloco else eh opcional

int main() 
{ 
	float media; 
	
	cout << "Qual a media? "; 
	cin >> media; 
	
	if(media >= 7) {
		cout << "Aprovado  \n";
	}
	else {
		cout << "Recuperacao ou Reprovado  \n";  	
	}

	system("pause");
	return 0;    
} 
