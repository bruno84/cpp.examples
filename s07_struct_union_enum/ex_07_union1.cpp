#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar o uso de union 

// DECLARACAO 
// OBS: em uma uniao, apenas um campo pode ser atribuido.
union Identificador
{
    long codigo;
    long serial;
};
// OBS: nao se pode usar tipo "string" em union

int main()
{
    Identificador meuID;

    // ATRIBUINDO
    cout << "Informe o codigo: ";
	cin >> meuID.codigo;
    	
    cout << "Informe o serial: ";
	cin >> meuID.serial;

	// OBS: prevalece o valor da ultima atribuicao.

    // ACESSANDO
    cout << "codigo: " << meuID.codigo << endl;
    cout << "serial: " << meuID.serial << endl;
	
    printf("\n\n");
    system("pause");
    return 0;
}

