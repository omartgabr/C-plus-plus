// String1.cpp
//
// Author: Omar Gabr
// This source file will perform a series of operations
// on string data types

// libraries
#include <iostream> // std::cout, std::cin
#include <string>   // std::string

int main()
{   
    // delcare two string type variables
    std::string a, b;
    // ask user for string values
    std::cout << "Enter a string: ";
    std::cin >> a;
    std::cout << "Enter another string: ";
    std::cin >> b;

    // OPERATION #1
    // prints the size of each string on the same line separated by a space
    std::cout << "\n" << a.size() << " " << b.size() << std::endl;

    // OPERATION #2
    // print the concatenation of the two input strings
    std::cout << a + b << std::endl;

    // OPERATION #3
    // prints the two strings with the first characters of both strings switched
    int temp;
    temp = b[0];
    b[0] = a[0];
    a[0] = temp;
    std::cout << a << " " << b << std::endl;
};
