#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

struct sFicha
{
    string nome;
    int idade;
};

int main()
{
	const int SIZE = 3;

    sFicha vetorFicha[SIZE];

    for(int i=0; i <= SIZE-1; i++)
    {
        cout << endl << "Informe o nome da pessoa ("<<i+1<<" de "<<SIZE<<"): ";
        getline( cin, vetorFicha[i].nome );
        cout << "Informe a idade: ";
        cin >> vetorFicha[i].idade;
        
        fflush(stdin); // limpa o buffer de entrada (teclado)
    }

    for(int i=0; i <= SIZE-1; i++) 
    {
        cout << endl << "Nome: " << vetorFicha[i].nome;
        cout << endl << "Idade: " << vetorFicha[i].idade;
    }

    printf("\n\n");
    system("pause");

    return 0;
}
