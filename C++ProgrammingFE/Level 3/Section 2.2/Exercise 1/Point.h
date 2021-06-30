// Point.hpp
//
// Author: Omar Gabr
// This header file declares the Point class


// header guard
#ifndef POINT_H
#define POINT_H

// libraries
#include <string>

// external files

class Point
{
private:
    // initialize data members
    double m_x, m_y;
public:
    // constructors + destructors
    Point();
    ~Point();

    // getters
    double GetX();
    double GetY();

    // setters
    void SetX(const double x_value);
    void SetY(const double y_value);

    // string description
    std::string ToString();

    // distance functions
    double DistanceOrigin();
    double Distance(Point& point);

};

#endif