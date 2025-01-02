#include <iostream>

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Array values before changing the values using reference: \n";;
    for (int element : array)
    {
        std::cout << element << std::endl;
    }

    // Reference to the elements of the array
    for (int &element : array)
    {
        element *= 2;
    }

    for (int element : array) //This won't do anything because the elements are passed by value
    {
        element *= 2;
    }

    std::cout << "Array values after changing the values using reference: \n";;
    // Display the array
    for (int element : array)
    {
        std::cout << element << std::endl;
    }

    return 0;
}