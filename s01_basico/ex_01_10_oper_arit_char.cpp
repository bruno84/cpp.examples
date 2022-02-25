#include <iostream>

using namespace std;

int main()
{
    char ch = 'A';   // atribui codigo ASCII
    int i = ch;      // armazena mesmo codigo num int
	
    cout << "O Codigo ASCII para " << ch << " : " << i << endl;
	
    cout << "Adicionando 1 ao codigo caractere..." << endl;
    ch = ch + 1;
    i = ch;
     
    cout << "O Codigo ASCII para " << ch << " : " << i << endl<<endl;

    cout << "Convertendo um algarismo char em int: \n";
    ch = '7';
    i = ch - 48;    // pois 48 eh zero em ASCII
    cout << "O Codigo ASCII para " << ch << " : " << i << endl<<endl;

    system("pause");
    return 0;
}
