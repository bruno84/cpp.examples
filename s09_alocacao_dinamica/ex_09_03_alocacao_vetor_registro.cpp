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
	int qtd = 0;
	
	cout << "Digite a quantidade de elementos: ";
	cin >> qtd;
	fflush(stdin); // limpa o buffer de entrada (teclado)
	
	sFicha* vetorFicha = new sFicha[qtd];

    for(int i=0; i < qtd; i++)
    {
        cout << endl << "Informe o nome da pessoa ("<<i+1<<" de "<<qtd<<"): ";
        getline( cin, vetorFicha[i].nome );
        cout << "Informe a idade: ";
        cin >> vetorFicha[i].idade;
        
        fflush(stdin); // limpa o buffer de entrada (teclado)
    }

    for(int i=0; i < qtd; i++) 
    {
        cout << endl << "Nome: " << vetorFicha[i].nome;
        cout << endl << "Idade: " << vetorFicha[i].idade << endl;
    }

	// Desaloco meu bloco:
	delete[] vetorFicha;

    printf("\n\n");
    system("pause");

    return 0;
}
