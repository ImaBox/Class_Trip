/*
    Name: DARYL GALITIVE, NSHE_ID_5005922033, 1022, LAB_6B
    Description: practice using basic file I/O, 1D arrays, 
    and parallel arrays.
    Input: File input
    Output: Error state, file output
*/
#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
    // variables
    ifstream iFile;
    // string variables
    string fileName{};
    string getName{};
    // array variables
    const int arraySize{100};
    string names[arraySize];
    double scores[arraySize] = {0};
    int cnt{0};
    double min{0};
    double max{0};
    double average{0};
    double sum{0};

    // check for iFile failure
    do
    {
        // if iFile input fails
        if(iFile.fail())
        {
            iFile.clear();
            iFile.ignore(1000, '\n');
            cout << "Error: Invalid file name.\n";
        }
        // get file name as string
        cout << "Enter a file name\n**";
        cin >> fileName; cout << '\n';
        // open input file
        iFile.open(fileName);
    }while(iFile.fail());

    // ask user to input name & store it name varialbe
    cout << "Enter a name to search\n**";
    cin >> getName; cout << '\n';

    // reading from file
    while(!iFile.eof())
    {
        iFile >> names[cnt] >> scores[cnt];
        if(iFile.eof())
        {
            break;
        }
        if(iFile.fail())
        {
            iFile.clear();
            iFile.ignore(1000, '\n');
            cout << "\nError: Invalid input in file.";
            continue;
        }

        cnt++;
    }

    // close iFile
    iFile.close();

    // output & print from file
    // names foward
    cout << "Names Forward: ";
    for (int i = 0; i < cnt-1; i++)
    {
        cout << names[i] << ", ";
    }
    cout << names[cnt - 1]; cout << '\n';

    // scores foward
    cout << "Scores Forward: ";
    for(int i = 0; i < cnt-1; i++)
    {
        cout << scores[i] << ", ";
    }
    
    double elem = scores[cnt - 1];
    cout << elem; cout << '\n';

    // names reverse 
    cout << "Names Reverse: ";
    for (int j = cnt-1; j > 0; j--)
    {
        cout << names[j] << ", ";
    }
    cout << names[0]; cout << '\n';

    // scores reverse
    cout << "Scores Reverse: ";
    for (int j = cnt-1; j > 0; j--)
    {
        cout << scores[j] << ", ";
    }
    cout << scores[0]; cout << '\n';

    // getName list
    int appearance{};
    for(int i = 0; i < cnt; i++)
    {
        // if name is found in array
        if (names[i] == getName)
        {
            appearance++;
        }
    }

    // if no name is found in the array
    if(appearance == 0)
    {
        cout << "Error: " << getName << " is not a student in the list";
        return 0;
    }
    cout << appearance << " results for " << getName << '\n';


    // set first element as max & min
    max = scores[0];
    min = scores[0];
    average += scores[0];

    // maximum & minium
    for(int i = 0; i < cnt; i++)
    {

        average += scores[i];

        if(names[i] == getName)
        {
            
            // if element is bigger than max
            if(scores[i] > max)
            {
            max = scores[i];
            }
            // if element is smaller than min
            if(scores[i] < min)
            {
            min = scores[i];
            }
            sum+=scores[i];
        }
    }
    
    // print minimum
    cout << "Minimum: " << fixed << setprecision(2) << min << '\n';
    cout << "Maximum: " << fixed << setprecision(2) << max << '\n';
    cout << "Sum:     " << fixed << setprecision(2) << sum << '\n';
    cout << "Average: " << fixed << setprecision(2) << sum/appearance << '\n';

    return 0;
}