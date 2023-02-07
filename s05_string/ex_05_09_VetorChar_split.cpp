#include <iostream>
#include <cstring>

using namespace std;

// Prof: Bruno Monteiro
// OBJETIVO: fazer split de uma string

int main()
{
	char frase[] = "Minha frase. Ela, que sera super-quebrada";
	char* palavras;

	palavras = strtok(frase, " ,.-");
	
	while(palavras != NULL)
	{
		printf("palavra = %s \n", palavras);
		palavras = strtok(NULL, " ,.-");
	}
	
    system("pause");
    return 0;
}
