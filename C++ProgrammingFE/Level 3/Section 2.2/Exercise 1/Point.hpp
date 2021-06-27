// Point.hpp
//
// Author: Omar Gabr
// This header file declares the Point class

// header guard
#ifndef POINT_HPP
#define POINT_HPP

// libraries
#include <string>

// external files

class Point
{
private:
    // initialize data members
    int m_x, m_y;
public:
    // constructors + destructors
    Point();
    ~Point();

    // getters
    int GetX();
    int GetY();

    // setters
    void SetX(const int x_value);
    void SetY(const int y_value);

    // string description
    std::string ToString();

};

#endif
