#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const int TAM_MAX = 10; 
	int tam;
    char nome[TAM_MAX];

    nome[0] = 'B';
    nome[1] = 'r';
    nome[2] = 'u';
    nome[3] = 'n';
    nome[4] = 'o';
	nome[5] = '\0';

    cout << "nome: " << nome << "\n\n";

	tam = strlen(nome);				// Obtém a quantidade de caracteres úteis (até o \0 que delimita o fim da string)
	cout << "tam: " << tam << "\n\n";

    for(int i=0; i<=TAM_MAX; i++) {
    	cout << "[" << i << "]: " << nome[i] << endl;	// Você vai perceber que vão ser exibidos alguns caracteres "lixo"
    }

	cout << "\n\n";

    system("pause");
    return 0;
}
