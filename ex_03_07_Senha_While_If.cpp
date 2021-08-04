#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar estrutura condicional e de repeticao.
// OBS: nesta versao: consigo exibir mensagem de erro.

int main()
{
	const int SENHA_SISTEMA = 123; 
	int senhaUser = 1;	// Inicializar com qq valor exceto 123
	
	while(senhaUser != SENHA_SISTEMA)
	{	
        cout << "Digite sua senha \n";
        cin >> senhaUser;
		
		if(senhaUser != SENHA_SISTEMA) {
			cout << "Senha errada \n";
		}
	}
	
	cout << "Senha certa \n";
	
	system("pause");
	return 0;
}


