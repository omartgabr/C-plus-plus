// main.cpp
// 
// Author: Omar Gabr
// This file tests the Student class by asking user for input and
// outputting a description of its data members

// library files
#include <iostream> // std::cout, std::endl
#include <string>   // std::string

// header files
#include "Student.h"

int main()
{
    // declare input variables
    int age, standard;
    std::string first_name, last_name;
  
    // ask user for input values
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your first name: ";
    std::cin >> first_name;
    std::cout << "Enter your last name: ";
    std::cin >> last_name;
    std::cout << "Enter your standard: ";
    std::cin >> standard;

    // create student object and set input values using class methods
    Student student;
    student.set_age(age);
    student.set_first_name(first_name);
    student.set_last_name(last_name);
    student.set_standard(standard);

    // print student
    std::cout << student.to_string() << std::endl;
}
