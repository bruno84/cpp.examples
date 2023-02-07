#include <iostream>
#include <cstring>

using namespace std;

// Prof: Bruno Monteiro
// OBJETIVO: uma string pode ser "esticada"?

int main()
{
    // Na inicialização não preciso definir o tamanho da string
    char str1[] = "bola";	
    cout << "str1: " << str1 << endl<<endl;
    
    // Nao pode informar tamanho menor do que caracteres+1
    char str2[5] = "casa";		
	cout << "str2: " << str2 << endl<<endl;
    
	// O tamanho deve ser o mesmo, se nao, ha risco de crash.
    strcpy(str2, "mudeiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii"); 
	cout << "str2: " << str2 << endl<<endl;
    
    system("pause");
    return 0;
}
