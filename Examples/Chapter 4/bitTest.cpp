//Inicia com duas variáveis e exibe a saída aplicando os operadores ~, &, |, ^

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    cout.unsetf(cout.dec);
    cout.setf(cout.hex);

    int nArg1 = 0x78ABCDEF;
    int nArg2 = 0x12345678; 

    //Bitwise NOT
    cout << ' nArg1 = 0x' << nArg1 << endl;
    cout << '~nArg1 = 0x' << ~nArg1 << "\n" << endl;
    cout << ' nArg2 = 0x' << nArg2 << endl;
    cout << '~nArg2 = 0x' << ~nArg2 << "\n" << endl;

    //Bitwise AND, OR, XOR
    cout << "  0x" << nArg1 << "\n"
         << "& 0x" << nArg2 << "\n"
         << "  ---------" << "\n"
         << "  0x" << (nArg1 & nArg2) << "\n" << endl
         << endl;

    cout << "  0x" << nArg1 << "\n"
         << "| 0x" << nArg2 << "\n"
         << "  ---------" << "\n"
         << "  0x" << (nArg1 | nArg2) << "\n" << endl
         << endl;
         
    cout << "  0x" << nArg1 << "\n"
         << "^ 0x" << nArg2 << "\n"
         << "  ---------" << "\n"
         << "  0x" << (nArg1 ^ nArg2) << "\n" << endl
         << endl;

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}