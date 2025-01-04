// Heap is a memory space that the programmer can control more directly and it's useful for dynamic memory allocation and returning values from functions.

#include <iostream>
using namespace std;

double *heapAllocator()
{
    double *pValue = new double; // New allocates the space needed for a double and returns a pointer to it
    *pValue = 10.0;
    return pValue;
}

int main()
{
    double *pValue = heapAllocator();
    cout << *pValue << endl;
    delete pValue;    // Delete frees the memory allocated by new. C++ doesn't have a garbage collector, so it's the programmer's responsibility to free the memory
    pValue = nullptr; // It's a good practice to set the pointer to nullptr after deleting it

    int *nArray = new int[10]; // New can also be used to allocate arrays
    for (int i = 0; i < 10; ++i)
    {
        nArray[i] = i;
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << nArray[i] << endl;
    }
    delete[] nArray; // Delete[] is used to free the memory allocated for arrays

    return 0;
}