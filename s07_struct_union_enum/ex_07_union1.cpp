#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

// OBS: em uma uniao, apenas um campo pode ser atribuido.

// DECLARACAO 
union uIdentificador
{
    int codigo;
    int serial;
};
// OBS: nao se pode usar tipo "string" em union

int main()
{
    uIdentificador identificador;

    // ATRIBUINDO
    cout << "Informe o codigo: ";
	cin >> identificador.codigo;
    	
    cout << "Informe o serial: ";
	cin >> identificador.serial;

    // ACESSANDO
    cout << "codigo: " << identificador.codigo << endl;
    cout << "serial: " << identificador.serial << endl;
	
	/* 
		OBS: se houver mais de um campo atribuido, 
		prevalece o valor da ultima atribuicao.
	*/

    printf("\n\n");
    system("pause");
    return 0;
}

