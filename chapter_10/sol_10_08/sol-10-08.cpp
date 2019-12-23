//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 10.8 ------------------------

#include "list_10.h"
#include <iostream>

void sqr(double & y){ y *= y; }
int main(void)
{
    List lst;
    double tmp;
    std::cout << "Enter a number (q to quit): ";
    while(std::cin >> tmp)
    {
        lst.add(tmp);
        if(lst.isfull()) break;
        std::cout << "Enter a number (q to quit): ";
    }
    lst.show();
    lst.visit(sqr);
    lst.show();
    return 0;
}
