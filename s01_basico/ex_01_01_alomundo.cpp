#include <iostream>             // biblioteca padrao para entrada e saida.
                                // https://www.cplusplus.com/reference/
                                
using namespace std;            // namespace padrao, para evitar usar: std:cout

// Objetivo: explicar cada linha do programa mais simples

int main()	                    // Funcao principal e primeira a ser chamada pelo SO ao executar programa.
{	                            // Inicia bloco da funcao main.
    cout << "Alow Mundo! \n";   // stream de saida que exibe dados na tela.

    system("pause");			// Congela a tela do programa.
	return 0;			        /* Retorna 0 (para o sistema operacional), 
								   o que significa que tudo ocorreu bem.
                                   Voce pode usar return 1 em situacoes de erro. */
}	                            // Encerra bloco da funcao main.p
