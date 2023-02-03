#include <iostream>

using namespace std;

// Objetivo: quebrar um numero em cada algarismo.

int main() 
{
	int number = 123456789; 

	cout << "number: " << number << endl;
	
    int q = number;
    int r = 0;
    
    while(q > 0) 
	{
        r = q % 10;
        q = q / 10;
        
        cout << "r: " << r << " q: " << q << endl;
    }
    
    system("pause");
    return 0;
}
