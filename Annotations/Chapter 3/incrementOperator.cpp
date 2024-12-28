#include <iostream>

int main(){
    int iValue = 1;
    int iValue2, iValue3;

    iValue2 = iValue++; //iValue2 = iValue, then iValue = iValue + 1;
    iValue3 = ++iValue; //iValue = iValue + 1, then iValue3 = iValue;

    std::cout << "iValue: " << iValue << std::endl; //Prints 3 because iValue was incremented twice
    std::cout << "iValue2 (after iValue++): " << iValue2 << std::endl; //Prints 1 because iValue was incremented after the assignment
    std::cout << "iValue3 (after ++iValue): " << iValue3 << std::endl; //Prints 3 because iValue was incremented before the assignment

    
}