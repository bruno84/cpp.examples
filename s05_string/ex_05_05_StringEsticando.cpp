#include <iostream>
#include <cstring>

using namespace std;

// Prof: Bruno Monteiro
// OBJETIVO: uma string pode ser "esticada"?

int main()
{
    // Perceba que na inicialização não preciso definir o tamanho da string
    char str1[] = "bola";	
    cout << "str1: " << str1 << endl;
    
    char str2[5] = "bola";		// OBS: se vc colocar um valor menor que 5, compilador reclama!
    cout << "Endereco de str2: " << &str2 << endl;	
    cout << "Tamanho de str2: " << strlen(str2) << endl;	// 4
    
    strcpy(str2, "abcdefghijqlmnopqrst"); 
    cout << "Endereco de str2: " << &str2 << endl;			// Endereço continua o mesmo
    cout << "Tamanho de str2: " << strlen(str2) << endl;	// 20
    
    // OBS: internamente, outro espaço de memória é alocado para a nova string.

    system("pause");
    return 0;
}
