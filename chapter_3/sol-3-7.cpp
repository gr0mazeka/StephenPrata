//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 3.7 -------------------------
/*
    Write a program that asks you to enter an automobile gasoline consumption
    figure in the European style (liters per 100 kilometers) and converts to the
    U.S. style of miles per gallon. Note that in addition to using different
    units of measurement, the U.S. approach (distance / fuel) is the inverse of
    the European approach (fuel / distance).  Note that 100 kilometers is 62.14
    miles, and 1 gallon is 3.875 liters.Thus, 19 mpg is about 12.4 l/100 km, and
    27 mpg is about 8.7 l/100 km.
*/
#include <iostream>
int main()
{
    const double LITER_GAL = 3.875;     // 1 gallon = 3.85 liters
    const double MIL_KM = 62.14;        // 100 km = 62.14 miles
    std::cout << "Enter gasoline consumption (liters/100 kilometers): ";
    double consum;
    std::cin >> consum;
    int consum_us = MIL_KM/(consum/LITER_GAL);
    std::cout << "Your consumption = " << consum_us << " miles/gallon\n";
    return 0;
}
