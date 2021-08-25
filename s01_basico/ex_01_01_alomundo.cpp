#include <iostream>             // biblioteca padrão para entrada e saida.
                                // https://www.cplusplus.com/reference/
                                
using namespace std;            // namespace padrão, para evitar usar: std:cout

// Objetivo: explicar cada linha do programa mais simples

int main()	                    // Função principal e primeira a ser chamada pelo sistema operacional quando o programa é executado.
{	                            // Inicia bloco da função main.
    cout << "Alow Mundo! \n";   // stream de saída que exibe dados na tela.

    system("pause");	        // Congela a tela do programa.
    return 0;			        /* Retorna 0 (para o sistema operacional), o que significa que tudo ocorreu bem.
                                   Voce pode usar return 1 em situações de erro. */
}	                            // Encerra bloco da função main.