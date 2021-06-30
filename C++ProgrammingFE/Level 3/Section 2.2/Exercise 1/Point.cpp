// Point.hpp
//
// Author: Omar Gabr
// This source file implements the methods in the Point class

// libraries
#include <sstream>
#include <cmath>

// header files
#include "Point.h"


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
double Point::GetX()
{
    return m_x;
};
// get Y
double Point::GetY()
{
    return m_y;
};

// setters
// set X value
void Point::SetX(const double x_value)
{
    m_x = x_value;
};
// set Y value
void Point::SetY(const double y_value)
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


// Distance Functions
// Distance from the origin
double Point::DistanceOrigin()
{
    double delta_x = 0 - m_x;
    double delta_y = 0 - m_y;
    return std::sqrt(std::pow(delta_x, 2) + std::pow(delta_y, 2));
};
// Distance from two points
double Point::Distance(Point& point)
{
    double delta_x = m_x - point.m_x;
    double delta_y = m_y - point.m_y;
    return std::sqrt(std::pow(delta_x, 2) + std::pow(delta_y, 2));
};