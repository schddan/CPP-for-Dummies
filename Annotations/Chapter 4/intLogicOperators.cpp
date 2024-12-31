//Some time ago, logic operators returned int values. 0 was used for false, and any other value (usually 1) was used for true
//Nowadays, there is a bool type that can be used to store true or false values. It's a good practice to use it instead of int.
//But C++ still supports int values for true or false and logic operators still return them, which makes the following code valid:
#include <iostream>
using namespace std;

int main() {
    int n;
    n = (1 == 1) * 5;
    cout << "n: " << n << endl; //Prints 5 because 1 == 1 is true, which is 1, and 1 * 5 is 5
    n = (1 == 0) * 5;
    cout << "n: " << n << endl; //Prints 0 because 1 == 0 is false, which is 0, and 0 * 5 is 0
}