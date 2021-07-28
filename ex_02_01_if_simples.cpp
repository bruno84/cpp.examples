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
		// O primeiro bloco eh executado quando a condicao (media >= 7) for verdade
    	cout << "Aprovado  \n";
	}
    else {
		// O segundo bloco eh executado quando a condicao (media >= 7) for falsa
        cout << "Recuperacao ou Reprovado  \n";  
	}
	
    system("pause");
    return 0;    
} 
