//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 5.1 -------------------------
/*
    Write a program that requests the user to enter two integers. The program
    should then calculate and report the sum of all the integers between and
    including the two integers. At this point, assume that the smaller integer
    is entered first. For example, if the user enters 2 and 9, the program
    should report that the sum of all the integers from 2 through 9 is 44.
*/
#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter two integers.\n First: ";
    int a, b, c = 0;
    cin >> a;
    cout << " Second: ";
    cin >> b;
    for(; a <= b; a++)
        c += a;
    cout <<"Sum of all the integers "<< a <<" through "<< b <<" = "<< c << endl;
    return 0;
}
