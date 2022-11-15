/*
    Description: create a calorie calculator application
    Input: User Input, age, weight, height, and activity level
    Output: Average calories needed to maintain weight
*/
#include <iostream>
#include <cmath>

int main()
{
    // output welcome prompt
    std::cout << std::endl
    <<".@  @, (&           .(%(.               *#(,              .   \n"
    <<"(@  @( &@      .@@@@@@@@@@@@@#     @@@@@@@@@@@@@#        @@@. \n"
    <<"(@  @( &@    /@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@    .@@@@@,\n"
    <<"(@@@@@@@@   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   .@@@@@,\n"
    <<"(@@@@@@@@   @@@@@@@@@@@@@@@@  .@@@@@@@@@@@@@@@@@@@@@(  .@@@@@,\n"
    <<" @@@@@@@#   @@@@@@@@@@@@@@      @@@@@@@@@@@@@@@@@@@@/  .@@@@@,\n"
    <<"    @@.     &@@@@@@@@@@@.   @@   @@@@@@@@@@@@@@@@@@@   .@@@@@,\n"
    <<"    @@.                   @@@@@   @@@@                 .@@@@@,\n"
    <<"    @@.       #@@@@@@@@@@@@@@@@@   &#  .@@@@@@@@@@     .@@@@@,\n"
    <<"    @@.         @@@@@@@@@@@@@@@@@.    %@@@@@@@@@#         ,@@,\n"
    <<"    @@.           @@@@@@@@@@@@@@@@,  @@@@@@@@@%           ,@@.\n"
    <<"    @@.             %@@@@@@@@@@@@@@@@@@@@@@@.             ,@@,\n"
    <<"    @@.                %@@@@@@@@@@@@@@@@@,                ,@@,\n"
    <<"    @@.                    &@@@@@@@@@,                    ,@@,\n"
    <<"    @@.                     &@@@@@,                       ,@@,\n"
    <<std::endl
    <<"             Welcome to the Calorie Calculator App\n";

    // get age in years
    int age{};
    std::cout << "To get started, enter your age in years:\n";
    std::cin >> age;

    // check age is enter correctly 
    if(std::cin.fail())
    {
        std::cout << "Invalid Age!\n";
        return 0;
    }
    // check if age is between 10 and 79 years
    if(age < 10  || age > 79) 
    {
        std::cout << "Age must be between 10 and 79 years!\n";
        return 0;
    }

    // get weight in lbs
    int weight{};
    std::cout << "Enter weight in lbs:\n";
    std::cin >> weight;

    //check if weight was enter correctly
    if(std::cin.fail())
    {
        std::cout << "Invalid weight!\n";
        return 0;
    }
    // check if weight is between 50 and 400 lbs
    if(weight < 50 || weight > 400)
    {
        std::cout << "weight must be between 50 lbs and 400 lbs!\n";
        return 0;
    }

    // get height in inches
    int height{};
    std::cout << "Enter height in inches:\n";
    std::cin >> height; 

    // check if height was enter correctly
    if(std::cin.fail())
    {
        std::cout << "Invalid height!\n";
        return 0;
    }
    // check if height is between 40 and 90 inches
    if(height < 40 || height > 90)
    {
        std::cout << "Heigh must be between 40\" and 90\"!\n";
        return 0;
    }

    // get gender from user
    char gender{};
    std::cout << "Enter 'M' for male or 'F' for female:\n";
    std::cin >> gender;

    // check if gender was enter correctly
    if (gender != 'M' && gender != 'F' && gender != 'm' && gender != 'f')
    {
        std::cout << "Invalid entry!\n";
        return 0;
    }

    // get num from activity level
    int activity {};
    std::cout << "Select activity level:\n"
              << "1. Inactive: little to no exercise.\n"
              << "2. Lightly active: Exercising 1 - 3 days/week\n"
              << "3. Moderately active: Exercising 3 - 5 days/week\n"
              << "4. Active: Exercising 6 - 7 days/week\n"
              << "5. Very Active: Exercising hard 6 - 7 days/week\n";
    std::cin >> activity;

    // check if activity was enter correctly
    if(activity < 1 || activity > 5)
    {
        std::cout << "Invalid activity level!\n";
        return 0;
    }

    // create variables for men & women BMR
    double men_bmr = 65+(6.2 * weight)+(12.7 * height)-(6.8 * age);
    double women_bmr =655+(4.3 * weight)+(4.3 * height)-(4.7 * age);
    
    //calculate AMR
    double amrFactor{};

    // to increase or decrease AMR by 20%
    double decrease{}; // decrease by .20
    double increase{}; // increase by .20

    // switch statement for gender calc for M & F
    switch (activity)
    {  
        // takes activity from 1 to 5 formula
        case 1: 
        amrFactor = 1.2;
        break;
        case 2:
        amrFactor = 1.375;
        break;
        case 3:
        amrFactor = 1.55;
        break;
        case 4: 
        amrFactor = 1.725;
        break;
        case 5:
        amrFactor = 1.9;
        break;
        // if anything else, fail
        default:
        std::cout << "Invalid Input\n";
        break;
    }

    // checks for gender F and ouput prompt
    if (gender == 'F' || gender == 'f')
    {
        // show output of weight and maintain
        std::cout << "To maintain your current weight," 
        << " you need to consume an average of " 
        << round(women_bmr * amrFactor) << " calories/day.\n";
        // show amr increase & decrease formula
        decrease = round(women_bmr * amrFactor) * .20; //amr .20
        increase = round(women_bmr * amrFactor) * .20; //amr .20
        //show lost of weight and gain of weight
        std::cout<<"to lose weight, you need to consume an average of "
        <<round((women_bmr*amrFactor) - decrease) << " calories/day.\n";
        std::cout<<"to gain weight, you need to consume an average of "
        <<round((women_bmr*amrFactor) + increase) << " calories/day.\n";
        // leave a disclaminer note
        std::cout << "\n*Disclaimer: " 
        <<"always consult your doctor before committing to a diet plan";
    }

    // check for gender M and output prompt
    else if(gender == 'M' || gender == 'm')
    {
        // output weight and maintain
        std::cout << "To maintain your current weight,"
        << " you need to consume an average of " 
        << round(men_bmr * amrFactor) << " calories/day.\n";
        // show amr increase & decrease formula
        decrease = round(men_bmr * amrFactor) * .20; //amr .20
        increase = round(men_bmr * amrFactor) * .20; // amr .20
        // show lost of weight and gain of weight
        std::cout<<"to lose weight, you need to consume an average of "
        << round((men_bmr*amrFactor) - decrease) << " calories/day.\n";
        std::cout<<"to gain weight, you need to consume an average of "
        << round((men_bmr*amrFactor) + increase) << " calories/day.\n";
        // leave a disclaminer note
        std::cout << "\n*Disclaimer: " 
        <<"always consult your doctor "
        << "before committing to a diet plan\n";
    }

    return 0;
}
