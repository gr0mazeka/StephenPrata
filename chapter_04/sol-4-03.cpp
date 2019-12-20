//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.3 -------------------------

#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int SIZE = 30;
    cout << "Enter your first name: ";
    char fname[SIZE];
    cin.getline(fname, SIZE);
    cout << "Enter your last name: ";
    char lname[SIZE];
    cin.getline(lname, SIZE);
    strcat(lname, ", ");
    strcat(lname, fname);
    cout << "Here’s the information in a single string: " << lname << endl;
    return 0;
}
