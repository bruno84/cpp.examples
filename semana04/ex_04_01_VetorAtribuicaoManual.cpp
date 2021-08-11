#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

int main()
{    
	int meuVetor[3];
	
	cout << "size: " << sizeof(meuVetor) << endl;
	
	cout << "\n" << "Atribuicao direta... \n";
	meuVetor[0] = 10;    // Atribuição direta 
	meuVetor[1] = 20;    // Atribuição direta 
	meuVetor[2] = 30;    // Atribuição direta 
	
	cout << "\n" << "Imprimindo... \n";
	cout << meuVetor[0] << endl;  // Será impresso 10
	cout << meuVetor[1] << endl;  // Será impresso 20
	cout << meuVetor[2] << endl;  // Será impresso 30
	
	cout << "\n" << "Atribuicao pelo teclado... \n";
	
	cout << "Elemento 0: ";
	cin >> meuVetor[0];  // Atribuição por dispositivo de entrada 
	
	cout << "Elemento 1: ";
	cin >> meuVetor[1];  // Atribuição por dispositivo de entrada 
	
	cout << "Elemento 2: ";
	cin >> meuVetor[2];  // Atribuição por dispositivo de entrada 
	
	cout << "\n" << "Imprimindo valores... \n";
	cout << meuVetor[0] << endl;  
    cout << meuVetor[1] << endl;  
    cout << meuVetor[2] << endl;  
    
	cout << "\n" << "Imprimindo enderecos... \n";	
	cout << &meuVetor[0] << endl;   
    cout << &meuVetor[1] << endl;   
    cout << &meuVetor[2] << endl;
    
    system("pause");
    return 0;
}
