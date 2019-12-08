//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 6.4 -------------------------

#include <iostream>
const int strsize = 20;
const int SIZE = 5;
struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
int main()
{
    using namespace std;
    bop arrbop[SIZE]{
        {"Wimp Macho", "Engineer", "STAR", 0},
        {"Raki Rhodes", "Junior Programmer", "SUN", 1},
        {"Celia Laiter", "Broker", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "MAGIC", 1},
        {"Pat Hand", "Electrician", "LOOPY", 2}
    };
    cout << "Benevolent Order of Programmers Report\n"
            " a. display by name\t b. display by title\n"
            " c. display by bopname\t d. display by preference\n"
            " q. quit\n";
    cout << "Enter your choice: ";
    char ch;
    cin >> ch;
    while(ch !='q')
    {
        switch (ch)
        {
            case 'a': {
                    for(int i = 0; i < SIZE; i++)
                        cout << arrbop[i].fullname << endl;
                    break; }
            case 'b': {
                    for(int i = 0; i < SIZE; i++)
                        cout << arrbop[i].title << endl;
                    break; }
            case 'c': {
                    for(int i = 0; i < SIZE; i++)
                        cout << arrbop[i].bopname << endl;
                    break; }
            case 'd': {
                    for(int i = 0; i < SIZE; i++)
                        switch (arrbop[i].preference)
                        {
                            case 0: cout << arrbop[i].fullname << endl; break;
                            case 1: cout << arrbop[i].title << endl; break;
                            case 2: cout << arrbop[i].bopname << endl; break;
                        }
                    break; }
        }
        cout << "Next choice: ";
        cin >> ch;
    }
    cout << "Bye!" << endl;
    return 0;
}
