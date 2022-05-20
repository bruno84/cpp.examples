#include <iostream>
#include <stdexcept>

using namespace std;

// Prof: Bruno Monteiro
// Objetivos: exemplificar o tratamento de exceção.

int main() 
{ 	
	
	try {
   		int x = -10;
   		
		if (x < 0) { 
			throw x;
		}
		cout << "isso nao sera executado em caso de excecao \n"; 
	}
   	catch (int x) {
    	cout << "Exception int : " << x << endl;
	}
	catch (...) {
    	cout << "Exception generica \n";
	}

	
	cout << "FIM! \n";
	
	system("pause");
    return 0;      
} 


