#include <iostream>

using namespace std;

// Objetivo: programa simples

int main()
{
    int horas;          //declaracao 
    int fator = 60;     //inicializacao
    int result;         //declaracao 

    // OBS: opcionalmente, declaracoes do mesmo tipo podem ser feitas na mesma linha.

    cout << "Digite a quantidade de horas para converter para minutos: ";
    cin >> horas;       // entrada do valor pelo teclado
 
    result = horas * fator;  // operacao e atribuicao
    
    /* OBS: a ultima atribuicao substitui o valor
       da atribuicao anterior */

    cout << "Em " << horas << " hora(s) ha " << result << " minutos\n\n";

    system("pause");
    return 0;	
}
