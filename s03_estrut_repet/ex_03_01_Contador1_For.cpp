#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar a estrutura repeticao for.

int main()
{
    int vi, vf; 
 
    cout << "Qual o valor inicial: "; 
    cin >> vi; 
    cout << "Qual o valor final: "; 
    cin >> vf; 
        
    for(int cont = vi; cont <= vf; cont++) 
	{
        cout << "cont (durante): " << cont << endl;	
    }
 
    cout << "cont (final): " << cont << endl;	 

    system("pause");
    return 0;
}
