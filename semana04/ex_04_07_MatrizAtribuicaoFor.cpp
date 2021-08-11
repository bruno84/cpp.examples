#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int main()
{
	const int TAM_LINHA  = 2;
	const int TAM_COLUNA = 3;

    // 3 5 7
    // 4 6 8

    // INICIALIZAÇÃO:
	int matriz[TAM_LINHA][TAM_COLUNA] = { {3,5,7}, {4,6,8} };	// OBS: pode-se omitir apenas a primeira dimensao

    cout << "LER MATRIZ... \n";

	for(int l=0; l<TAM_LINHA; l++) 	// indice l endereça a linha
	{
        for(int c=0; c<TAM_COLUNA; c++) 	// indice c endereça a coluna
		{
            cout << "["<<l<<"]["<<c<<"]: ";
            cin >> matriz[l][c];
        }
    }
	
	cout << "\n\n" << "EXIBIR MATRIZ... \n";

    for(int l=0; l<TAM_LINHA; l++)
	{
        for(int c=0; c<TAM_COLUNA; c++) {
            cout << matriz[l][c] << " ";
        }
        cout << "\n";
    }

    cout << "\n\n";
    
    system("pause");

	return 0;
}
