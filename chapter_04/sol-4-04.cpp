//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.4 -------------------------

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string fname, lname;
    cout << "Enter your first name: ";
    getline(cin, fname);
    cout << "Enter your last name: ";
    getline(cin, lname);
    string fullname = fname + ", " + lname;
    cout << "Here’s the information in a single string: " << fullname << endl;
    return 0;
}
