#include <iostream>

using namespace std;

int main() 
{ 
    int numero; 
	int resto;    

    cout << "Digite um numero: "; 
    cin >> numero; 

	resto = numero % 2;
 
    if(resto == 0) {            // ATENCAO!!!
    	cout << "Par \n";
	}
    else {
        cout << "Impar \n";  
	}
	
    system("pause");
    return 0;    
} 
