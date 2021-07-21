#include <iostream>

using namespace std;

// Objetivo: programa simples

int main()
{
    int horas;          //declaração 
    int fator = 60;     //inicialização
    int result;         //declaração 

    // OBS: opcionalmente, declarações do mesmo tipo podem ser feitas na mesma linha.

    cout << "Digite a quantidade de horas para converter para minutos: ";
    cin >> horas;       // entrada do valor pelo teclado
 
    result = horas * fator;  // operação e atribuição
    
    /* OBS: a última atribuição substitui o valor
       da atribuição anterior */

    cout << "Em " << horas << " hora(s) há " << result << " minutos \n\n";

    system("pause");
    return 0;	
}