#include <iostream>
#include <cstring>

using namespace std;

// Prof: Bruno Monteiro
// OBJETIVO: diferentes formas de preencher uma string

int main()
{
	int x;
	char vetorChar1[40] = {'A', 'D', 'R', 'I', 'A', 'N', 'A', '\0'};  	// Inicialização "trabalhosa". 
    char vetorChar2[40] = "Bruno";  // Inicialização "mais fácil"	ATENÇÃO!!! Isso só pode ser feito na inicialização da string! Nunca para uma atribuição.
    char vetorChar3[40];
    char vetorChar4[40];
    string str5 = "minha string"; 	// O padrão C++98 introduziu a classe string em sua biblioteca
	string str6;
	string str7;
	string str8;
	
	cout << "caracteres em: vetorChar1: " << strlen(vetorChar1) << endl;
	cout << "caracteres em: vetorChar2: " << strlen(vetorChar2) << endl;
	
    strcpy(vetorChar3, "Maria eh vetorChar3"); 		// Atribuição

	cout << "Digite um numero: ";
	cin >> x;
	fflush(stdin);	// Opcao1: limpa o buffer
	//cin.get();   	// Opcao2: le o caracter que estiver no buffer
	
	cout << "Bytes retornados em sizeof(vetorChar4): " << sizeof(vetorChar4) << endl;
    cout << "Digite vetorChar4 (nome completo): ";
    //cin >> vetorChar4; 							// Cuidado: cin simples não deve ser usado para ler strings com espaço.
	cin.getline( vetorChar4, sizeof(vetorChar4) );
    
    cout << "Digite um numero: ";
    cin >> x;
    
    cout << "Digite um numero: ";	// OBS: repeti apenas para ilustrar que o ENTER no buffer só influencia strings.
    cin >> x;
    
    
    str6 = "se for string eu posso atribuir! =D";
    cout << "caracteres em: str6 = " << str6.size() << endl;
    
    // vetorChar1 = vetorChar2;		// ATENCAO: se char[] nem tente!
    
    str7 = str6;		// se for string pode!
    
    cout << "Digite str8 (nome completo): ";
    fflush(stdin);
    getline( cin, str8 );
    
    str8 = "!!!" + str8 + "!!!";	// Posso concatenar de uma forma mais facil! (igual como em Java)
    
	cout << "vetorChar1: " << vetorChar1 << endl;
    cout << "vetorChar2: " << vetorChar2 << endl;
    cout << "vetorChar3: " << vetorChar3 << endl;
    cout << "vetorChar4: " << vetorChar4 << endl;
    cout << "str5: " << str5 << endl;
	cout << "str6: " << str6 << endl;
	cout << "str7: " << str7 << endl;
	cout << "str8: " << str8 << endl;

	// Manipulo a string da mesma forma que como vetor de char:
	for(int i=0; i<=str8.size(); i++) {	
    	cout << "[" << i << "]: " << str8[i] << " ";
    }

	cout << endl;
    system("pause");
    return 0;
}
