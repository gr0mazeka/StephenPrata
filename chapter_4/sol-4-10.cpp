//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.10 ------------------------
/*
    Write a program that requests the user to enter three times for the 40-yd
    dash (or 40-meter, if you prefer) and then displays the times and the
    average. Use an array object to hold the data. (Use a built-in array if
    array is not available.)
*/
#include <iostream>
#include <array>
int main()
{
    using namespace std;
    array<float, 3> dash;
    cout << "Enter three times for the 40-meter dash\n 1: ";
    cin >> dash[0];
    cout << " 2: ";
    cin >> dash[1];
    cout << " 3: ";
    cin >> dash[2];
    cout << "First dash: " << dash[0] << "; second: " << dash[1] << "; third: "
         << dash[2] << "; average time: "<< (dash[0]+dash[1]+dash[2])/3 << endl;
    return 0;
}
