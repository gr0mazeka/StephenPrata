//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 3.7 -------------------------

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
