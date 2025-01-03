#include <cstdio>
#include <iostream> 
#include <cstdlib>
using namespace std;

void concatString(char szTarget[], const char szSource[]);
int main()
{
    char szString1[256];
    cout << "Enter string 1: ";
    cin.getline(szString1, 128);//Automatically apends \0 at the end of the string, so this will only read 127 characters
    char szString2[128];
    cout << "Enter string 2: ";
    cin.getline(szString2, 128);

    concatString(szString1, " - ");
    concatString(szString1, szString2);

    cout << "\n" << szString1 << endl;

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;

}

void concatString(char szTarget[], const char szSource[])
{
    int targetIndex = 0;
    while (szTarget[targetIndex])
    {
        targetIndex++;
    }

    int sourceIndex = 0;
    while(szSource[sourceIndex])
    {
        szTarget[targetIndex] = szSource[sourceIndex];
        targetIndex++;
        sourceIndex++;
    }

    szTarget[targetIndex] = '\0';
    
}