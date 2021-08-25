#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar a estrutura repeticao do-while.

int main() 
{ 
    int cont, vi, vf; 
 
    cout << "Qual o valor inicial: "; 
    cin >> vi; 
    cout << "Qual o valor final: "; 
    cin >> vf; 
 
 	cont = vi;  // inicializacao
 
    do {
        cout << "cont: " << cont << endl;   // corpo

        cont++; // atualizacao
    } 
    while( cont <= vf ); //verificacao
    
    system("pause");
    return 0;    
} 
