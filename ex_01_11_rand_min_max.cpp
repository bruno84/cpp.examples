#include <iostream>
#include <cstdlib>

using namespace std;

// Objetivo: gerar um numero aleatorio com min e max

int main()
{
    int min, max;
    cout << "Entre com o valor min: ";  // 10
    cin >> min;
    cout << "Entre com o valor max: ";  // 20
    cin >> max;

    int sorteio = min + rand() % (max - min + 1);  
    cout << "sorteio: " << sorteio << endl<<endl;

    // 10 + {0..32767} % 11
    // 10 +  {0..10}

    system("pause");
    return 0;
}
