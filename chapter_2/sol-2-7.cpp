//  ---------- S.Prata C++ Primer Plus 6th ed. ----------
//  ------------- Programming Exercises 2.7 -------------
/*
    Write a program that asks the user to enter an hour value and a minute
    value.The main() function should then pass these two values to a type void
    function that displays the two values in the format shown in the following
    sample run:
        Enter the number of hours: 9
        Enter the number of minutes: 28
        Time: 9:28
*/
#include <iostream>
void convert(int h, int m)
{ std::cout << "Time: " << h << ":" << m << std::endl; }
int main()
{
    std::cout << "Enter the number of hours: ";
    int hour;
    std::cin >> hour;
    std::cout << "Enter the number of minutes: ";
    int min;
    std::cin >> min;
    convert(hour, min);
    std::cin.get();
    std::cin.get();
    return 0;
}

