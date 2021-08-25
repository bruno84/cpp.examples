#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

// Assinatura da função: permite chamar a função antes de sua declaração.
int somatorio(int);	

int main()
{
    int n;

    cout << "Digite n: ";
    cin >> n;

    cout << "Somatorio = " << somatorio(n) << endl;

    system("pause");
    return 0;
}

int somatorio(int n)
{
    int r;   

	cout << "n = " << n << endl;

    if(n < 1) 
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

