#include <iostream>
#include <limits>           // Para ter a máxima precisão

using namespace std; 

// Objetivo: variações do cin e cout
// Ver: https://www.cplusplus.com/reference/ios/ios_base/setf/

int main()	                   
{
    // ENTRADA: ler vários valores juntos
    int var1, var2, var3;
    
    cout << "Informe tres valores (separados por espaco ou ENTER): ";
    cin >> var1 >> var2 >> var3;

    cout << "Soma: " << var1 + var2 + var3 << endl<<endl<<endl;

    // ENTRADA: ler com uma mascara 
    int h, m;
		
	cout << "Digite a hora: __:__\b\b\b\b\b";
	cin >> h >> m;

	cout << "h: " << h << " m: " << m << "\a\n\n\n";


    // SAÍDA: setf
    /*  Mask:           Option:
        adjustfield:    left, right or internal	
        basefield:      dec, oct or hex	
        floatfield:     scientific or fixed	      */

    double valor = 123456789123456789;

    cout << "Valor: " << valor << endl<<endl;

    cout.setf(ios::scientific, ios::floatfield);
    cout << "Valor: " << valor << endl;
    cout.setf(ios::fixed, ios::floatfield);
    cout << "Valor: " << valor << endl<<endl;
    
    cout.unsetf(ios::floatfield);           // desfaz
    cout << "Valor: " << valor << endl<<endl;

    //cout.setf(ios::scientific, ios::floatfield);
    cout << scientific;
    cout.precision(2);
    cout << "Valor: " << valor <<endl;

    //cout.setf(ios::fixed, ios::floatfield);
    cout << fixed;
    cout.precision(2);
    cout << "Valor: " << valor <<endl<<endl;

    cout.precision(numeric_limits<double>::max_digits10);
    cout << "Valor: " << valor <<endl;

    system("pause");
    return 0;     
}