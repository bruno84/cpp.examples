#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int varGlobal = 5;

void minhaFuncao(int varArgum) 
{ 
	cout << "2. iniciando minhaFuncao \n\n"; 
	
    int varLocal = 20; 
    
    cout << "varGlobal = " << varGlobal << endl; 
    cout << "varLocal  = " << varLocal << endl; 
    cout << "varArgum  = " << varArgum << endl<<endl;
	
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
