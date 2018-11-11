//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 2.7 -------------------------

#include <iostream>
void convert(int h, int m)
{ std::cout << "Time: " << h << ":" << m << std::endl; }
int main()
{
    std::cout << "Enter the number of hours: ";
    int hour, min;
    std::cin >> hour;
    std::cout << "Enter the number of minutes: ";
    std::cin >> min;
    convert(hour, min);
    return 0;
}

