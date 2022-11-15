/*
    Description:practice using basic file input, 
    and using a single dimension array.
    Input: File input
    Output: Error state, file output
*/
#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
    // fstream varialbes
    ifstream iFile; // input file
    ofstream oFile; // output file
    // array variables
    const int arraySize = 100;
    double arr[arraySize] = {0};
    int count{0};
    double min{0};
    double max{0};
    double average{0};

    // check for iFile failure
    do
    {
        //if iFile input fails
        if(iFile.fail())
        {
            iFile.clear();
            iFile.ignore(100, '\n');
            cout << "\nError: Invalid file name.\n";
        }
        
        //get file name as string
        string fileName{};
        cout << "Enter a file name\n**";
        cin >> fileName;
        
        // open input file
        iFile.open(fileName);
    }while(iFile.fail());

    // open output file
    oFile.open("out.txt");

    // check for output file failure
    if(!oFile.is_open())
    {
        cout << "\nError opneing output file!\n";
        return 0;
    }

    // read file from input file 
    while(!iFile.eof())
    {
        iFile >>arr[count];
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
        count++;
    }
    // newline for invalid input error
    cout << '\n';

    // close input file
    iFile.close();

    // print ouput;
    cout << "\nAmount of Elements Read In: " << count << '\n';
    cout << "Forwards: ";
    for(int i = 0; i < count-1; i++)
    {
        //access/output elements
        cout << fixed << setprecision(2) << arr[i] << ", ";
    }

    double elem = arr[count - 1];
    cout << elem << '\n' << "Backwards: ";

    for(int j = count-1; j > 0; j--)
    {
        cout << fixed << setprecision(2) << arr[j] << ", ";
    }
    cout << arr[0];

    // set first element as max & min
    max = arr[0];
    min = arr[0];
    average += arr[0];
    //get max and min in array elements
    for (int i = 1; i < count; i++)
    {
        average += arr[i];
       // if element is bigger than max
        if(arr[i] > max)
        {
            max = arr[i];
        }
        // if element is smaller than min
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    // print remaining prompt
    cout << '\n';
    cout << "Minimum: " << fixed << setprecision(2) << min << '\n';
    cout << "Maximum: " << fixed << setprecision(2) << max << '\n';
    cout << "Sum: " << fixed << setprecision(2) << average << '\n';
    cout << "Average: " << average/count;

    return 0;
}
