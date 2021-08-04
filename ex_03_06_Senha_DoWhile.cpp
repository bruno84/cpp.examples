#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar a estrutura de repeticao do-while.
// OBS: problema desta versao: nao exibe mensagem de erro.

int main()
{
	const int SENHA_SISTEMA = 123;
    int senhaUser = 1;	// Inicializar com qq valor exceto 123

    do {
        cout << "Digite sua senha \n";
        cin >> senhaUser;
    }
    while ( senhaUser != SENHA_SISTEMA );

    cout << "Senha correta \n";

    system("pause");
    return 0;
}
