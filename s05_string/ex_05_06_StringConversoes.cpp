#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

// Prof: Bruno Monteiro
// OBJETIVOS: Fazer conversões entre strings e números
// VER: https://www.cplusplus.com/reference/cstring/
// VER: https://www.cplusplus.com/reference/cstdlib/

int main()
{
    // Converte: float para string
    float numeroFloat = 4.12345678;
    char numeroFloatStr[30];
    sprintf(numeroFloatStr, "%.5f", numeroFloat );
    cout << "numeroFloatStr: " << numeroFloatStr << endl;

    // Converte: string para int
    char numeroIntStr[30] = "6000";
    int numeroInt;
    numeroInt = atoi(numeroIntStr);
    cout << "numeroInt: " << numeroInt << endl;

    // Converte: string para float
    strcpy(numeroFloatStr, "9.12345678");
    numeroFloat = atof(numeroFloatStr);
    cout << "numeroFloat: " << numeroFloat << endl;

    system("pause");
    return 0;
}
