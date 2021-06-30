// Point.hpp
//
// Author: Omar Gabr
// This source file implements the methods in the Point class

// libraries
#include <sstream>

// header files
#include "Point.hpp"


// constructor
Point::Point()
{

};
// destructor
Point::~Point()
{
    
};

// getters
// get X
float Point::GetX()
{
    return m_x;
};
// get Y
float Point::GetY()
{
    return m_y;
};

// setters
// set X value
void Point::SetX(const float x_value)
{
    m_x = x_value;
};
// set Y value
void Point::SetY(const float y_value)
{
    m_y = y_value;
};

// ToString
// print object/point description
std::string Point::ToString()
{
    std::stringstream ss;
    ss << "(" << m_x << ", " << m_y << ")";
    return ss.str();
};




