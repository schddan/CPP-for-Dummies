#include <iostream>

int main()
{
    //Arrays contain trash values if not initialized
    int array[10];
    std::cout << "Array values before initialization: " << std::endl;
    for(int i = 0; i < 10; i++)
    {
        std::cout << array[i] << std::endl;
    }

    //Arrays can be initialized with a list of values
    int array2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Array values after initialization: " << std::endl;
    for(int i = 0; i < 10; i++)
    {
        std::cout << array2[i] << std::endl;
    }

    //An empty list of values initializes all elements to 0
    int array3[10] = {};
    std::cout << "Array values after initialization with an empty list: " << std::endl;
    for(int i = 0; i < 10; i++)
    {
        std::cout << array3[i] << std::endl;
    }

    //And it's possible to determine the size of the array by the number of elements in the list
    int array4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Array values after initialization with an empty list: " << std::endl;
    for(int i = 0; i < 10; i++)
    {
        std::cout << array4[i] << std::endl;
    }

}