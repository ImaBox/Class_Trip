/*
    Name: DARYL GALITIVE, NSHE_ID_5005922033, 1022, LAB_3B
    Description: practice prompting the user for a character value, 
    reading the value from the user/keyboard into a char variable, 
    and using a switch statement to print out a value range based on the character entered.
    Input: User input
    Output: Letter grade & input fail
*/
#include<iostream>
#include<iomanip>
int main()
{
    // get letter grade as char
    char letterGrade{};
    std::cout << "Enter a letter grade\n**";
    std::cin >> letterGrade;

    // use switch statement
    switch (letterGrade)
    {
        // letter grade A's
        case 'A':
        case 'a':
        std::cout << "\nGrade range is 90 - 100";
        break;

        // letter grade B's
        case 'B':
        case 'b':
        std::cout << "\nGrade range is 80 - 89.99";
        break;

        // letter grade C's
        case 'C':
        case 'c':
        std::cout << "\nGrade range is 70 - 79.99";
        break;
        
        // letter grade D's
        case 'D':
        case 'd':
        std::cout << "\nGrade range is 60 - 69.99";
        break;

        // letter grade F's
        case 'F':
        case 'f':
        std::cout << "\nGrade range is 0 - 59.99";
        break;

        // if anything else, it fails 
        default:
        std::cout << "\nError: '" << letterGrade << "' is not a valid letter grade";
        break;

    }

    return 0;
}