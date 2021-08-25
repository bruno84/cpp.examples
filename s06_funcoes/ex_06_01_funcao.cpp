#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

void somaSemRetorno(float n1, float n2) 
{ 
    int valor; 
 	
    valor = n1 + n2; 

    cout << "Resultado (em somaSemRetorno) = " << valor << endl; 
}

int somaComRetorno(float n1, float n2) 
{ 
    int valor; 
 	
    valor = n1 + n2; 

    return valor; 
}

int main() 
{ 
    int r; 
 
 	somaSemRetorno(3 , 5); 
 
    r = somaComRetorno(3.4 , 5.7);
    cout << "Resultado (em main) = " << r << endl;
 	
 	system("pause");
    return 0;    
} 


