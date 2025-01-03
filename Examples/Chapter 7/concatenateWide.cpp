#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    wchar_t wszString1[260];
    cout << "Enter string 1: ";
    wcin.getline(wszString1, 128);

    wchar_t wszString2[128];
    cout << "Enter string 2: ";
    wcin.getline(wszString2, 128);

    wcsncat(wszString1, L" - ", 260);
    wcsncat(wszString1, wszString2, 260);

    wcout << L'\n' << wszString1 << endl;

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}