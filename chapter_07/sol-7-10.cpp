//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 7.10 ------------------------

#include <iostream>
const int SIZE = 3;
double add(double x, double y) { return x + y; }
double mult(double x, double y) { return x * y; }
double sub(double x, double y) { return x - y; }
void calculate(double, double, double (*pf[])(double, double), int);
int main(void)
{
    double (*pf[SIZE])(double, double) = {add, sub, mult};
    double x, y;
    std::cout << "Enter two values (q to quit): \n";
    while(std::cin >> x >> y)
    {
        std::cout << "Result (add, sub, mult): \n";
        calculate(x, y, pf, SIZE);
        std::cout << "Next values: \n";
    }
    return 0;
}
void calculate(double x, double y, double (*pf[])(double,double), int n)
{
    for (int i = 0; i < n; i++)
        std::cout << pf[i](x, y) << std::endl;
}
