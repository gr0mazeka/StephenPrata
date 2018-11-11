//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 2.6 -------------------------

#include <iostream>
double convert(double y){ return y*63240; }
int main()
{
    std::cout << "Enter the number of light years: ";
    double year;
    std::cin >> year;
    std::cout << year << " light years = " << convert(year)
              << " astronomical units." << std::endl;
    return 0;
}

