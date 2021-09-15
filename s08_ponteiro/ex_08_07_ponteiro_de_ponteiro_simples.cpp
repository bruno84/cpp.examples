#include <iostream>

using namespace std;

// Prof. Bruno Monteiro

int main()
{
    int   x  = 10;
	int*  p  = NULL;
    int** pp = NULL;

    p = &x;
    pp = &p;

    cout << "  &x: \t " << &x << endl;
    cout << "  &p: \t " << &p << endl;

    cout << "   p: \t " << p << endl;
    cout << "  pp: \t " << pp << endl;

    cout << "  *p: \t " <<   *p << endl;	// 10
    cout << " *pp: \t " <<  *pp << endl;    // 0x6ffe04
    cout << "**pp: \t " << **pp << endl;	// 10

	system("pause");
	return 0;
}
