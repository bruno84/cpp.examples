#include <iostream>
#include <string>

using namespace std;

// Prof: Bruno Monteiro
// OBJETIVO: diferentes formas de preencher uma string

int main()
{
	// O padrão C++98 introduziu a classe string em sua biblioteca
    string str1 = "minha string1"; 	
	string str2("minha string2");
	string str3(10, 'B');

	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << "str3: " << str3 << endl<<endl;

	cout << "size str1: " << str1.size() << endl;
	cout << "size str2: " << str2.size() << endl;
	cout << "size str3: " << str3.size() << endl<<endl;

    // Diferenca: posso atribuir sem precisar da strcpy()
    str1 = "minha string1 alterada";		
    cout << "str1: " << str1 << endl<<endl;
    
    // Diferenca: nao preciso usar strlen()
    cout << "str1.size(): " << str1.size() << endl<<endl;	
        
	// Diferenca: getline 
    cout << "Digite str3 (nome completo): ";
    getline( cin, str3 );
    cout << "str3: " << str3 << endl<<endl;
    
    // Diferenca: Posso concatenar de uma forma mais facil! (igual como em Java)
    str3 = "!!!" + str3 + "!!!";	
    cout << "str3: " << str3 << endl<<endl;
    

	// Semelhança: Manipular string da mesma forma que como vetor de char:
	int size3 = str3.size();
	for(int i=0; i<size3; i++) {	
    	cout << "[" << i << "]: " << str3[i] << " ";
    }

	cout << endl;
    system("pause");
    return 0;
}
