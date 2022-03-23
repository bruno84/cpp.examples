#include <iostream>
#include <cmath>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: inverter string. solucao trivial: O(n)

int main()
{
	string str1;
	string str2;
	
	getline( cin , str1);
	str2 = str1;
	
    int size = str1.size();
    cout << "size: " << str2 << endl;
    
    for(int i=0, j=size-1; i<size; i++, j--)
    {    	
        str2[i] = str1[j];
    }
    
    cout << "resultado: " << str2 << endl;
}
