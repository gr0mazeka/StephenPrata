//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 6.8 -------------------------

#include <iostream>
#include <fstream>
const int SIZE = 60;
int main()
{
    using namespace std;
    ifstream inFile;
    char filename[SIZE];
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if(!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    char ch;
    inFile >> ch;
    int count = 0;
    while(inFile.good())
    {
        ++count;
        inFile >> ch;
    }
    cout << "Number of characters in the file: " << count << endl;
    inFile.close();
    return 0;
}
