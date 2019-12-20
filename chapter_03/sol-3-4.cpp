//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 3.4 -------------------------

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
