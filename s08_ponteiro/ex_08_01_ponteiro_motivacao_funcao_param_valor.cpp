#include <iostream>

using namespace std;

// Prof. Bruno Monteiro

void incrementa(int num)
{
    cout << "3. num (ender): \t " << &num << endl;
    num = num + 1;
    cout << "4. num (valor): \t " << num << endl;
}

int main()
{
    int numero = 5;

	cout << "1. numero (valor): \t " << numero << endl;
	cout << "2. numero (ender): \t " << &numero << endl;
    incrementa(numero);
    cout << "5. numero (valor): \t " << numero << endl;  // 5

    cout << "\n\n";
    system("pause");
    return 0;
}


