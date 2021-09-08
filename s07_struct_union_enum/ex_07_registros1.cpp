#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

// DECLARAÇÃO DO REGISTRO E DO NOVO TIPO
struct sFicha
{
	// Campos:
    string nome;
    float peso;
    float altura;
    float imc;
};

void exibirFicha(sFicha ficha)
{
	cout << endl << "------ EXIBINDO REGISTRO DE: " << ficha.nome << " ------ \n" ;
    cout << "Peso: " << ficha.peso << endl;
    cout << "Altura: " << ficha.altura << endl;
    cout << "IMC: " << ficha.imc << endl<<endl;
}

int main()
{
	sFicha fichaAluno1 = {"Bruno Monteiro", 78, 1.63, 0};
    sFicha fichaAluno2;
    sFicha fichaAluno3;

	// Pode ser feita atribuicao, como qq variavel
	fichaAluno2 = fichaAluno1;

    // ACESSANDO CONTEÚDOS DOS CAMPOS DO REGISTRO
	exibirFicha(fichaAluno1);

    // ACESSANDO CONTEÚDOS DOS CAMPOS DO REGISTRO
	exibirFicha(fichaAluno2);
    
    // ATRIBUIÇÕES DOS CAMPOS DO REGISTRO
    cout << "Informe o nome da pessoa: ";
    getline( cin, fichaAluno3.nome );
    
    cout << "Informe o peso de: " << fichaAluno3.nome << ": ";
    cin >> fichaAluno3.peso;
   
    cout << "Informe a altura de: " << fichaAluno3.nome << ": ";
    cin >> fichaAluno3.altura;

	if(fichaAluno3.altura != 0) {
    	fichaAluno3.imc = fichaAluno3.peso / (fichaAluno3.altura * fichaAluno3.altura);
	}

    // ACESSANDO CONTEÚDOS DOS CAMPOS DO REGISTRO
	exibirFicha(fichaAluno3);

    printf("\n\n");
    system("pause");
    return 0;
}

