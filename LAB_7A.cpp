/*
    Name: DARYL_GALITIVE, NSHE_ID_5005922033, 1026, LAB_7A
    * Description: input/output, file input, two dimensional arrays, functions, and passing arrays
    * Input: file input
    * Output: low temp & high temp & average of both
*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    // variables
    ifstream iFile;
    // string variables
    string fileName{};

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


    const int ROW = 10, COL = 2;

    int arr[ROW][COL];

    // READ FILE
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            iFile >> arr[i][j];
        }
    }
    iFile.close();

    cout << "ROW SUMS:" << endl;
    double running_total = 0;
     for (int i = 0; i < ROW; i++)
    {
        running_total = 0;
        for (int j = 0; j < COL; j++)
        {
            cout << arr[i][j];
            running_total += arr[i][j];
            if (j < COL-1) // removes last element
            {
                cout << " + ";
            }
            else 
            {
                cout << " = ";
            }
        
        }
        cout << left << fixed << setprecision(1) << running_total;
        cout << endl; //newlines for rows
    }

        cout << endl;
    cout << "COLUMN SUMS:" << endl;
     for (int i = 0; i < COL; i++)
    {
        running_total = 0;
        for (int j = 0; j < ROW; j++)
        {
            cout << arr[j][i];
            running_total += arr[j][i];
            if (j < COL-1) // removes last element
            {
                cout << " + ";
            }
            else 
            {
                cout << " = ";
            }
        }
        cout << left << fixed << setprecision(1) << running_total;
        cout << endl; //newlines for rows
    }

}