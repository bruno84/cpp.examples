#include <iostream>
#include <cmath>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: equacao do 2o grau

float calcDelta(float a, float b, float c)
{
	return pow(b,2) - 4*a*c;
}

int main() 
{ 
	float a,b,c;
	float delta;
	float x1=0, x2=0;
	
	cout << "suponha a equacao do 2o grau: ax2 + bx + c = 0 \n"; 
	cout << "Digite o valor de a: ";
	cin >> a;
	cout << "Digite o valor de b: ";
	cin >> b;
	cout << "Digite o valor de c: ";
	cin >> c;
	
	delta = calcDelta(a,b,c);
	cout << "Delta: " << delta << endl;
	
	if(delta > 0) 
	{		
		x1 = ( -b + sqrt(delta) ) / (2*a);
		x2 = ( -b - sqrt(delta) ) / (2*a);
		cout << "x1: " << x1 << endl;
		cout << "x2: " << x2 << endl;
	}
	else 
	{
		if(delta == 0) {
			x1 = ( -b + sqrt(delta) ) / (2*a);
			cout << "x1: " << x1 << endl;
		}
		else {
			cout << "x1 e x2 nao existem. " << endl;	
		}
	}

	system("pause");
	return 0;    
} 


