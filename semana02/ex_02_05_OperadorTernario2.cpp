#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar operador condicional ternario

int main() 
{ 
    int idade; 
    int mesada;
    const int MAIORIDADE = 18;
    
    cout << "Qual sua idade? "; 
    cin >> idade; 
 
 	// Condicao ? BlocoVerdadeiro : BlocoFalso
 
 	mesada = (idade >= MAIORIDADE) ? 0 : 20;
    
    cout << "Com " << idade << " anos, sua mesada eh: " << mesada << endl;
    
    system("pause");
    return 0;    
} 
