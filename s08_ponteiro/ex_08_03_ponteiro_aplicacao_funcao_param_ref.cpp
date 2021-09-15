#include <iostream>

using namespace std;

// Prof. Bruno Monteiro

void incrementa(int* pNum)
{
    cout << "3. pNum (valor de p): \t " << pNum << endl;	// endereco de numero
    *pNum = *pNum + 1;
    cout << "4. pNum (valor da ref): \t " << *pNum << endl;		// 6
}


int main()
{
    int numero = 5;
    
	cout << "1. numero (valor): \t " << numero << endl;	 // 5
	cout << "2. numero (ender): \t " << &numero << endl;
    incrementa(&numero);
    cout << "6. numero (valor): \t " << numero << endl;  // 6

    cout << "\n\n";
    system("pause");
    return 0;
}


