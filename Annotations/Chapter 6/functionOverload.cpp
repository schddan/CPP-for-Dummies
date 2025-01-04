//Function overloading happen when they have the same name but different arguments

#include <iostream>
using namespace std;


void add(int a, int b) //The "signature of the function" is the name of the function and the arguments - add (int, int)
{
  cout << "sum = " << (a + b);
}

void add(double a, double b) //In this case, add (double, double), the return value is not part of the signature
{
    cout << endl << "sum = " << (a + b);
}

int main()
{
    add(10, 2);
    add(5.3, 6.2);

    return 0;
}

//Const can also be used to overload functions