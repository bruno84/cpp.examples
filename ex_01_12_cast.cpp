#include <iostream>

using namespace std;

// Objetivo: conversões (cast)

int main()
{
    long long a, b, c, d, e;

    // CAST AUTOMATICO:
    a = 200903280945;         
    b = 100000000   * 2009;     // int * int = int
    c = 100000000LL * 2009;     // ll * int = ll
    d = 100000000   * 2009LL;   // int * ll = ll
    e = 10000000000 * 2009;     // ll  * int = ll

    cout << "a: " << a << endl;         // 200903280945
    cout << "b: " << b << endl;         // -963462912
    cout << "c: " << c << endl;         // 200900000000
    cout << "d: " << d << endl;         // 200900000000
    cout << "e: " << e << endl<<endl;   // 20090000000000
    
    // CAST MANUAL:
    float float1 = 5.4;
    int int1 = (int) 3.8 + (int) float1;
    int int2 = (int) 'A';
    char char1 = (char) 65;
    long long bignum = (long long) 100000000 * 2009;

    cout << "float1 : " << float1 << endl; 
    cout << "int1 : " << int1 << endl; 
    cout << "int2 : " << int2 << endl; 
    cout << "char1 : " << char1 << endl; 
    cout << "bignum : " << bignum << endl<<endl;
    
    system("pause");
    return 0;
}
