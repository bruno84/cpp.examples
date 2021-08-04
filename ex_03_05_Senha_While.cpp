#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar a estrutura de repeticao while.
// OBS: problema desta versao: nao exibe mensagem de erro.

int main()
{
	const int SENHA_SISTEMA = 123;
    int senhaUser = 1;	// Inicializar com qq valor exceto 123

    while ( senhaUser != SENHA_SISTEMA ) {
        cout << "Digite sua senha \n";
        cin >> senhaUser;
    }

    cout << "Senha correta \n";
	
    system("pause");
    return 0;
}
