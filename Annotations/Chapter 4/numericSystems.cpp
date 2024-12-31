//Prefixes are used to specify the base of a number.

#include <iostream>

int main()
{
    int decimal = 10;
    std::cout << "Decimal: " << decimal << std::endl;

    int octal = 010; //0 for octal
    std::cout << "Octal: " << octal << std::endl;

    int hexadecimal = 0x10; //0x for hexadecimal
    std::cout << "Hexadecimal: " << hexadecimal << std::endl;

    int binary = 0b10; //0b for binary
    std::cout << "Binary: " << binary << std::endl;

    return 0;
}