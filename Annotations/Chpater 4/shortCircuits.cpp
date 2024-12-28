// Short-circuit evaluation

#include <iostream>

int main(){
    int iValue = 1;
    int iValue2 = 2;

    bool b = (iValue > iValue2) && (iValue++ <= iValue2); //The second condition is not evaluated because the first one is false
    //This way, iValue is not incremented

    std::cout << "iValue: " << iValue << std::endl; //Prints 1 because iValue was not incremented

    //The same happens with the || operator
    bool b2 = (iValue < iValue2) || (iValue++ >= iValue2); //The second condition is not evaluated because the first one is true

    std::cout << "iValue: " << iValue << std::endl; //Prints 1 because iValue was not incremented again
    
}