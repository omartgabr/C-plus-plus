// PointerUpdate.cpp
//
//
// Author: Omar Gabr
// This file creates a function that takes in two pointers as arguments
// and returns two expressions

//  libraries
#include <stdio.h> // std::cout, std::endl
#include <cmath>    // std::abs()

// function with two pointer inputs
void update(int* a, int* b)
{
    // initialize a temp variable for first input pointer
    int temp = *a;
    // calculate a expression
    (*a) = (*a) + (*b);
    // calculate b expression
    (*b) = std::abs((*b) - (temp));
};

int main()
{
    int value1 = 4;
    int value2 = 5;

    int* pointer1 = &value1;
    int* pointer2 = &value2;
    
    update(pointer1, pointer2);

    printf("%d\n%d", value1, value2);
}