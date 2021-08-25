#include <iostream>

using namespace std;

int main()
{
    char ch = 'A';   // atribui código ASCII do M
    int i = ch;      // armazena mesmo código num int
	
    cout << "O Código ASCII para " << ch << " : " << i << endl;
	
    cout << "Adicionando 1 ao código caractere..." << endl;
    ch = ch + 1;
    i = ch;
     
    cout << "O Código ASCII para " << ch << " : " << i << endl<<endl;

    cout << "Convertendo um algarismo char em int: \n";
    ch = '7';
    i = ch - 48;    // pois 48 é zero em ASCII
    cout << "O Código ASCII para " << ch << " : " << i << endl<<endl;

    system("pause");
    return 0;
}
