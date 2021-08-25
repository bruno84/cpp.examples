#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

void somaSemRetorno(int n1, int n2) 
{ 
    int valor; 
 	
    valor = n1 + n2; 

    cout << "Resultado (em somaSemRetorno) = " << valor << endl; 
}

int somaComRetorno(int n1, int n2) 
{ 
    int valor; 
 	
    valor = n1 + n2; 

    return valor; 
}

int main() 
{ 
    int r; 
 
 	somaSemRetorno(3 , 5); 
 
    r = somaComRetorno(3 , 5); 
    cout << "Resultado (em main) = " << r << endl; 
 	
 	system("pause");
    return 0;    
} 


