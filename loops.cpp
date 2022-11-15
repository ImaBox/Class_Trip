/*
    Description: practice using C++ loops, 
    correcting the input stream if it goes to the fail state, and nested loops.
    Input: User input
    Output: Fail state & nested loops
*/
#include <iostream>

int main()
{
    // variables
    int integer{};
    int counter = 0;

    // use a do while loop for count
    do
    {
        // get integer from user
        std::cout << "Enter a count between 2 and 20\n**";
        std::cin >> integer;

        // check for input failure
        if(std::cin.fail() || integer < 2 || integer > 20)
        {
            std::cout << "\nError: Invalid entry, please retry\n";
            std::cin.clear();
            std::cin.ignore(100,'\n');
        }
    } while(integer < 2 || integer > 20);

    // newline for for loop
    std::cout << '\n';

    // deals with rows
    for (int i = integer; i > 0; i--)
    {
        // deals with col
        for (int j = i; j > 0; j--)
        {
            std::cout << '*';
        }
        std:: cout << '\n';
    }

    // use a while loop
    while (counter < integer)
    {
        int counter2{0};
        while(counter2 < counter)
        {
            std::cout << '*';
            counter2++;
        }
        std::cout << '*' << '\n';
        counter++;
    }

    return 0;
}
