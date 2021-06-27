// Exercise1.cpp
// For Loop
// 
// Author: Omar Gabr
//
// This source file takes two int values as input, then outputs
// the english translation of any number chosen that is between 1 or 9
// and will say 'even' or 'odd' if end value is above 9

// libraries
#include <iostream>
#include <string>

// global list of numbers in english
std::string english_numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

// Create a function that prints out the numbers in english translation
void translateNumber(const int start, const int end)
{
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0 && i > 9)
        {
            std::cout << "even";
        }
        else if (i % 2 == 1 && i > 9)
        {
            std::cout << "odd";
        }
        else if (end < 0 || start < 0 )
        {
            std::cout << "negative";
        }

        // output each english translation according to index
        std::cout << english_numbers[i - 1] << std::endl;
    }
};

int main()
{
    int start, end;
    std::cout << "Enter start value: ";
    std::cin >> start;
    std::cout << "Enter end value: ";
    std::cin >> end;

    if (start < end)
    {
        translateNumber(start, end);
    }
    else
    {
        std::cout << "Make sure start is less than end!" << std::endl;
    }
    return 0;
}



