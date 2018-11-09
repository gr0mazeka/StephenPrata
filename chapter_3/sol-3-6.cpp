//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 3.6 -------------------------
/*
    Write a program that asks how many miles you have driven and how many
    gallons of gasoline you have used and then reports the miles per gallon your
    car has gotten.  Or, if you prefer, the program can request distance in
    kilometers and petrol in liters and then report the result European style,
    in liters per 100 kilometers.
*/
#include <iostream>
int main()
{
    std::cout << "Enter distance in kilomters: ";
    float km, lt;
    std::cin >> km;
    std::cout << "Enter petrol in liters: ";
    std::cin >> lt;
    std::cout << "Gasoline consuption (liters per 100 kilometers): "
              <<  lt/km*100 << " lt/km" << std::endl;
    return 0;
}

