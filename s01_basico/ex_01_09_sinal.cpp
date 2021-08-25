#include <iostream>
#include <climits>

using namespace std;

// Objetivo: valores com sinal e sem sinal

int main()
{
    short sigShort = SHRT_MAX;
    unsigned short unsigShort = SHRT_MAX;

    // ADICIONANDO NO LIMITE SUPERIOR:
    cout << "sigShort: \t" << sigShort << endl;
    cout << "unsigShort: \t" << unsigShort << endl;
    cout << endl << "Adiciona 1 para cada..." << endl << endl;
    sigShort = sigShort + 1;
    unsigShort = unsigShort + 1;
    cout << "Agora sigShort tem \t" << sigShort << endl;            // -32768
    cout << "Agora unsigShort tem \t" << unsigShort << endl<<endl;  //  32768

    // REMOVENDO NO LIMITE INFERIOR:
    sigShort = 0;
    unsigShort = 0;
    cout << "sigShort tem \t" << sigShort << endl;
    cout << "unsigShort tem \t" << unsigShort << endl;
    cout << endl << "Remove 1 de cada..." << endl << endl;
    sigShort = sigShort - 1;
    unsigShort = unsigShort - 1;
    cout << "Agora sigShort tem \t" << sigShort << endl;            // -1
    cout << "Agora unsigShort tem \t" << unsigShort << endl<<endl;  // 65535

    system("pause");
    return 0;
}
