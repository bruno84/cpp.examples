#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

// DECLARAÇÃO DO REGISTRO E DO NOVO TIPO
struct sFicha
{
    string nome;
    float peso;
    float altura;
    float imc;
};

int main()
{
    int i;
    sFicha fichaAcademia;
    sFicha fichaMedica = {"Bruno Monteiro", 78, 1.63, 0};
    sFicha fichaMedicaCopia;

	// Pode ser feita atribuicao, como qq variavel
	fichaMedicaCopia = fichaMedica;

    // ACESSANDO CONTEÚDOS DOS CAMPOS DO REGISTRO
    cout << endl << "------ EXIBINDO REGISTRO DE: " << fichaMedicaCopia.nome << " ------ \n" ;
    cout << "Peso: " << fichaMedicaCopia.peso << endl;
    cout << "Altura: " << fichaMedicaCopia.altura << endl;
    cout << "IMC: " << fichaMedicaCopia.imc << endl;

    // ACESSANDO CONTEÚDOS DOS CAMPOS DO REGISTRO
    cout << endl << "------ EXIBINDO REGISTRO DE: " << fichaMedica.nome << " ------ \n" ;
    cout << "Peso: " << fichaMedica.peso << endl;
    cout << "Altura: " << fichaMedica.altura << endl;
    cout << "IMC: " << fichaMedica.imc << endl<<endl;

    // ATRIBUIÇÕES DOS CAMPOS DO REGISTRO
    cout << "Informe o nome da pessoa: ";
    getline( cin, fichaAcademia.nome );
    
    cout << "Informe o peso de: " << fichaAcademia.nome << ": ";
    cin >> fichaAcademia.peso;
   
    cout << "Informe a altura de: " << fichaAcademia.nome << ": ";
    cin >> fichaAcademia.altura;

	if(fichaAcademia.altura != 0) {
    	fichaAcademia.imc = fichaAcademia.peso / (fichaAcademia.altura * fichaAcademia.altura);
	}
    // ACESSANDO CONTEÚDOS DOS CAMPOS DO REGISTRO
    cout << endl << "------ EXIBINDO REGISTRO DE: " << fichaAcademia.nome << " ------ \n" ;
    cout << "Peso: " << fichaAcademia.peso << endl;
    cout << "Altura: " << fichaAcademia.altura << endl;
    cout << "IMC: " << fichaAcademia.imc;


	

    printf("\n\n");
    system("pause");
    return 0;
}

