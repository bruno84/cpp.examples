#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int varGlobal = 5;
int x = 10;

void minhaFuncao(int varParam) 
{ 
	cout << "2. iniciando minhaFuncao \n\n"; 
	
    int varLocal = 20; 
    int x = 1000;
    
    cout << "varGlobal = " << varGlobal << endl; 	//  5
    cout << "varLocal  = " << varLocal << endl; 	// 20
    cout << "varParam  = " << varParam << endl;		// 40
	
	cout << "x = " << x << endl<<endl; 		// 1000
	
	cout << "3. encerrando minhaFuncao \n\n";  
} 

// Função principal chamada quando o programa é executado
int main()	
{
    cout << "1. iniciando main \n\n"; 
	
	minhaFuncao(40); // chama a função "minhaFuncao"
    
    cout << "4. encerrando main \n\n"; 
    
	system("pause");
    return 0;
}
