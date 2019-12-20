//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 2.5 -------------------------

#include <iostream>
double converts(int c){ return 1.8*c+32; }
int main()
{
    std::cout << "Please enter a Celsius value: ";
    int cels;
    std::cin >> cels;
    std::cout << cels << " degrers Celsium is " << converts(cels)
              << " degrees Fahrenheit." << std::endl;
    return 0;
}
