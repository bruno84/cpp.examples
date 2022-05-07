#include <iostream>

using namespace std;

// Prof. Bruno Monteiro
// Objetivo: explorar outras formas de utilizar enum

// Eh permitido char pois pode ser representado como int (valor da tabela ASCII)
enum Tamanho{ PEQUENO='p', MEDIO='m', GRANDE='g' };

string enumToStr(Tamanho t)
{
	switch(t) {
		case PEQUENO 	: return "PEQUENO";
		case MEDIO 		: return "MEDIO";
		case GRANDE 	: return "GRANDE";
	}
}

int main()
{
	Tamanho tam = PEQUENO;
	
	cout << "tam: " << tam << endl; 			// 112 = valor na ASCII
	cout << "tam: " << (char) tam << endl; 		// p
	cout << "tam: " << enumToStr(tam) << endl; 	// PEQUENO
	
	char charEntrada;
	cout << "Qual tamanho? (p, m, g) ";
	cin >> charEntrada;
	tam = (Tamanho) charEntrada;
	
	cout << "tam: " << tam << endl; 
	cout << "tam: " << (char) tam << endl; 
	cout << "tam: " << enumToStr(tam) << endl; 
	
	system("pause");
	return 0;
}
