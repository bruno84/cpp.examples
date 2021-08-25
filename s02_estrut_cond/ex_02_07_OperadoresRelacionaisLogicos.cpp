#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar operadores relacionais e logicos

int main() 
{ 
	bool A = true;  // TRUE
    bool B = false; // FALSE

    if(A != B) { 
        cout << "Diferentes \n"; 
    } 

    if(A == B) { 
        cout << "Iguais \n"; 
    } 
        
    if( !(A == B)  ) { 
        cout << "O operador ! inverte o resultado da expressao \n"; 
    } 
    
    if(A == true && B == true) { 
        cout << "Com && (E) todos precisam ser TRUE para a expressao ser TRUE! \n"; 
    } 
    
    if(A == true || B == true) { 
        cout << "Com || (OU) somente um precisa ser TRUE para a expressao ser TRUE! \n"; 
    } 
    
    cout << "\n\n"; 
    system("pause");
    
    return 0;    
} 
