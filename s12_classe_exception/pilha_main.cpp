#include <iostream>
#include <stdexcept>
#include "pilha.cpp"	//OBS: Adicionei direto pois nao usei arquivo makefile nem mudei a linha de comando

using namespace std;


int main() 
{ 	
	int retorno;
	
	// Cria o objeto pilha1, chamando o construtor, passando o valor 3
	Pilha<int> pilha1(3);
	
	try {
		pilha1.push(3);
		pilha1.push(5);
		pilha1.push(7);
		pilha1.push(12); // nao vai dar certo!
	}
	catch (string e) {
        cout << "erro: " << e << endl;
    }
	
	cout << endl;

	retorno = pilha1.peek();
	cout << "Elemento no topo = " << retorno << endl;
	
	cout << endl;
	
	pilha1.show();
	
	cout << endl;
	
	try {
		retorno = pilha1.pop();
		cout << "desempilhado = " << retorno << endl;
	
		retorno = pilha1.pop();
		cout << "desempilhado = " << retorno << endl;
	
		retorno = pilha1.pop();
		cout << "desempilhado = " << retorno << endl;
	
		retorno = pilha1.pop(); // nao vai dar certo!
		cout << "desempilhado = " << retorno << endl;	
	}
	catch (string e) {
        cout << "erro: " << e << endl;
    }
	
	cout << endl;
	
	pilha1.show();
	
	cout << endl;
	
	cout << "full? " << pilha1.isFull() << endl;
	
	cout << "empty? " << pilha1.isEmpty() << endl<<endl;
		
	system("pause");
    return 0;    
} 
