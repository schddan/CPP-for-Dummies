//It's possible to change the type of a constant variable by using suffixes:
#define intVariable 10 //The standard type is int
#define longIntVariable 10L
#define longLongIntVariable 10LL
#define unsignedIntVariable 10U
#define unsignedLongIntVariable 10UL
#define doubleVariable 10.0 //The standard type is double
#define floatVariable 10.0F
#define longDoubleVariable 10.0L
#define charVariable 'a' //Simple quotes are used for char
#define wchar_tVariable L'a'
#define stringVariable "Hello, World!" //Double quotes are used for strings

#include <iostream>
using namespace std;

int main(){
    cout << "intVariable: " << typeid(intVariable).name() << endl;
    cout << "charVariable: " << typeid(charVariable).name() << endl;
    cout << "floatVariable: " << typeid(floatVariable).name() << endl;

}


