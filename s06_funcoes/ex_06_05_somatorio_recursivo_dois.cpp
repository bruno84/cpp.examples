#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int somatorio(int n1, int n2)
{
    int r;   

    if(n1 > n2) {
		r = 0;
    }
    else {
        r = n1 + somatorio(n1+1, n2);
    }
    
    cout << "n1 = " << n1 << "  n2 = " << n2 << "  r = " << r << endl;
    
    return r;
}

int main()
{
    int n1, n2;

    cout << "Digite n1: ";
    cin >> n1;
	cout << "Digite n2: ";
    cin >> n2;

    cout << "Somatorio = " << somatorio(n1, n2) << endl;

    system("pause");
    return 0;
}
