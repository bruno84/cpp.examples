#include <iostream>
#include <cmath>
#include <limits>
#include <cstring>

using namespace std;

// Objetivo: definir as casas decimais sem arredondar

int main() 
{
	double number = 10.123456789123456789;
	int casasParam = 6;

	// precisao maxima da mantissa 
	int PREC_MAX = numeric_limits<double>::max_digits10;
	cout << "PREC_MAX: " << PREC_MAX << endl;
	cout.precision(PREC_MAX);
	cout << "number: " << number << endl;

	// contar a parte inteira
	int inteiraNumber = trunc(number);
	cout << "inteiraNumber: " << inteiraNumber << endl;
	char str[30];
	sprintf(str, "%d", inteiraNumber);
	int inteiraSize = strlen(str);
	cout << "inteiraSize: " << inteiraSize << endl;

	// ajusta as casas decimais:
	number = number * pow(10, casasParam);
	cout << "number: " << number << endl;
	number = trunc(number);
	cout << "number: " << number << endl;
	number = number / pow(10, casasParam);
	cout << "number: " << number << endl;
	
	// ajusta a mantissa adequada ao numero:
	int mantissaParam = casasParam+inteiraSize;
	cout << "mantissaParam: " << mantissaParam << endl;
	cout.precision(mantissaParam);
	cout << "number: " << number << endl;
	
	if(mantissaParam > PREC_MAX) {
		cout << "Mantissa extrapolou! \n\n";
	}
    
    system("pause");
    return 0;
}
