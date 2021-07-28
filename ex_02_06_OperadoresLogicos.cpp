#include <iostream>

using namespace std;

// Prof: Bruno Monteiro
// Objetivo: exemplificar operadores logicos

int main()   
{ 	
	bool A = true; 	// V
	bool B = false; // F
	bool result;
	
	result = (A || B)  &&  !(A && B);
	//		  V    F         V    F
	//          V (or)			F (and)		
	//			V				V (not)
	//				   V (and)
    cout << "result: " << result << endl;
	cout << boolalpha << "result: " << result << endl;

	system("pause");
    return 0;
}

