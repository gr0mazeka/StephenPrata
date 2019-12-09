//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 8.3 -------------------------

#include <iostream>
#include <string>
using namespace std;
void strUpp(string &);
int main(void)
{
    string str;
    cout << "Enter a string (q to quit): ";
    getline(cin, str);
    while(str != "q")
    {
        strUpp(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
        getline(cin, str);
    }
    cout << "Bye.\n";
    return 0;
}
void strUpp(string &str)
{
    for(int i = 0; i < str.length(); i++)
        str[i] = toupper(str[i]);
}
