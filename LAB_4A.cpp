/*
    Name: DARYL GALITIVE, NSHE_ID_5005922033, 1022, LAB_4A
    Description: practice prompting the user for three integers,
    reading the values from the user/keyboard into variables, and
    using a while loop to print out a range of numbers.
    Input: User input
    Output: value that is incremented by
*/
#include <iostream>

int main()
{
    // get starting number
    int startingNumber{};
    std::cout << "Enter a starting number\n**";
    std::cin >> startingNumber;

    // checks for valid input for startingNumber
    if (std::cin.fail())
    {
        std::cout << "\nError: invalid entry.\n";
        return 0;
    }
    
    // get ending number 
    int endingNumber{};
    std::cout << "\nEnter an ending number\n**";
    std::cin >> endingNumber;

    // check for valid input for endingNumber
    if (std::cin.fail())
    {
        std::cout << "\nError: invalid entry.\n";
        return 0;
    }

    if (endingNumber <= startingNumber)
    {
        std::cout << "\nError: end must be greater than start.\n";
        return 0;
    }

    // get number to incrment by
    int increment{};
    std::cout << "\nEnter a value to increment by\n**";
    std::cin >> increment;

    // checks for valid input for increment
    if(std::cin.fail())
    {
        std::cout << "\nError: invalid entry.\n";
        return 0;
    }

    std::cout << '\n';

    while (startingNumber <= endingNumber)
    {
        std::cout << startingNumber << " ";
        startingNumber += increment;
    }

    std::cout << '\n';


    return 0;
}