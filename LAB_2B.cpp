/*
    Name: DARYL GALITIVE, NSHE_ID_5005922033, 1022, LAB_2B
    Description: Practice asking the user for a value, 
    reading the value into a variable as a double from the user or keyboard
    calculating a value with arithmetic expressions and formatting the result with manipulators.
    Input: User input
    Output: A graph with radius, circumference, and area
*/
#include<iostream>
#include<cmath>
#include<iomanip>

// global constant(internal linkage)
const double g_pi{3.141592};

int main()
{
    // get user input in double 
    double radius {};
    std::cout << "Enter the radius of a circle\n**";
    std::cin >> radius;

    std::cout << '\n'; // line for space

    // the formula for circumference 
    double circumference{2 * g_pi * radius};

    // the formula for area of circle 
    double area {g_pi * pow(radius, 2)};

    // string for separator & headers
    std::string separator {"+--------+---------------+---------+\n"};
    std::string h1{"radius"}, h2{"circumference"},h3{"area"};
    std::string headers {"| " + h1 + " | " + h2 + " | " + h3 + "    |\n"};


    std::cout << std::fixed << std::setprecision(2);

    std::cout << separator // top seprator
            << headers // math names
            << separator // middle seprator
            << std::left // justify content to left
            << "| " << std::setw(6) << radius
            << " | " << std::setw(13) << circumference
            << " | " << std::setw(7) << area << " |\n"
            << separator;


    return 0;
}