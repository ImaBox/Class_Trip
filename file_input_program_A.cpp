/*
    Name: DARYL GALITIVE, NSHE_ID_5005922033, 1022, LAB_5B
    Description: practice using C++ loops, basic input/output,
    file input, 
    and correcting the input stream if it goes to the fail state.
    Input: File input
    Output: Fail state & nested loops
*/
#include<iostream>
#include<fstream>

int main()
{
    //variable track running total
    std::ifstream iFile; // input file
    std::ofstream oFile; // output file

    do
    {
        //check for ifile failure
        if(iFile.fail())
        {
            //clear & ignore
            iFile.clear();
            iFile.ignore(100, '\n');
            std::cout << "Error: Invalid file name\n";
        }

        //get file name as string
        std::string fileName{}; 
        std::cout << "Enter file name\n**\n";
        std::cin >> fileName;
        //Open input file
        iFile.open(fileName);

    } while(iFile.fail());

    //Open output file
    oFile.open("out.txt");

    //check for file failure
    if(!oFile.is_open())
    {
        std::cout << "Error opening output file!\n";
        return 0;
    }

    // read file from input file
    int num1 = 0, num2 = 0, sum = 0, total = 0;
    while(!iFile.eof())
    {
        //get iFile input
        iFile >> num1 >> num2;


        //check for error in line
        if(!iFile)
        {
            iFile.clear();
            iFile.ignore(100, '\n');
            std::cout << "Error in line\n";
            continue;
        }
    
        // oFile is cout and display output
        sum = num1+num2;
        std::cout << num1 << " + " << num2 << " = " << sum << '\n';

    total = sum + total;

    }
    std::cout << "\nRunning total = "<< total << '\n';

    // Close input and ouput files
    iFile.close();
    oFile.close();

    return 0;
}
