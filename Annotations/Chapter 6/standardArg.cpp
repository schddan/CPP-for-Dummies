#include <iostream>

int sum3(int a, int b, int c = 0)
{
    return a + b + c;
}

int main()
{
    std::cout << "sum3(1, 2) = " << sum3(1, 2) << std::endl; //This will still work because the default value of C is 0 
    std::cout << "sum3(1, 2, 3) = " << sum3(1, 2, 3) << std::endl;

    return 0;
}