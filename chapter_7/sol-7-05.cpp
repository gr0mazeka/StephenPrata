//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 7.5 -------------------------

#include <iostream>
unsigned long int factor(int n);
int main()
{
    std::cout << "Enter non-negative value (q to quit): ";
    int val;
    while (std::cin >> val && val >= 0)
        std::cout << val << "! " << factor(val) << "\nNext value: ";
    return 0;
}
unsigned long int factor(int n)
{
    if (n == 0)
        return 1;
    else
        return n*factor(n - 1);
}
