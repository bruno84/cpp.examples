#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int main()
{
	const int SIZE = 5;
    int vetor1[SIZE] = {10, 40, 30, 0, 20}; 

	cout << "Exibindo ordem inversa do vetor: \n\n";
    for(int i=SIZE-1; i >= 0; i--) {
        cout << vetor1[i] << endl;
    }

    printf("\n\n");

    system("pause");
    return 0;
}
