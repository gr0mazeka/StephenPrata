//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 3.5 -------------------------
/*
    Write a program that requests the user to enter the current world population
    and the current population of the U.S. (or of some other nation of your
    choice). Store the information in variables of type long long. Have the
    program display the percent that the U.S. (or other nation’s) population is
    of the world’s population.The output should look something like this:
    Enter the world's population: 6898758899
    Enter the population of the US: 310783781
    The population of the US is 4.50492% of the world population.
    You can use the Internet to get more recent figures.
*/
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
