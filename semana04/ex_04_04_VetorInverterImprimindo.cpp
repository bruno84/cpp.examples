#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int main()
{
	const int SIZE = 5;
    int vetor1[SIZE] = {10, 20, 30, 40, 50};

	cout << "Exibindo ordem inversa do vetor: \n\n";
    for(int j=SIZE-1; j >= 0; j--) {
        cout << vetor1[j] << endl;
    }

    printf("\n\n");

    system("pause");
    return 0;
}
