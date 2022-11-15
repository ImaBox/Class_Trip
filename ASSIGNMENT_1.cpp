/*
    Name: DARYL_GALITIVE, NSHE_ID_5005922033, 1026, ASSIGNMENT_1
    Description: Create a program that prompts the user for details
    like the class size and the total amount of money saved for the trip.
    Input: User Input
    Output: people, money, busses, 
    ticket cost, tax, food for each person.
*/
#include<iostream>
#include<iomanip>
#include<cmath>

int main()
{
    // asking user how many people & get input
    int numberOfPeople{};
    std::cout << "How many people are in the class? ";
    std::cin >> numberOfPeople;

    // asking how much money
    int money{};
    std::cout << "How much money is in the pool? $";
    std::cin >> money;

    // ticket cost(peopleNum * price)
    double totalTicketCost{numberOfPeople * 7.95};

    // number of buses
    int numberOfBuses{numberOfPeople};

    // print how many buses
    std::cout << ((numberOfBuses + 11) / 12) 
            << " Buses need to be reserved.\n";

    // print ticket costs
    std::cout << "Tickets will cost $" 
    << totalTicketCost << '\n';

    //state tax
    double Statetax {totalTicketCost * 0.0685};
    double tax{floor(Statetax * 100.0) / 100.0};
    std::cout << "Tax will be $" << tax << '\n';

    //money for food
    double amountLeft {(money-totalTicketCost-tax)/numberOfPeople};
    double foodMoney{floor(amountLeft * 100.0) / 100.0};
    std::cout << "Each person will have $" 
    << foodMoney << " for food.\n";

    return 0;
}