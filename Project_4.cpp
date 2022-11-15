/*
    Description: UNLV Parking Services has installed some sensors to help regulate 
    traffic around campus.
    Input: specify the name of the log file
    to analyze.
    Output: the program should report to the 
    terminal the number of violations that it found and recorded.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    // variables
    // file variables
    ifstream iFile;
    ofstream oFile;
    // string varibles
    string fileName{};

    // check for iFile failure 
    do 
    {
        // if iFile input fails
        if (iFile.fail())
        {
            iFile.clear();
            iFile.ignore(1000, '\n');
            cout << "Open File: Could not open " << fileName << '\n';
        }
        // get file as a string
        cin >> fileName;
        // open input file name
        iFile.open(fileName);
    } while(iFile.fail());
    
    // named variables
    string list{};
    string licesnePlate{};
    string date{};
    string time{};
    string weight{};
    string speed{};
    int flagCount{};

    // reading from file
    while(!iFile.eof())
    {
        // get licensePlate
        getline(iFile, licesnePlate, ',');

        // get date
        getline(iFile, date, ',');

        // get time
        getline(iFile, time, ',');

        // get weight
        getline(iFile, weight, ',');
        stoi(weight);

        // get speed
        getline(iFile, speed);
        stoi(speed);

            // finds vehciles below who a speeding
            if(stoi(weight) < 5000)
            {
                if(stoi(speed) > 45)
                {
                flagCount++;
                }
            }
    
        // finds vehcials belew who are speeding 
        if(stoi(weight) > 5000)
        {
            if(stoi(speed) > 30)
            {
            flagCount++;
            }
        }
    }
    iFile.close();

    //output open file and display viloations
    cout << "Open File: " << flagCount << " violations logged. " << endl;
    cout << '\n';
    cout << "[" << date << "]" << " Report.txt:" << endl;

    //open file again
    iFile.open(fileName);

    // reading from file
    while(!iFile.eof())
    {
        // get licensePlate
        getline(iFile, licesnePlate, ',');

        // get date
        getline(iFile, date, ',');

        // get time
        getline(iFile, time, ',');

        // get weight
        getline(iFile, weight, ',');
        stoi(weight);

        // get speed
        getline(iFile, speed);
        stoi(speed);


        // finds vehciles below who a speeding
        if(stoi(weight) < 5000)
        {
            if(stoi(speed) > 45)
            {
                cout << "[" << time << "]" << " " << licesnePlate << endl;
            }
        }
            
        // finds vehcials belew who are speeding 
        if(stoi(weight) > 5000)
        {
            if(stoi(speed) > 30)
            {
                cout << "[" << time << "]" << " " << licesnePlate << endl;
            }
        }
    }
    iFile.close();
    return 0;
}
