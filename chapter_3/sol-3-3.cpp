//  ---------- S.Prata C++ Primer Plus 6th ed. ----------
//  ------------- Programming Exercises 3.3 -------------
/*
    Write a program that asks the user to enter a latitude in degrees, minutes,
    and seconds and that then displays the latitude in decimal format.There are
    60 seconds of arc to a minute and 60 minutes of arc to a degree; represent
    these values with symbolic constants.You should use a separate variable for
    each input value.A sample run should look like this:
        Enter a latitude in degrees, minutes, and seconds:
        First, enter the degrees: 37
        Next, enter the minutes of arc: 51
        Finally, enter the seconds of arc: 19
        37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/
#include <iostream>
int main()
{
    const int MIN_DEG = 60;     // 1 deg = 60 min
    const int SEC_MIN = 60;     // 1 min = 60 sec
    std::cout << "Enter a latitude in degrees, minutes, and seconds:\n"
                 "First, enter the degrees: ";
    int deg, min, sec;
    std::cin >> deg;
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> min;
    std::cout << "Finally, enter the seconds of arc: ";
    std::cin >> sec;
    double convert = deg+(min+(double)sec/SEC_MIN)/MIN_DEG;
    std::cout << deg << " degrees, " << min << " minutes, " << sec
              << " seconds = " << convert << " degrees" << std::endl;
    return 0;
}
