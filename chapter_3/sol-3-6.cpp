//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 3.6 -------------------------

#include <iostream>
int main()
{
    std::cout << "Enter distance in kilomters: ";
    float km, lt;
    std::cin >> km;
    std::cout << "Enter petrol in liters: ";
    std::cin >> lt;
    std::cout << "Gasoline consuption (liters per 100 kilometers): "
              <<  lt/km*100 << " lt/100km" << std::endl;
    return 0;
}

