#include <iostream>

using namespace std;

// Prof. Bruno Monteiro

int main()
{
    int vetor[] = {1, 5, 9};
    int *p1 = NULL;
    int *p2 = NULL;

    p1 = &vetor[0]; // 1
    p2 = &vetor[1]; // 5

    cout << "endereco de vetor: \t " << vetor << endl;

    cout << "conteudo de p1: \t " << p1 << endl;
    cout << "conteudo de p2: \t " << p2 << endl;

    if(p1 == p2) {
        cout << "p1 eh igual a p2 \n";
    }

    if(p1 != p2) {
        cout << "p1 eh diferente de p2 \n";
    }

    if(p1 > p2) {
        cout << "p1 eh maior do que p2 \n";
    }

    if(p1 < p2) {
        cout << "p1 eh menor do que p2 \n";
    }

    cout << "\n\n";
    system("pause");
    return 0;
}



