#include <iostream>
#include <cstring>

using namespace std;

// Prof: Bruno Monteiro
// VER: https://www.cplusplus.com/reference/cstring/

int main()
{    
	char meuNome[20];   // Declaração do vetor de caracteres 
	char saudacao[20];  // Declaração do vetor de caracteres 
	char mensagem[40];  // Declaração do vetor de caracteres 
	 
	printf("Digite seu nome: ");
	cin.getline( meuNome, sizeof(meuNome) ); 
	
	cout << "Qtd de caracteres: " << strlen(meuNome) << endl;
	
	strcpy(mensagem, "Oi, ");          	
	strcpy(saudacao, ", bom dia!");     // Atribui com sua frase de saudação 
	
	strcat(mensagem, meuNome);     // Une as duas strings: “” + “Bruno ” 
	strcat(mensagem, saudacao);    // Une as duas strings: “Bruno ” + “, bom dia!” 
	 
	cout << "Resultado: " << mensagem << endl;   // Exibe a string resultante: “Bruno, bom dia!”   
	    
    system("pause");
    return 0;
}
