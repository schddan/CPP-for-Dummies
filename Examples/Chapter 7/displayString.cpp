#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;
void displayString(char stringArray[]);

int main()
{
    char charName[] = {'D', 'a', 'v', 'i', 'd', '\0'}; //When there is the null character, the string is called null-terminated byte string (NTBS) or C-string
    displayString(charName);
    cout << endl;

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}

void displayString(char stringArray[])
{
    for(int i = 0; stringArray[i] != '\0'; i++)
    {
        cout << stringArray[i];
    }
}