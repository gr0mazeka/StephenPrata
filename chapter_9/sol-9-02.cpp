//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 9.2 -------------------------

#include <iostream>
#include <string>

void strcount(const std::string);
int main(void)
{
    using namespace std;
    string input;
    cout << "Enter a line: \n";
    while(getline(cin, input) && input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
    }
    cout << "Bye\n";
    return 0;
}
void strcount(const std::string str)
{
    using namespace std;
    static int total = 0;
    int count = str.length();
    cout << "\"" << str << "\" contains ";
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
