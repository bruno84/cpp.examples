#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar a estrutura repeticao for.

int main()
{
    int cont, vi, vf; 
 
    cout << "Qual o valor inicial: "; 
    cin >> vi; 
    cout << "Qual o valor final: "; 
    cin >> vf; 
    
    for(cont = vi; cont <= vf; cont++) {
        cout << "cont: " << cont << endl;
    }
        
    system("pause");
    return 0;
}
