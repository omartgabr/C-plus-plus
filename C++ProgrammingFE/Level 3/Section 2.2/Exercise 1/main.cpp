// main.cpp
//
// Author: Omar Gabr
// This source file 

// libraries
#include <iostream>

// header files
#include "Point.hpp"

int main()
{
    Point point;
    point.SetX(2.5);
    point.SetY(8.7);
    
    std::cout << point.ToString() << std::endl;
};





