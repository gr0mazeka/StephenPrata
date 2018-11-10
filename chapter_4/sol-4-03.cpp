//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.3 -------------------------
/*
    Write a program that asks the user to enter his or her first name and then
    last name, and that then constructs, stores, and displays a third string,
    consisting of the user’s last name followed by a comma, a space, and first
    name. Use char arrays and functions from the cstring header file.A sample
    run could look like this:
    Enter your first name: Flip
    Enter your last name: Fleming
    Here’s the information in a single string: Fleming, Flip
*/
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
