#include <iostream>

using namespace std;

// Prof. Bruno Monteiro

// Objetivos: Alocar dinamicamente um bloco de memoria para um vetor, cujo tamanho é definido em tempo de execução. 

void exibeVetor(int* pVet, int size) 
{
    for(int i=0; i < size; i++) {
        cout << "Elemento " << i << " : " << pVet[i] << endl;
    }  
    
    cout << "\n";
}

int main()
{
    int qtd;
    int bytes;
    int* pVetor = NULL;

	cout << "Digite a quantidade de elementos: ";
	cin >> qtd;
	
	// Aloca vetor dinamicamente, em tempo de execucao:
	pVetor = new int[qtd];

	if(pVetor == NULL) {
		cout << "ERRO: Bloco nao conseguiu ser alocado!";
		return 1;
	}

	cout << "pVetor (conteudo): " << pVetor << endl;    
    
	exibeVetor(pVetor, qtd); // vai exibir o bloco recem alocado, com lixos.

	// Permite ao usuario preencher o vetor:
    for(int i=0; i < qtd; i++) {
        cout << "Digite o elemento " << i << ": ";
        cin >> pVetor[i];
    }

    exibeVetor(pVetor, qtd);

	// Desaloco meu bloco:
	delete[] pVetor;

	exibeVetor(pVetor, qtd);

    cout << "\n\n";
    system("pause");
    return 0;
}
