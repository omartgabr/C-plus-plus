// Student.h
//
// Author: Omar Gabr
// This header file creates a Student class with a series of data members and functions

// header guards
#ifndef STUDENT_H
#define STUDENT_H

// library files
#include <string>

// Student class
class Student
{
	// data members for class
	private:
		int m_age, m_standard;
		std::string m_first_name, m_last_name;
	// class methods + constructor/destructor
	public:
		// constructors + destructor
		Student();
		~Student();

		// setter methods
		void set_age(int age);
		void set_first_name(std::string first_name);
		void set_last_name(std::string last_name);
		void set_standard(int standard);

		// getter methods
		int get_age();
		std::string get_first_name();
		std::string get_last_name();
		int get_standard();

		// string description
		std::string to_string() const;
};



#endif // !STUDENT_H
