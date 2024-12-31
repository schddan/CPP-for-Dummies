//A way of writing a while loop in a more compact form

#include <iostream>

int main()
{
    int i = 0;
    while (i++ < 10) //Increments after evaluating the condition
    {
        std::cout << i << std::endl;
    }

    i = 0;
    while (++i < 10) //Increments before evaluating the condition
    {
        std::cout << i << std::endl;
    }



    return 0;
}