//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 5.3 -------------------------
/*
    Write a program that asks the user to type in numbers. After each entry, the
    program should report the cumulative sum of the entries to date. The program
    should terminate when the user enters 0.
*/
#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter number (0 for terminate): ";
    int num, sum = 0;
    while(num != 0)
    {
        cin >> num;
        sum += num;
        cout << "Sum = " << sum << endl;
    }
    return 0;
}
