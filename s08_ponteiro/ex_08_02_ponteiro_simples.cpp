#include <iostream>

using namespace std;

// Prof. Bruno Monteiro

int main()
{
    int  x = 10;
    int* p = &x;	// ponteiro eh uma variavel que armazena endereco

	cout << "x (bytes): \t " << sizeof(x) << endl;
    cout << "p (bytes): \t " << sizeof(p) << endl<<endl;
	
    cout << " x (valor de x): \t " << x << endl;		// 10
    cout << "&x (ender de x): \t " << &x << endl;		// endereço de x
    cout << " p (ender de x): \t " << p << endl;			// endereço de x
    cout << "*p (valor de x): \t " << *p << endl;		// 10
    cout << "&p (ender de p): \t " << &p << endl<<endl;	// endereco da variavel p

    *p = *p - 1;	// Altero o conteudo de x usando o ponteiro p

    cout << " x (valor de x): \t " << x << endl;		// 9
    cout << "*p (valor de x): \t " << *p << endl;		// 9

    cout << "\n\n";
    system("pause");
    return 0;
}
