//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 3.4 -------------------------
/*
    Write a program that asks the user to enter the number of seconds as an
    integer value (use type long, or, if available, long long) and that then
    displays the equivalent time in days, hours, minutes, and seconds. Use
    symbolic constants to represent the number of hours in the day, the number
    of minutes in an hour, and the number of seconds in a minute.The output
    should look like this:
    Enter the number of seconds: 31600000
    31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/
#include <iostream>
int main()
{
    const int HOUR_DAY = 24;
    const int MIN_HOUR = 60;
    const int SEC_MIN  = 60;
    std::cout << "Enter the number of seconds: ";
    long sec, temp;
    std::cin >> sec;
    temp = sec;
    int second = temp%SEC_MIN;
    temp /= SEC_MIN;
    int minutes = temp%MIN_HOUR;
    temp /= MIN_HOUR;
    int hour = temp%HOUR_DAY;
    int day =temp/HOUR_DAY;
    std::cout << sec << " seconds = "<< day << " days, " << hour << " hours, "
              << minutes << " minutes, " << second << " seconds" << std::endl;
    return 0;
}
