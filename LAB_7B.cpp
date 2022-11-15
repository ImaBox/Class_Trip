/*
    * Name: Daryl_Galindo, 5005922033, CS135-1026, Lab7B
    * Description: input/output, file input, two dimensional arrays, and passing arrays
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
    string fileName{};

    const int row = 13, col = 2;
    double arr[row][col];

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

    // Read from file
for (int i = 0; i < row; i++) 
{
    for (int j = 0; j < col; j++)
    {
        // Access element/store data
        iFile >> arr[i][j];
    }
    iFile.close();
}
// Print the elements
for (int i = 0; i < row; i++) 
{
    for (int j = 0; j < col; j++)
    {
        // Access/output element
        cout << arr[i][j] << " ";
    }
    cout << endl;
}



    return 0;
}