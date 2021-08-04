#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar a estrutura repeticao while.

int main() 
{ 
    int cont, vi, vf; 
 
    cout << "Qual o valor inicial: "; 
    cin >> vi; 
    cout << "Qual o valor final: "; 
    cin >> vf; 
 
 	cont = vi; // inicializacao
 
    while( cont <= vf )     // verificacao
    {      
        cout << "cont: " << cont << endl;   // bloco
        cont++;     // atualizacao (incremento/decremento)
    } 
    
    system("pause");
    return 0;    
} 
