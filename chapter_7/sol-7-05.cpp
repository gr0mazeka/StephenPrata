//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 7.5 -------------------------

#include <iostream>
unsigned long int factor(unsigned int n);
int main()
{
    std::cout << "Enter value: ";
    unsigned int size;
    while (std::cin >> size)
        std::cout << size << "! " << factor(size) << "\nNext value: ";
    return 0;
}
unsigned long int factor(unsigned int n)
{
    if (n == 0)
        return 1;
    else
        return n*factor(n - 1);
}
