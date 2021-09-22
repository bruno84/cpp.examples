#include <iostream>

using namespace std;

// Prof. Bruno Monteiro

// Tipo do Elemento
struct tElemento
{
    int mat;            // Matricula
	string nome;      	// Nome
	tElemento* prox;    // Ponteiro para próximo elemento
};


int percorrer(tElemento* pInicio)
{
	int i = 0;
    tElemento *p = NULL; 	// ponteiro temporario
	
	p = pInicio;
	
	cout << endl << "pInicio: " << pInicio << endl;
	
	if(p == NULL)
	{
		cout << "LISTA VAZIA \n";
	}
	else 
    {
        while( p != NULL )
        {
            i++;
            cout << "\n";
            cout << "i : " << i << endl;
            cout << "Ponteiro: " << p << endl;
            cout << "Matricula: " << p->mat << endl;
            cout << "Nome: " << p->nome << endl;
            cout << "Prox: " << p->prox << endl;
            p = p->prox;
        }
    }

	cout << endl << "Quantidade de Elementos = " << i << endl<<endl;
    return i; // retorna a quantidade de elementos
}


void inserirInicio(tElemento** ppInicio, int mat, string nome)
{
    // NovoElemento     
    tElemento* novo = new tElemento;
    
    novo->mat = mat;
    novo->nome = nome;
    novo->prox = NULL;

    if( *ppInicio == NULL ) // Verifica se a lista está vazia
    {
    	// NovoElemento será o primeiro elemento da Lista
        *ppInicio = novo;
    }
    else
    {
    	// Anexa
        novo->prox = *ppInicio;
        *ppInicio = novo;
    }
}

int main()
{
	tElemento* pInicio = NULL;

	inserirInicio(&pInicio, 1, "objeto1"); 
	percorrer(pInicio);
	system("pause");
	system("cls");

	inserirInicio(&pInicio, 2, "objeto2");
	percorrer(pInicio);
	system("pause");
	system("cls");

	inserirInicio(&pInicio, 3, "objeto3");
	percorrer(pInicio);
	system("pause");

	return 0;
}
