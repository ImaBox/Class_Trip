/*
    Name: DARYL GALITIVE, NSHE_ID_5005922033, 1022, LAB_4B
    Description: for, while and do...while. You will also practice correcting the
    input stream if it goes to the fail state. 
    Input: User input
    Output: Fail check & Sums of odds & evens
*/
#include <iostream>

int main()
{
    // variables
    int count {}, even {}, odd {}, i {0}, i2 {0};

    do 
    {
        // ask user for count
        std::cout << "Enter a count between 2 and 10000\n**";
        std::cin >> count;

        // checks for input failure & checks count 
        if(std::cin.fail() || count < 2 || count > 10000)
        {
            std::cout << "\nError: Invalid entry, please retry\n";
            // clear/ignore input failure 
            std::cin.clear();
            std::cin.ignore(100,'\n');
        }

    } while(count < 2 || count > 10000);

    // use for loop to find all evens
    for ( i = 0; i <= count; i++)
    {
        if(i % 2 == 0)
        {
            even = even + i;
        }
    }
    std::cout << "\nSum of even numbers: " << even;

    // check for odds using a while loop
    while (i2 <= count)
    {
        if (i2 % 2 != 0)
        {
            odd = odd + i2;
        }
        i2++;
    }
    std:: cout << "\nSum of odd numbers:  " << odd;

    return 0;
}