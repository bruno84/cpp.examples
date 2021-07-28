#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar operador condicional ternario
// Observacao: compare este exemplo com o exemplo de if

int main() 
{ 
    float media; 
    
    cout << "Qual a media? "; 
    cin >> media; 
 
 	// Condicao ? InstrucaoVerdadeira : InstrucaoFalsa
 
 	(media >= 7) ? cout << "Aprovado \n" : cout << "Recuperacao ou Reprovado \n"; 
    
    system("pause");
    return 0;    
} 
