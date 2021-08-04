#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar aplicacao da estrutura repeticao for.

int main()
{
    int vi, vf, somatorio; 
 
    cout << "Qual o valor inicial: "; 
    cin >> vi; 
    cout << "Qual o valor final: "; 
    cin >> vf; 
    
    somatorio = 0;
    
    for(int cont = vi; cont <= vf; cont++) {
        somatorio = somatorio + cont;
    }
    
    cout << "somatorio: " << somatorio << endl;
	  
    system("pause");
    return 0;
}
