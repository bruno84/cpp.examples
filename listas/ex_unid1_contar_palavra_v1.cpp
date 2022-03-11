#include <iostream>
#include <cstring>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: contar a frequencia de palavras de um texto. Versao1: estatica.


struct tReg
{
    string palavra;
    int cont;
};

int main()
{
	int qtdMax = 100;
	
    // Entrada
	char frase[] = "estude muito. muito, estude muito muito-sempre";
		
	// QUEBRAR FRASE:
	string fraseArray[qtdMax];
	char* palavraTemp;
	int p = 0;
	int qtdPalavras = 0;
	int qtdDicionario = 0;
	
	palavraTemp = strtok(frase, " ,.-");
	
	while(palavraTemp != NULL) 
	{
		cout << "palavraTemp = " << palavraTemp << endl;
		fraseArray[p] = palavraTemp;
		p++;
		
		palavraTemp = strtok(NULL, " ,.-");	
	}
	
	// Quantidade de palavras da frase
	qtdPalavras = p;
	cout << "qtdPalavras = " << qtdPalavras << endl;
	
	// Exibir array de palavras
    for(int i=0; i<qtdPalavras; i++) {
        cout << "fraseArray[i] = " << fraseArray[i] << endl;
    }
    
	// ANALISAR A FRASE:
	tReg dicionario[qtdMax];
    
    // Variaveis de controle
    int iExiste = -1;	// indice da palavra encontrada
    int iNova = 0;		// indice da palavra nova
    
    string palavra;
    
    for(int p=0; p < qtdPalavras; p++)
    {
    	palavra = fraseArray[p];
    	
        // Verifica se palavra ja existe no dicionario
        iExiste = -1;
        
        for(int i=0; i<qtdPalavras; i++)
        {
            if( dicionario[i].palavra == palavra )
            {
                iExiste = i;
                break;
            }
        }

        if(iExiste != -1)
        {
            // Palavra existe no dicionario: incrementar o cont
            dicionario[iExiste].cont++;
        }
        else
        {
            // Palavra nao existe no dicionario: entao adiciona
            dicionario[iNova].palavra = palavra;
            dicionario[iNova].cont = 1;
            iNova++;
        }

    }

	// Quantidade de palavras no dicionario
	qtdDicionario = iNova;
	cout << "qtdDicionario = " << qtdDicionario << endl;

    // Imprimir a lista desorganizada
    for(int i=0; i<qtdDicionario; i++) {
        cout << dicionario[i].palavra << " \t " << dicionario[i].cont << endl;
    }
    
    // organizar a lista

    // imprimir a lista ordenada


    system("pause");
    return 0;
}


