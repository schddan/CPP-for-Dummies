#include <iostream>
using namespace std;

void fn(const int& nVar) //Const tells the compiler that the value won't be modified
{
    cout << "fn(const int&): " << nVar << endl;
}

int main()
{
    int n = 10;
    fn(10); //So it allows to pass a constant value
    fn(n); //And a variable
    
}