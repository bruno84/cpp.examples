#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

// Assinatura da fun��o: permite chamar a fun��o antes de sua declara��o.
int somatorio(int);

int main()
{
    int n;

    cout << "Digite n: ";
    cin >> n;	// 3

    cout << "Somatorio = " << somatorio(n) << endl; // 6

    system("pause");
    return 0;
}

// PILHA:

// main()

int somatorio(int n)
{
    int r;   

	cout << "n = " << n << endl;

    if(n == 0) 
    {
		cout << "fim \n";
		r = 0;
    }
    else 
    {
        r = n + somatorio(n-1);
    }
    
    return r;
}

