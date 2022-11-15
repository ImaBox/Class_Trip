/*
    * Description: practice using basic input/output
    * and making user defined functions
    * Input: User input
    * Output: Radius, Circumferences, and Area
*/

#include <iostream>
#include<iomanip>

using namespace std;

// global constant(internal linkage)
const double g_pi{3.141592};

// function foward declartion 
//Calls and saves the result of a user defined function:
double getDoubleInput(string prompt, double min, double max);
// check for input failure
bool checkFailure(double input, double min, double max);
// get input and appied circumference formula
double circumference(double degree);
// apply the area
double area(double);

int main()
{
    string prompt{};
    double x = 0, y = 0;
    // gets function gets input & place it in getRadius
    double getRadius{getDoubleInput(prompt,x,y)};

    // ouputs radius
    cout << "\nRadius: " << fixed << setprecision(2) <<  getRadius << endl;
    // output circumference
    cout << "Circumference: " << fixed << setprecision(2)
     << circumference(getRadius) << '\n';

    // output area
    cout << "Area: " << fixed << setprecision(2) << area(getRadius);

    return 0;
}

// function bodies
double getDoubleInput(string prompt, double min, double max)
{
    double input{};
    do
    {
    string output{"Enter a circle radius between 0.500000 and 20.500000\n**"};
    cout << output;

    cin >> input;

    // min & max are assigned to the value of input
    min = input;
    max = input;

    if(cin.fail()|| min < 0.500000 || max > 20.500000)
    {
        cout << "\nError: Invalid radius!\n";
        cin.clear();
        cin.ignore(100,'\n');
    }
    }while (min < 0.500000 || max > 20.500000);
    
   return input;
}

// checks for failure for first input
bool checkFailure(double input, double min, double max)
{
    do
    {
    // min & max are assigned to the value of input
    min = input;
    max = input;
    if(cin.fail()|| min < 0.500000 || max > 20.500000)
    {
        // clears and runs it again
        cout << "\nError: Invalid radius!\n";
        cin.clear();
        cin.ignore(100,'\n');

    }
    }while (min < 0.500000 || max > 20.500000);

    return input;
}
// double function
double circumference(double input)
{
    // gets circumference and use formula
    double circumference{};
    circumference = (2 * g_pi * input);
    return circumference;
}
// area function
double area(double input)
{
    // gets area and use formula
    double area{};
    area = {g_pi * input * input};
    return area;
}
