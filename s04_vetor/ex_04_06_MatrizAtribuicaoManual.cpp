#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int main()
{
	int matriz[2][3];      // Declaração da matriz 2 linhas e 3 colunas

	//  0,0  0,1  0,2  
	//  1,0  1,1  1,2

	//    0    1    2
	//   10   11   12

	cout << "Atribuicao direta... \n";
	matriz[0][0] = 0;    // Atribuição direta
	matriz[0][1] = 1;    // Atribuição direta
	matriz[0][2] = 2;    // Atribuição direta

	matriz[1][0] = 10;    // Atribuição direta
	matriz[1][1] = 11;    // Atribuição direta
	matriz[1][2] = 12;    // Atribuição direta

	cout << "Imprimindo... \n";
	cout << matriz[0][0] << endl;
	cout << matriz[0][1] << endl;
	cout << matriz[0][2] << endl;
	cout << endl;
	cout <<matriz[1][0] << endl;
	cout <<matriz[1][1] << endl;
	cout <<matriz[1][2] << endl;

	cout << endl;
	
    system("pause");
    return 0;
}

