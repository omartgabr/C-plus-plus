// ArraysIntro.cpp
//
// Author: Omar Gabr
// This source file prints the elements in an int array
// in reverse order

// libraries
#include <iostream> // std::cout, std::endl

int main()
{
    // initialize variables for...
    // (1) size of array
    // (2) elements of array
    int size;
    int array[size];
    int elements;
    // ask user for size and elements
    std::cout << "Enter a value for the size of the array: " << std::endl;
    std::cin >> size;
    std::cout << "Enter " << size << " integers for this array: " << std::endl;
    std::cin >> array[size];


    std::cout << elements << std::endl;

}


