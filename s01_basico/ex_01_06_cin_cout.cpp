#include <iostream>
#include <limits>           // Para ter a maxima precisao

using namespace std; 

// Objetivo: variacoes do cin e cout
// Ver: https://www.cplusplus.com/reference/ios/ios_base/setf/

int main()	                   
{
    // ENTRADA: ler varios valores juntos
    int var1, var2, var3;
    
    cout << "Informe tres valores (separados por espaco ou ENTER): \n";
    cin >> var1 >> var2 >> var3;

    cout << "Soma: " << var1 + var2 + var3 << endl<<endl<<endl;

    // ENTRADA: ler com uma mascara 
    int h, m;
		
	cout << "Digite a \t\t hora: __:__\b\b\b\b\b";
	cin >> h >> m;

	cout << "h: " << h << " m: " << m << "\a\a\a\a\n\n\n";


    // SAIDA: setf
    /*  Mask:           Option:
        adjustfield:    left, right or internal	
        basefield:      dec, oct or hex	
        floatfield:     scientific or fixed	      */

    double valor = 123456789123456789;

    cout << "Valor1: " << valor << endl<<endl;

	// METODO 1
    cout.setf(ios::scientific, ios::floatfield);
    cout << "Valor2: " << valor << endl;
    cout.setf(ios::fixed, ios::floatfield);
    cout << "Valor3: " << valor << endl<<endl;
    
    cout.unsetf(ios::floatfield);           // desfaz
    cout << "Valor4: " << valor << endl<<endl;

	// METODO 2
    cout << scientific;		// notacao cientifica
    //cout << fixed;		// notacao comum com ponto
    cout.precision(6);
    cout << "Valor5: " << valor <<endl;

    //cout.setf(ios::fixed, ios::floatfield);
    cout << fixed;
    cout.precision(2);
    cout << "Valor6: " << valor <<endl<<endl;

    cout.precision(numeric_limits<double>::digits10);
    cout << "Valor7: " << valor <<endl;

    system("pause");
    return 0;     
}
