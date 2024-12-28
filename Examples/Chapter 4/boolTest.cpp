#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    cout.setf(cout.boolalpha); //Makes the bool type print true or false instead of 1 or 0, which comes from older standards.
    
    int nArg1;
    cout << "Input value 1: ";
    cin >> nArg1;
    int nArg2;
    cout << "Input value 2: ";
    cin >> nArg2;

    bool b;
    b = nArg1 == nArg2;

    cout << "The statement, " << nArg1 
            << " equals " << nArg2 
            << " is " << b << endl;

    cout <<"Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;

}
