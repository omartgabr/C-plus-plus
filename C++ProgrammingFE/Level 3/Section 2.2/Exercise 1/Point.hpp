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
    float m_x, m_y;
public:
    // constructors + destructors
    Point();
    ~Point();

    // getters
    float GetX();
    float GetY();

    // setters
    void SetX(const float x_value);
    void SetY(const float y_value);

    // string description
    std::string ToString();

};

#endif