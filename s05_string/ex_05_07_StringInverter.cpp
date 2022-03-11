#include <iostream>
#include <cstring>

using namespace std;

// Prof: Bruno Monteiro

int main()
{
    int i=0;
    int j=0;
    int tam;
    char original[100];
    char copia[100];

    cout << "Digite sua frase: ";
    //gets(original);	// OBS: evitar usar, pois nao eh portavel! Esta deprecated!
    cin.getline( original, sizeof(original) ); 

    tam = strlen(original);
    cout << "Tamanho: " << tam << endl;

	// Mesma logica que usamos com vetor de inteiros
    for(i=0, j=tam-1; i < tam; i++, j--) {
        copia[j] = original[i];
        cout << "c: " << copia[j] << "\n\n";
    }

    /* 
		Adiciona o caractere de fim de string no final da string construida.
    	OBS: para este proposito, declarei o contador fora, 
		pois o seu valor incrementado eh util para a solucao
	*/
    copia[i] = '\0';

    cout << "Resultado: " << copia << "\n\n";

    system("pause");
    return 0;
}
