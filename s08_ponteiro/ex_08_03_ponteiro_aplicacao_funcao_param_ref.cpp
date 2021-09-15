#include <iostream>

using namespace std;

// Prof. Bruno Monteiro

void incrementa(int* pNum)
{
    cout << "3. pNum (ender): \t " << &pNum << endl;
    *pNum = *pNum + 1;
    cout << "4. pNum (valor): \t " << pNum << endl;
}


int main()
{
    int numero = 5;
    
	cout << "1. numero (valor): \t " << numero << endl;
	cout << "2. numero (ender): \t " << &numero << endl;
    incrementa(&numero);
    cout << "6. numero (valor): \t " << numero << endl;

    cout << "\n\n";
    system("pause");
    return 0;
}


