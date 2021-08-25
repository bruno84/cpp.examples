#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int main()
{
	const int SIZE = 5;
	
    int vetor1[] = {10, 20, 30, 40, 50};	// original
    int vetor2[SIZE];						// invertido

	// i: comeca do inicio
	// f: comeca do fim

    for(int i=0, f=SIZE-1 ;  i<SIZE ;  i++, f--) {
        vetor2[i] = vetor1[f];
    }

    for(int i=0; i<SIZE; i++) {
        cout << vetor2[i] << endl;
    }

    printf("\n\n");
    
    system("pause");
    return 0;
}
