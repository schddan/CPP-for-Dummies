#include <iostream>

int countX()
{
    static int x = 0; //Static variables are initialized only once
    //static int x;
    //x = 0; //This would reset the value of x to 0 every time the function is called
    x++;
    return x;
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        std::cout << countX() << std::endl;
    }

    return 0;
}