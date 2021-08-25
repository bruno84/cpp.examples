#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar estrutura condicional e de repeticao.

int main()
{
    int opcao = 1;   // Inicializo com qq valor, exceto zero 
    
    while(opcao != 0)
    {
        cout << "Menu: \n";
        cout << "1 - Opcao 1 \n";
        cout << "2 - Opcao 2 \n";
        cout << "0 - sair \n\n";
        cout << "Digite sua opcao: ";
        cin >> opcao; 
    
        switch (opcao)
        {
            case 1 : cout << "Executando Opcao 1 ... \n";
                     break;
            case 2 : cout << "Executando Opcao 2 ... \n";
                     break;
            case 0 : cout << "SAINDO... \n";
                     break;
            default: cout << "Opcao invalida! \n";
                     break;
        }
    }   

    system("pause");
    return 0;
}
