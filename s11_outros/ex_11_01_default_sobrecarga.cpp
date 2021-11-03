#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

void exibir(string str)            	
{
	cout << "f1: " << str << endl;
}

void exibir(string str, int tam)		
{
	cout << "f2: " << str << " " << tam << endl;
}

void exibir(int num, int tam)            
{
	cout << "f3: " << num << " " << tam << endl;
}

void exibir(long num, int tam)           
{
	cout << "f4: " << num << " " << tam << endl;
}

void exibir(double num, int tam)         
{
	cout << "f5: " << num << " " << tam << endl;
}


soma(int a=10, int b=20) 
{
	cout << "soma: " << a << " + " << b << " = " << a+b << endl;
}


int main() 
{ 	
	exibir("palavra");            
	exibir("palavra", 20);      
	exibir(2420,   30);           
	exibir(2420L,  40);           
	exibir(2420.0, 50);           
 	
 	soma();  
 	soma(40);
	soma(40, 80);
	   
 	
 	system("pause");
    return 0;    
} 


