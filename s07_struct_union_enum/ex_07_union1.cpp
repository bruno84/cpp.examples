#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

// OBS: em uma uniao, apenas um campo pode ser atribuido.

// DECLARAÇÃO 
union sIdentificador
{
    int codigo;
    int serial;
};
// OBS: nao se pode usar tipo "string" em union

int main()
{
    sIdentificador id;

    // ATRIBUINDO
    cout << "Informe o codigo: ";
	cin >> id.codigo;
    	
    cout << "Informe o serial: ";
	cin >> id.serial;

    // ACESSANDO
    cout << "codigo: " << id.codigo << endl;
    cout << "serial: " << id.serial << endl;
	
	/* 
		OBS: se houver mais de um campo atribuido, 
		prevalece o valor da ultima atribuicao.
	*/

    printf("\n\n");
    system("pause");
    return 0;
}

