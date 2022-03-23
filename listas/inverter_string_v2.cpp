#include <iostream>
#include <cmath>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: inverter string (otimizado com Two Pointers)

int main()
{
	string str;
	
	getline( cin , str);
	
    int size = str.size();
    
    int i = 0;
    int j = 0;
    char temp = ' ';
    
    for(i=0, j=size-1; i<j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    cout << "resultado: " << str << endl;
}
