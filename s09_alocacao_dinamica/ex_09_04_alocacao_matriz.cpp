#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Prof. Bruno Monteiro

// Prof: Bruno Monteiro
// Objetivo: alocação dinâmica de uma matriz
// OBSERVAÇÃO: requer o uso de ponteiro de ponteiro.

int main()
{
	int i, l, c, qtdLinhas, qtdColunas;
	int* p = NULL;

    cout << "Qtd de linhas: ";
    cin >> qtdLinhas;	// 2

    cout << "Qtd de colunas: ";
    cin >> qtdColunas; // 3

	int** ppMatriz = new int*[qtdLinhas];	// Aloca linhas

	for(i=0; i < qtdLinhas; i++) {
		ppMatriz[i] = new int[qtdColunas];	// Aloca colunas
	}

	//  0,0  0,1  0,2
	//  1,0  1,1  1,2

	//    0    1    2
	//    1    2    3

	cout << "ATRIBUICAO MATRIZ... \n";

    for(l=0; l<qtdLinhas; l++)
	{
        for(c=0; c<qtdColunas; c++) {
            ppMatriz[l][c] = l + c;
        }
    }

	cout << "EXIBIR MATRIZ... \n";

    for(l=0; l<qtdLinhas; l++)
	{
        cout << "\n";
        for(c=0; c<qtdColunas; c++) {
            cout << ppMatriz[l][c] << " ";
        }
    }

    // Desalocar da memoria
	for(i=0; i < qtdLinhas; i++) {
		delete[] ppMatriz[i];
	}
	
    delete[] ppMatriz;

	cout << "\n";
    system("pause");
    return 0;
}

