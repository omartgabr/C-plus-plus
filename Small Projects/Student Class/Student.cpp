// Student.cpp
//
// Author: Omar Gabr
// This source file defines the Student class

// header file
#include "Student.h"

// library files
#include <sstream>	// std::stringstream
#include <string>	// std::string

// default constructor
Student::Student()
{

};
// destructor
Student::~Student()
{

};

// setter methods
// set age
void Student::set_age(int age)
{
	m_age = age;
}
// set first name
void Student::set_first_name(std::string first_name)
{
	m_first_name = first_name;
}
// set last name
void Student::set_last_name(std::string last_name)
{
	m_last_name = last_name;
}
// set standards
void Student::set_standard(int standard)
{
	m_standard = standard;
}

// getter methods
// get age
int Student::get_age()
{
	return m_age;
};
// get first name
std::string Student::get_first_name()
{
	return m_first_name;
}
// get last name
std::string Student::get_last_name()
{
	return m_last_name;
}
// get standard
int Student::get_standard()
{
	return m_standard;
}


// string method
std::string Student::to_string() const
{
	std::stringstream ss;
	ss << "Student:\n";
	ss << "\tFirst Name: " << m_first_name << "\n";
	ss << "\tLast Name: " << m_last_name << "\n";
	ss << "\tAge: " << m_age << "\n";
	ss << "\tStandard: " << m_standard << "\n";
	return ss.str();
};

