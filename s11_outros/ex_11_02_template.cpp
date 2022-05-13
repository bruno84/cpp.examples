#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

template <typename T>			// Generic ou Programação Genérica
T soma(T param1, T param2)
{
    T result = param1 + param2;
    cout << param1 << " + " << param2 << " = " << result << endl;
    return result;
}


int main() 
{ 	
    int a = 10;
    int b = 20;
    int c;
    
    double x = 10.5;
    double y = 20.5;
    double z;

    c = soma(a, b);
    cout << "retorno: " << c << endl;
    
    z = soma(x, y);
    cout << "retorno: " << z << endl;
 	
 	system("pause");
    return 0;    
} 


