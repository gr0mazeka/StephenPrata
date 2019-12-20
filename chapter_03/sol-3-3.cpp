//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 3.3 -------------------------

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
    double convert = deg+(min+double(sec)/SEC_MIN)/MIN_DEG;
    std::cout << deg << " degrees, " << min << " minutes, " << sec
              << " seconds = " << convert << " degrees" << std::endl;
    return 0;
}
