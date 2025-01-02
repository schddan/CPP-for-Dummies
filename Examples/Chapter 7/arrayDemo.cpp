#include <cstdio>
#include <iostream> 
#include <cstdlib>
using namespace std;

int readArray(int integerArray[], int maxNumElements);
int sumArray(int integerArray[], int numElements);
void displayArray(int integerArray[], int numElements);

int main()
{
    cout << "This Program sumsvalues entrered by the user.\n";
    cout << "Terminate the loop by inserting a negative number.\n";
    cout << endl;

    int inputValues[128];

    int numberOfValues = readArray(inputValues, 128);
    displayArray(inputValues, numberOfValues);
    cout << "The sum is " << sumArray(inputValues, numberOfValues) << endl;

    cout << "Press Enter to continue...";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

int readArray(int integerArray[], int maxNumElements)
{
    int numberOfValues;
    for(numberOfValues = 0; numberOfValues < maxNumElements; numberOfValues++)
    {
        int integerValue;
        cout << "Enter the next number: ";
        cin >> integerValue;

        if(integerValue < 0)
        {
            break;
        }
        integerArray[numberOfValues] = integerValue;
    }
    return numberOfValues;
}

void displayArray(int integerArray[], int numElements)
{
    cout << "The value of the array is: " << endl;
    for (int i = 0; i < numElements; i++)
    {
        cout << i << ": " << integerArray[i] << endl;
    }
}

int sumArray(int integerArray[], int numElements)
{
    int accumulator = 0;
    for (int i = 0; i < numElements; i++)
    {
        accumulator += integerArray[i];
    }
    return accumulator;
}