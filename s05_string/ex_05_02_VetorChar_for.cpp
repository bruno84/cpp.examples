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

	// Obt�m a quantidade de caracteres �teis (at� o \0 que delimita o fim da string)
	tam = strlen(nome);				
	cout << "tam: " << tam << "\n\n";

    for(int i=0; i<tam; i++) {
    	cout << "[" << i << "]: " << nome[i] << endl;
    }

	cout << "\n\n";

	// Voc� vai perceber que v�o ser exibidos alguns caracteres "lixo"
    for(int i=0; i<TAM_MAX; i++) {
    	cout << "[" << i << "]: " << nome[i] << endl;	
    }

	cout << "\n\n";

    system("pause");
    return 0;
}
