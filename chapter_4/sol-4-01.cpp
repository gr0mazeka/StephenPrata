//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.1 -------------------------

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string fname, lname;
    cout << "What is your firs name? ";
    getline(cin, fname);
    cout << "What is your last name? ";
    getline(cin, lname);
    cout << "What letter grade do you deserve? ";
    char letter;
    cin >> letter;
    cout << "What is your age? ";
    int age;
    cin >> age;
    cout << "Name: " << lname << ", " << fname << "\nGrade: " << ++letter
         << "\nAge: " << age << endl;
    return 0;
}
