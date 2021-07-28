#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar operador condicional if dentro de outro if
// Observacao: compare este exemplo com o exemplo anterior

int main() 
{ 
    float media; 
    
    cout << "Qual a media? "; 
    cin >> media; 
 
    if(media >= 7) 
    { 
        cout << "Aprovado  \n"; 
    } 
    else 
    {
        // Recuperacao ou Reprovado
        if(media >= 3.5) {
            cout << "Recuperacao  \n"; 
        } 
        else {
            cout << "Reprovado  \n";  
        }
    }
    
    system("pause");
    return 0;    
} 
