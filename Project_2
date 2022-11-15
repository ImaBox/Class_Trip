/*
    Description: ZOO, calculate the food for the animal needs
    Input: User Input
    Output: A ticket for food for rabbit & growth,
    same with zebra 
*/
#include <iostream>
#include <iomanip>
#include <cmath>

// CONSTANTS VARIABLES
    // the amount of food a baby zebra needs each day
    const double BABYZEBRA{5};
    // the monthly growth rate for a baby zebra
    const double GROWTHRATEZEBRA{0.05};
    // the amount of food a baby rabbit needs each day
    const double BABYRABBIT{0.5};
    // the monthly growth rate for a baby rabbit
    const double GROWTHRATERABBIT{0.1};

int main()
{   
    std::cout << "\n*************************************"
    << "****************************************" <<std::endl;
    std::cout << "             Welcome to the UNLV Zoo "
     << "- Food Supply Department!" <<std::endl;
    std::cout << "***************************************"
     << "**************************************\n" <<std::endl;

    // variables 
    int numOfMonth{};
    double updatedZebra{};
    double updatedRabbit{}; 
    int numOfZebra{};
    int numOfRabbit{};
    double totalFoodZebra{};
    double totalFoodRabbit{}; 
    double totalFood{};

    // the const food prompt for baby zebra & rabbit
    std::cout << "The food/day for a baby zebra is constant"
    << " (lbs): " << BABYZEBRA << "\n";
    std::cout << "The food/day for a baby rabbit is constant"
    << " (lbs): " << BABYRABBIT << "\n";

    // after growing in the number of months, input num_of_months
    std::cout << "After growing the number of months:\n**";
    std::cin >> numOfMonth;

    // to calculate updated zebra (might needed to reviewd)
    updatedZebra = BABYZEBRA * pow((1 + GROWTHRATEZEBRA), numOfMonth);

    // to calculate updated rabbit (might need to be reviewd)
    updatedRabbit = BABYRABBIT * pow((1 + GROWTHRATERABBIT), numOfMonth);

    //the updated zebra 
    std::cout << "The food/day for a bigger zebra is: " 
    << std::fixed <<std::setprecision(2) << updatedZebra << "\n"; 

    // the updated rabbit
    std::cout << "The food/day for a bigger rabbit is: " 
    << std::fixed << std::setprecision(2) << updatedRabbit << "\n";

    // how much more zebra eats more than rabbits
    std::cout << "Zebra eats " 
    << static_cast<int>(updatedZebra/updatedRabbit)
    << " times as much as rabbits\n";

    // get number of zebras as int
    std::cout << "\nThe number of Zebra:\n**";
    std::cin >> numOfZebra;

    // get number of rabbits as int
    std::cout << "The number of Rabbit:\n**";
    std::cin >> numOfRabbit;

    // formula for total food & zebra food & rabbit food
    totalFoodZebra = updatedZebra * numOfZebra;
    totalFoodRabbit = updatedRabbit * numOfRabbit;
    totalFood = totalFoodZebra + totalFoodRabbit;

    // show prompt total food in 12 months
    std::cout << "For Zebras, total food/day in " 
    << numOfMonth << " months is: " << totalFoodZebra << "\n";

    std::cout << "For Rabbits, total food/day in " 
    << numOfMonth << " months is: " << totalFoodRabbit << "\n";

    std::cout << "Overall, total food/day in " << numOfMonth 
    << " months is: " << totalFood << "\n";

    // print ticket format
    std::cout << std::setfill(' ') << std::fixed << std::setprecision(2)
    << "\n/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/"
    <<"\\/\\/\\/\\/\\/\\/\\/\\/\\/\\\n"
    << "|" << std::setw(40) << "|\n"
    << "|              CS Zoo              |\n"
    << "|         5715 E Jackson, Fl        |\n"
    << "|          City,State 75842         |\n"
    << "|            (602) 895-3011            |\n"
    << "|" << std::setw(40) << "|\n"
    << "|" << std::setw(40) << "|\n"
    << "| Baby Zebra(lbs/d):" << std::setw(18) 
    << BABYZEBRA << " |\n"
    << "| Growth Rate(month):" << std::setw(16) 
    << GROWTHRATEZEBRA * 100 << "% |\n"
    << "| Baby Rabbit(lbs/d):" << std::setw(17) 
    << BABYRABBIT << " |\n"
    << "| Growth Rate(month):" << std::setw(16) 
    << GROWTHRATERABBIT * 100 << "% |\n"
    << "|" << std::setw(40) << "|\n"
    << "| Growth Month:" << std::setw(23) 
    << numOfMonth << " |\n"
    << "| Grown Zebra(lbs/d):" << std::setw(17) 
    << updatedZebra << " |\n"
    << "| Grown Rabbit(lbs/d):" << std::setw(16) 
    << updatedRabbit << " |\n"
    << "|" << std::setw(40) << "|\n"
    << "| Zebra amount:" << std::setw(23) << numOfZebra << " |\n"
    << "| Rabbit amount:" << std::setw(22) << numOfRabbit << " |\n"
    << "| Total Food(lbs/d):" << std::setfill('*') 
    << std::setw(18) << ceil(totalFood) << " |\n"
    << "|" << std::setfill(' ') << std::setw(40) << "|\n"
    << "\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/"
    <<"\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/"<< "\n";

    return 0;
}
