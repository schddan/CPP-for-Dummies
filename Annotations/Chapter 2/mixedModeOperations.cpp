//Mixed mode operations (operations between different types) give a result of the type of the operand with the highest rank.

#include <iostream>
using namespace std;

int main() {
    int iVariable = 1;
    double dVariable = 2.0;
    cout << "iVariable + dVariable: " << typeid(iVariable + dVariable).name() << endl; //The result of int + double is double
    //This is not recommended! It's better to convert the variables to the same type before performing the operation.
}