/*
    Name: DARYL GALITIVE, NSHE_ID_5005922033, 1022, LAB_3A
    Description: practice prompting the user for multiple values, 
    reading the values from the user/keyboard into variables,
    using if...else statements to compare the values entered by the user
    and write out the larger of the two. 
    Input: User input
    Output: A floating point number and string and compare which is larger.
*/
#include <iostream>

int main()
{
    // get first float number
    std::cout << "Enter a floating point number\n**";
    double num1 {};
    std::cin >> num1;

    // get second float number
    std::cout << "\nEnter another floating point number\n**";
    double num2 {};
    std::cin >> num2;

    //show prompt of both numbers
    std:: cout << "\nYou entered " << num1 << " and " 
    << num2 << '\n';

    // if else (check which is bigger)
    if (num1 > num2)
    {
        std::cout << "The largest is " << num1 << '\n';
    }
    else
    {
        std::cout << "The largest is " << num2 << '\n';
    }

    // get first string
    std::string str1 {};
    std::cout << "\nEnter a string\n**";
    std::cin >> str1;

    // get second string
    std::string str2 {};
    std::cout << "\nEnter a second string\n**";
    std::cin >> str2;

    //show prompt the two strings
    std::cout << "\nYou entered \"" << str1 << "\"" 
    << " and \"" << str2 << "\"\n";  

    // if else (check which is bigger)
    if(str1 > str2)
    {
        std::cout << "The largest is \"" << str1 << "\"\n";
    }
    else 
    {
        std::cout << "The largest is \"" << str2 << "\"\n";
    }

    return 0;
}