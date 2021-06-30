// main.cpp
//
// Author: Omar Gabr
// This source file 

// libraries
#include <iostream>
#include <iomanip>

// header files
#include "Point.h"

int main()
{
    // create one instance of point and instantiate it
    Point point;
    point.SetX(2);
    point.SetY(8);

    // create another point with different coordinates
    Point another_point;
    another_point.SetX(2.67);
    another_point.SetY(0.56);

    // print description of point object
    std::cout << point.ToString() << std::endl;
    // find distance between point and origin
    std::cout << "The distance is approximately " << std::setprecision(3) << point.DistanceOrigin() << " meters from the origin." << std::endl;
    // find distance between two point objects
    std::cout << "The distance between the two points are " << std::setprecision(3) << point.Distance(another_point) << " meters." << std::endl;

};
