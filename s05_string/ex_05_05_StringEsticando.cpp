#include <iostream>
#include <cstring>

using namespace std;

// Prof: Bruno Monteiro
// OBJETIVO: uma string pode ser "esticada"?

int main()
{
    // Perceba que na inicializa��o n�o preciso definir o tamanho da string
    char str1[] = "bola";	
    cout << "str1: " << str1 << endl;
    
    char str2[5] = "bola";		// OBS: se vc colocar um valor menor que 5, compilador reclama!
    cout << "Endereco de str2: " << &str2 << endl;	
    cout << "Tamanho de str2: " << strlen(str2) << endl;	// 4
    
    strcpy(str2, "12345678901234567890"); 
    cout << "Endereco de str2: " << &str2 << endl;			// Endere�o pode continuar o mesmo
    cout << "Tamanho de str2: " << strlen(str2) << endl;	// 20
    
    // OBS: internamente, outro espa�o de mem�ria � alocado para a nova string.

    system("pause");
    return 0;
}
