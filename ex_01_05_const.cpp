#include <iostream>

//#define FATOR 60

using namespace std;

// Objetivo: constantes

int main()
{
    int horas, result;
	const int FATOR = 60;	// prefira criar constantes assim

	//FATOR = 24;	// erro de compilação: não se pode alterar o valor de uma constante

    cout << "Digite a quantidade de horas para converter para minutos: ";
    cin >> horas;       
 
    result = horas * FATOR;  

    cout << "Em " << horas << " hora(s) há " << result << " minutos \n\n";

    system("pause");
    return 0;	
}