//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 3.5 -------------------------

#include <iostream>
int main()
{
    std::cout << "Enter the world's population: ";
    long long popul, popul_us;
    std::cin >> popul;
    std::cout << "Enter the population of the US: ";
    std::cin >> popul_us;
    double prst = popul_us*100.0/popul;
    std::cout << "The population of the US is " <<  prst
              << "% of the world population." << std::endl;
    return 0;
}
