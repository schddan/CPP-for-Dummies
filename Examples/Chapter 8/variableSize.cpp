#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    bool b;  char c; int n; long l; long long ll; float f; double d; long double ld;

    cout << "Size of bool: " << sizeof(b) << endl;
    cout << "Size of char: " << sizeof(c) << endl;
    cout << "Size of int: " << sizeof(n) << endl;
    cout << "Size of long: " << sizeof(l) << endl;
    cout << "Size of long long: " << sizeof(ll) << endl;
    cout << "Size of float: " << sizeof(f) << endl;
    cout << "Size of double: " << sizeof(d) << endl;
    cout << "Size of long double: " << sizeof(ld) << endl;

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}