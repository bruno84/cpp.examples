#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar a estrutura condicional switch-case.

// OBS: a variavel avaliada dentro do  switch( var )  s� pode ser do tipo:  int ou char.
// OBS: as constantes do case n�o precisam estar em ordem.
// OBS: break evita que o fluxo v� para os cases abaixo.

int main()
{
    int n;

    cout << "Digite um numero: ";
    cin >> n;

    switch ( n )
    {
        case   7 : 
            cout << "Dizem que 7 da sorte \n";
            cout << "Mas nao acredito nessas coisas! \n"; 
            break;

        case   4 :  
        case  13 : 
	    case  17 : cout << "Dizem que 4, 13 e 17 dao azar  \n"; 
	   			  break;

        default : cout << "Nao sei nada sobre esse numero \n";
            break;
    }  
 
    system("pause");
    return 0;
}
