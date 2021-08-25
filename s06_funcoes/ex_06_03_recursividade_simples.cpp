#include <iostream>

using namespace std;

// Prof: Bruno Monteiro

void regressiva(int n)
{
     if (n == 0) // Condição de parada
     {
         cout << "PAROU! \n\a";
     }
     else
     {
         //sleep
         cout << "Empilhando..." << n << endl;
         
         regressiva(n-1);   // chamada recursiva
         
         //slepp
         cout << "voltei ;) \n";
     }

     //slepp
     cout << "Desempilhando..." << n << endl;
}


int main()
{
     regressiva(4);     // chamada da função

     system("pause");
     return 0;
}


// PILHA DE FUNÇÕES:


// main()


