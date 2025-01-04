#include <iostream>
using namespace std;

int main()
{
    const int* pInt; // Points to a constant integer
    int nVar;
    pInt = &nVar; // Even though pInt is a pointer to a constant integer, it can still be assigned the address of a non-constant integer
    // *pInt = 5; // Error: assignment of read-only location '* pInt'

    int nVar2;
    int * const cpInt = &nVar2; // Constant pointer to an integer
    *cpInt = 10; // Even though cpInt is a constant pointer to an integer, the integer it points to can still be modified
    // cpInt++; // Error: increment of read-only variable 'cpInt'

    const int* const ccpInt = &nVar; // Constant pointer to a constant integer
    // *ccpInt = 15; // Error: assignment of read-only location '* ccpInt'
    // ccpInt++; // Error: increment of read-only variable 'ccpInt'

    int nVar3 = 10;
    int* pVar = &nVar3;
    const int* pcVar = pVar;
    //int* pVar2 = pcVar; // Error: invalid conversion from 'const int*' to 'int*'


}