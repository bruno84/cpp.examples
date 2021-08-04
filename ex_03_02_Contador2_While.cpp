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
 
 	cont = vi;
 
    while( cont <= vf ) {      
        cout << "cont: " << cont << endl;
        cont++; 
    } 
    
    system("pause");
    return 0;    
} 
