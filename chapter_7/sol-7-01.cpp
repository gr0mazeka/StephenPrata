//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 7.1 -------------------------

#include <iostream>
double harmonic(double x, double y) { return (2.0*x*y)/(x+y); }
int main()
{
    std::cout << "Enter pairs of numbers: (0 for terminate):\n";
    double x, y;
    while (std::cin >> x && x != 0 && std::cin >> y && y != 0)
        std::cout << "Harmonic (" << x << ", " << y << ") = " << harmonic(x, y)
                  << "\nEnter pair of numbers:\n";
    return 0;
}
