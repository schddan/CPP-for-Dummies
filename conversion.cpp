#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    int celsius;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    int factor;
    factor = 212 - 32;

    int farhenheit;
    farhenheit = factor * celsius / 100 + 32;

    cout << "Farhenheit value is: ";
    cout << farhenheit << endl;

    cout << "Press enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}